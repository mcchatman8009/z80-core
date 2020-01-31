#include "Z80Compiler.h"
#include <sstream>
#include "ImmediateValueReader.h"
#include <antlr4-runtime.h>
#include <antlr4-common.h>
#include <Z80Lexer.h>

using namespace std;
using namespace antlr4;

template<class Rule>
void Z80Compiler::addEncodedInstructionBytesToRom(string name, Rule* context) { // NOLINT
    string dest = context->dest->getText();
    string source = context->source->getText();
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);

    addBytesToRom(results);
}

std::vector<unsigned char> Z80Compiler::compile(std::string& assemblyCode) {
    stringstream stringStream;
    stringStream << assemblyCode;
    stringStream << '\n';

    ANTLRInputStream stream(stringStream);

    Z80Lexer lexer(&stream);
    CommonTokenStream tokens(&lexer);

    auto parser = Z80Parser(&tokens);

    Ref<BailErrorStrategy> bailErrorStrategy(new BailErrorStrategy());
    parser.setErrorHandler(bailErrorStrategy);

    auto* tree = parser.program();

    tree::ParseTreeWalker::DEFAULT.walk(this, tree);

    return romData;
}

void Z80Compiler::enterProgram(Z80Parser::ProgramContext* context) {
    romData.clear();
    Z80BaseListener::enterProgram(context);
}

void Z80Compiler::exitLoadByteRegisterWithByteRegister(Z80Parser::LoadByteRegisterWithByteRegisterContext* context) {
    //
    // LD r8, r8
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadByteRegisterWithImmediateByte(Z80Parser::LoadByteRegisterWithImmediateByteContext* context) {
    //
    // LD r8, n
    //
    ImmediateValueReader valueReader;
    unsigned char number = valueReader.readNumber(context->source);
    string instruction =
        context->loadCommandName()->getText() + " " + context->dest->getText() + " , n";
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {number});

    addBytesToRom(results);

    Z80BaseListener::exitLoadByteRegisterWithImmediateByte(context);
}

void Z80Compiler::exitLoadByteRegisterWithHLPointer(Z80Parser::LoadByteRegisterWithHLPointerContext* context) {
    //
    // LD r8, (HL)
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadByteRegisterWithIXOffset(Z80Parser::LoadByteRegisterWithIXOffsetContext* context) {
    //
    // LD r8, (ix+n)
    //
    auto number = readByte(context->source->number());
    string instruction =
        context->loadCommandName()->getText() + " " + context->dest->getText() + " , (ix + n)";
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {number});
    addBytesToRom(results);
}

void Z80Compiler::exitLoadByteRegisterWithIYOffset(Z80Parser::LoadByteRegisterWithIYOffsetContext* context) {
    //
    // LD r8, (iy+n)
    //
    auto number = readByte(context->source->number());

    string instruction =
        context->loadCommandName()->getText() + " " + context->dest->getText() + " , (iy + n)";
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {number});
    addBytesToRom(results);
}

void Z80Compiler::exitLoadHLPointerWithRegister(Z80Parser::LoadHLPointerWithRegisterContext* context) {
    //
    // LD (HL), r8
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIXOffsetWithRegister(Z80Parser::LoadIXOffsetWithRegisterContext* context) {
    //
    // LD (ix + n), r8
    //
    string instruction =
        context->loadCommandName()->getText() + " (ix+n)" + " , " + context->source->getText();

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction,
                                                                          {readByte(context->dest->number())});
    addBytesToRom(results);
}

void Z80Compiler::exitLoadIYOffsetWithRegister(Z80Parser::LoadIYOffsetWithRegisterContext* context) {
    //
    // LD (iy + n), r8
    //
    string instruction =
        context->loadCommandName()->getText() + " (iy+n)" + " , " + context->source->getText();

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction,
                                                                          {readByte(context->dest->number())});
    addBytesToRom(results);
}

void Z80Compiler::exitLoadHLPointerWithImmediateByte(Z80Parser::LoadHLPointerWithImmediateByteContext* context) {
    //
    // LD (HL), n
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
//    string source = context->source->getText();
    string source = "n";
    string instruction = name + " " + dest + " , " + source;
    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});

    addBytesToRom(results);
}

void Z80Compiler::exitLoadIXOffsetWithImmediateByte(Z80Parser::LoadIXOffsetWithImmediateByteContext* context) {
    //
    // LD (ix + n), n
    //
    string name = context->loadCommandName()->getText();
    string dest = "(ix + n)";
    string source = "n";
    string instruction = name + " " + dest + " , " + source;
    auto data = readByte(context->dest->number());
    auto data2 = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data, data2});

    addBytesToRom(results);
}

void Z80Compiler::exitLoadIYOffsetWithImmediateByte(Z80Parser::LoadIYOffsetWithImmediateByteContext* context) {
    //
    // LD (iy + n), n
    //
    string name = context->loadCommandName()->getText();
    string dest = "(iy + n)";
    string source = "n";
    string instruction = name + " " + dest + " , " + source;
    auto data = readByte(context->dest->number());
    auto data2 = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data, data2});

    addBytesToRom(results);
}

void Z80Compiler::exitLoadAWithBCPointer(Z80Parser::LoadAWithBCPointerContext* context) {
    //
    // LD A, (BC)
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadAWithDEPointer(Z80Parser::LoadAWithDEPointerContext* context) {
    //
    // LD A, (DE)
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadAWithNNPointer(Z80Parser::LoadAWithNNPointerContext* context) {
    //
    // LD A, (n)
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "(n)";
    string instruction = name + " " + dest + " , " + source;
    auto bytes = readWordBytes(context->source);

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, bytes);

    addBytesToRom(results);
}

void Z80Compiler::exitLoadBCPointerWithA(Z80Parser::LoadBCPointerWithAContext* context) {
    //
    // LD (BC), A
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadDEPointerWithA(Z80Parser::LoadDEPointerWithAContext* context) {
    //
    // LD (DE), A
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadNNPointerWithA(Z80Parser::LoadNNPointerWithAContext* context) {
    //
    // LD (n), A
    //
    string name = context->loadCommandName()->getText();
    string dest = "(n)";
    string source = context->source->getText();
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->dest));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadAWithI(Z80Parser::LoadAWithIContext* context) {
    //
    // LD A, I
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadAWithR(Z80Parser::LoadAWithRContext* context) {
    //
    // LD A, R
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIWithA(Z80Parser::LoadIWithAContext* context) {
    //
    // LD I, A
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadRWithA(Z80Parser::LoadRWithAContext* context) {
    //
    // LD R, A
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}


void Z80Compiler::exitLoadRegisterWithIXHigh(Z80Parser::LoadRegisterWithIXHighContext* context) {
    //
    // LD r8, IXH
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadRegisterWithIXLow(Z80Parser::LoadRegisterWithIXLowContext* context) {
    //
    // LD r8, IXL
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadRegisterWithIYHigh(Z80Parser::LoadRegisterWithIYHighContext* context) {
    //
    // LD r8, IYH
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadRegisterWithIYLow(Z80Parser::LoadRegisterWithIYLowContext* context) {
    //
    // LD r8, IYL
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIXHighWithRegister(Z80Parser::LoadIXHighWithRegisterContext* context) {
    //
    // LD IXH, r8
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIXLowWithRegister(Z80Parser::LoadIXLowWithRegisterContext* context) {
    //
    // LD IXL, r8
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIYHighWithRegister(Z80Parser::LoadIYHighWithRegisterContext* context) {
    //
    // LD IYH, r8
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIYLowWithRegister(Z80Parser::LoadIYLowWithRegisterContext* context) {
    //
    // LD IYL, r8
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIXNibbles(Z80Parser::LoadIXNibblesContext* context) {
    //
    // LD IX(H|L), IX(H|L)
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadIYNibbles(Z80Parser::LoadIYNibblesContext* context) {
    //
    // LD IY(H|L), IY(H|L)
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadWordWithImmediateWord(Z80Parser::LoadWordWithImmediateWordContext* context) {
    //
    // LD r16, n
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "n";
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->source));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadIXWithImmediateWord(Z80Parser::LoadIXWithImmediateWordContext* context) {
    //
    // LD IX, n
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "n";
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->source));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadIYWithImmediateWord(Z80Parser::LoadIYWithImmediateWordContext* context) {
    //
    // LD IY, n
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "n";
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->source));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadIXWithNNPointer(Z80Parser::LoadIXWithNNPointerContext* context) {
    //
    // LD IX, (n)
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "(n)";
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->source));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadIYWithNNPointer(Z80Parser::LoadIYWithNNPointerContext* context) {
    //
    // LD IY, (n)
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "(n)";
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->source));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadNNPointerWithIX(Z80Parser::LoadNNPointerWithIXContext* context) {
    //
    // LD (n), IX
    //
    string name = context->loadCommandName()->getText();
    string dest = "(n)";
    string source = context->source->getText();
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->dest));

    addBytesToRom(results);
}


void Z80Compiler::exitLoadNNPointerWithIY(Z80Parser::LoadNNPointerWithIYContext* context) {
    //
    // LD (n), IY
    //
    string name = context->loadCommandName()->getText();
    string dest = "(n)";
    string source = context->source->getText();
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->dest));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadWordRegisterWithNNPointer(Z80Parser::LoadWordRegisterWithNNPointerContext* context) {
    //
    // LD r16, (n)
    //
    string name = context->loadCommandName()->getText();
    string dest = context->dest->getText();
    string source = "(n)";
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->source));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadNNPointerWithWordRegister(Z80Parser::LoadNNPointerWithWordRegisterContext* context) {
    //
    // LD (n), r16
    //
    string name = context->loadCommandName()->getText();
    string dest = "(n)";
    string source = context->source->getText();
    string instruction = name + " " + dest + " , " + source;

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, readWordBytes(context->dest));

    addBytesToRom(results);
}

void Z80Compiler::exitLoadSPWithHL(Z80Parser::LoadSPWithHLContext* context) {
    //
    // LD SP, HL
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadSPWithIX(Z80Parser::LoadSPWithIXContext* context) {
    //
    // LD SP, IX
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitLoadSPWithIY(Z80Parser::LoadSPWithIYContext* context) {
    //
    // LD SP, IY
    //
    addEncodedInstructionBytesToRom(context->loadCommandName()->getText(), context);
}

void Z80Compiler::exitPushWordRegister(Z80Parser::PushWordRegisterContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        context->pushCommandName()->getText() + " " + context->source->getText()
    );
    addBytesToRom(results);
}


void Z80Compiler::exitPushIX(Z80Parser::PushIXContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        context->pushCommandName()->getText() + " " + context->source->getText()
    );
    addBytesToRom(results);
}

void Z80Compiler::exitPushIY(Z80Parser::PushIYContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        context->pushCommandName()->getText() + " " + context->source->getText()
    );
    addBytesToRom(results);
}

void Z80Compiler::exitPopWordRegister(Z80Parser::PopWordRegisterContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        context->popCommandName()->getText() + " " + context->source->getText()
    );
    addBytesToRom(results);
}

void Z80Compiler::exitPopIX(Z80Parser::PopIXContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        context->popCommandName()->getText() + " " + context->source->getText()
    );
    addBytesToRom(results);
}

void Z80Compiler::exitPopIY(Z80Parser::PopIYContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        context->popCommandName()->getText() + " " + context->source->getText()
    );
    addBytesToRom(results);
}

void Z80Compiler::exitExchangeDEWithHL(Z80Parser::ExchangeDEWithHLContext* context) {
    //
    // EX DE, HL
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        "EX " + context->deRegister()->getText() + ", " + context->hlRegister()->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitExchangeAFWithShadowAF(Z80Parser::ExchangeAFWithShadowAFContext* context) {
    //
    // EX AF, AF'
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        "EX " + context->afRegister(0)->getText() + ", " + context->afRegister(1)->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitExchangeMultipleWordRegisters(Z80Parser::ExchangeMultipleWordRegistersContext* context) {
    //
    // EXX
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitExchangeSPPointerWithHL(Z80Parser::ExchangeSPPointerWithHLContext* context) {
    //
    // EX (SP), HL
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        "EX " + context->spPointer()->getText() + ", " + context->hlRegister()->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitExchangeSPPointerWithIX(Z80Parser::ExchangeSPPointerWithIXContext* context) {
    //
    // EX (SP), IX
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        "EX " + context->spPointer()->getText() + ", " + context->ixRegister()->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitExchangeSPPointerWithIY(Z80Parser::ExchangeSPPointerWithIYContext* context) {
    //
    // EX (SP), IY
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(
        "EX " + context->spPointer()->getText() + ", " + context->iyRegister()->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(
    Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext* context) {
    //
    // LDI
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(
    Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext* context) {
    //
    // LDIR
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitLoadDEPointerWithHLPointerThenDecrementBCAndHL(
    Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext* context) {
    //
    // LDD
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(
    Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext* context) {
    //
    // LDDR
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);

}

void Z80Compiler::exitCompareAToHLPointerThenIncrementHLAndDecrementBC(
    Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext* context) {
    //
    // CPI
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(
    Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext* context) {
    //
    // CPIR
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAToHLPointerThenDecrementHLAndBC(
    Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext* context) {
    //
    // CPD
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAToHLPointerThenDecrementHLAndBCRepeat(
    Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext* context) {
    //
    // CPDR
    //
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(context->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndRegister(Z80Parser::AddAAndRegisterContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADD A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndImmediateByte(Z80Parser::AddAAndImmediateByteContext* context) {
    auto data = readByte(context->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes("ADD A, n", {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndIXH(Z80Parser::AddAAndIXHContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADD A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndIXL(Z80Parser::AddAAndIXLContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADD A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndIYH(Z80Parser::AddAAndIYHContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADD A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndIYL(Z80Parser::AddAAndIYLContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADD A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndHLPointer(Z80Parser::AddAAndHLPointerContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADD A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndIXOffset(Z80Parser::AddAAndIXOffsetContext* context) {
    auto data = readByte(context->ixPointerWithOffset()->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes("ADD A, (ix+n)", {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAddAAndIYOffset(Z80Parser::AddAAndIYOffsetContext* context) {
    auto data = readByte(context->iyPointerWithOffset()->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes("ADD A, (iy+n)", {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndRegister(Z80Parser::AddWithCarryAAndRegisterContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADC A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndHLPointer(Z80Parser::AddWithCarryAAndHLPointerContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADC A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndImmediate(Z80Parser::AddWithCarryAAndImmediateContext* context) {
    auto data = readByte(context->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes("ADC A, n", {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndIXOffset(Z80Parser::AddWithCarryAAndIXOffsetContext* context) {
    auto data = readByte(context->ixPointerWithOffset()->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes("ADC A, (ix+n)", {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndIYOffset(Z80Parser::AddWithCarryAAndIYOffsetContext* context) {
    auto data = readByte(context->iyPointerWithOffset()->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes("ADC A, (iy+n)", {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndIXH(Z80Parser::AddWithCarryAAndIXHContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADC A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndIXL(Z80Parser::AddWithCarryAAndIXLContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADC A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndIYH(Z80Parser::AddWithCarryAAndIYHContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADC A, " + context->source->getText());
    addBytesToRom(results);
}

void Z80Compiler::exitAddWithCarryAAndIYL(Z80Parser::AddWithCarryAAndIYLContext* context) {
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes("ADC A, " + context->source->getText());
    addBytesToRom(results);
}

#include "interpolate.h"

void Z80Compiler::exitSubtractRegisterFromA(Z80Parser::SubtractRegisterFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string src = context->source->getText();
    string dest = "A";
    string instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractHLPointerFromA(Z80Parser::SubtractHLPointerFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string src = context->source->getText();
    string dest = "A";
    string instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractImmediateFromA(Z80Parser::SubtractImmediateFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string dest = "A";
    string immediate = "n";
    auto instruction = interpolate(instructionFormat, dest, immediate);
    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractIXOffsetFromA(Z80Parser::SubtractIXOffsetFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string dest = "A";
    string src = "(ix+n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->ixPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractIYOffsetFromA(Z80Parser::SubtractIYOffsetFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string dest = "A";
    string src = "(iy+n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->iyPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractIXHighOrLowFromA(Z80Parser::SubtractIXHighOrLowFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractIYHighOrLowFromA(Z80Parser::SubtractIYHighOrLowFromAContext* context) {
    string instructionFormat = "SUB {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowRegisterFromA(Z80Parser::SubtractWithBorrowRegisterFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowHLPointerFromA(Z80Parser::SubtractWithBorrowHLPointerFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitSubtractWithBorrowIXOffsetFromA(Z80Parser::SubtractWithBorrowIXOffsetFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = "(ix+n)";
    auto instruction = interpolate(instructionFormat, dest, src);

    auto data = readByte(context->source->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowIYOffsetFromA(Z80Parser::SubtractWithBorrowIYOffsetFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = "(iy+n)";
    auto instruction = interpolate(instructionFormat, dest, src);

    auto data = readByte(context->source->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}


void Z80Compiler::exitSubtractWithBorrowImmediateFromA(Z80Parser::SubtractWithBorrowImmediateFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = "n";
    auto instruction = interpolate(instructionFormat, dest, src);

    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowIXHFromA(Z80Parser::SubtractWithBorrowIXHFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowIXLFromA(Z80Parser::SubtractWithBorrowIXLFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowIYHFromA(Z80Parser::SubtractWithBorrowIYHFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitSubtractWithBorrowIYLFromA(Z80Parser::SubtractWithBorrowIYLFromAContext* context) {
    string instructionFormat = "SBC {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitAndAWithRegister(Z80Parser::AndAWithRegisterContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithImmediate(Z80Parser::AndAWithImmediateContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = "n";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithHLPointer(Z80Parser::AndAWithHLPointerContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithIXOffset(Z80Parser::AndAWithIXOffsetContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = "(ix + n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->ixPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithIYOffset(Z80Parser::AndAWithIYOffsetContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = "(iy + n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->iyPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithIXH(Z80Parser::AndAWithIXHContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithIXL(Z80Parser::AndAWithIXLContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithIYH(Z80Parser::AndAWithIYHContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitAndAWithIYL(Z80Parser::AndAWithIYLContext* context) {
    string instructionFormat = "AND {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithRegister(Z80Parser::OrAWithRegisterContext* context) {

    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithImmediate(Z80Parser::OrAWithImmediateContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = "n";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}


void Z80Compiler::exitOrAWithHLPointer(Z80Parser::OrAWithHLPointerContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithIXOffset(Z80Parser::OrAWithIXOffsetContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = "(ix + n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->ixPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithIYOffset(Z80Parser::OrAWithIYOffsetContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = "(iy + n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->iyPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithIXH(Z80Parser::OrAWithIXHContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithIXL(Z80Parser::OrAWithIXLContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithIYH(Z80Parser::OrAWithIYHContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitOrAWithIYL(Z80Parser::OrAWithIYLContext* context) {
    string instructionFormat = "OR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithRegister(Z80Parser::XorAWithRegisterContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithImmediate(Z80Parser::XorAWithImmediateContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = "n";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithHLPointer(Z80Parser::XorAWithHLPointerContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithIXOffset(Z80Parser::XorAWithIXOffsetContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = "(ix + n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->ixPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithIYOffset(Z80Parser::XorAWithIYOffsetContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = "(iy + n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->iyPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithIXH(Z80Parser::XorAWithIXHContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithIXL(Z80Parser::XorAWithIXLContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitXorAWithIYH(Z80Parser::XorAWithIYHContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitXorAWithIYL(Z80Parser::XorAWithIYLContext* context) {
    string instructionFormat = "XOR {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithRegister(Z80Parser::CompareAWithRegisterContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithHLPointer(Z80Parser::CompareAWithHLPointerContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithImmediate(Z80Parser::CompareAWithImmediateContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = "n";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithIXOffset(Z80Parser::CompareAWithIXOffsetContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = "(ix+n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->ixPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithIYOffset(Z80Parser::CompareAWithIYOffsetContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = "(iy+n)";
    auto instruction = interpolate(instructionFormat, dest, src);
    auto data = readByte(context->iyPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithIXH(Z80Parser::CompareAWithIXHContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithIXL(Z80Parser::CompareAWithIXLContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithIYH(Z80Parser::CompareAWithIYHContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitCompareAWithIYL(Z80Parser::CompareAWithIYLContext* context) {
    string instructionFormat = "CP {1}, {2}";
    string dest = "A";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, dest, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementRegister(Z80Parser::IncrementRegisterContext* context) {
    string instructionFormat = "INC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementIXH(Z80Parser::IncrementIXHContext* context) {
    string instructionFormat = "INC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementIXL(Z80Parser::IncrementIXLContext* context) {
    string instructionFormat = "INC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementIYH(Z80Parser::IncrementIYHContext* context) {
    string instructionFormat = "INC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementIYL(Z80Parser::IncrementIYLContext* context) {
    string instructionFormat = "INC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementHLPointer(Z80Parser::IncrementHLPointerContext* context) {
    string instructionFormat = "INC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementIXOffset(Z80Parser::IncrementIXOffsetContext* context) {
    string instruction = "INC (ix+n)";

    auto data = readByte(context->ixPointerWithOffset()->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}


void Z80Compiler::exitIncrementIYOffset(Z80Parser::IncrementIYOffsetContext* context) {
    string instruction = "INC (iy+n)";

    auto data = readByte(context->iyPointerWithOffset()->number());
    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementRegister(Z80Parser::DecrementRegisterContext* context) {
    string instructionFormat = "DEC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementIXH(Z80Parser::DecrementIXHContext* context) {
    string instructionFormat = "DEC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementIXL(Z80Parser::DecrementIXLContext* context) {
    string instructionFormat = "DEC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitDecrementIYH(Z80Parser::DecrementIYHContext* context) {
    string instructionFormat = "DEC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementIYL(Z80Parser::DecrementIYLContext* context) {
    string instructionFormat = "DEC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementHLPointer(Z80Parser::DecrementHLPointerContext* context) {
    string instructionFormat = "DEC {1}";
    string src = context->source->getText();
    auto instruction = interpolate(instructionFormat, src);

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementIXOffset(Z80Parser::DecrementIXOffsetContext* context) {
    string instructionFormat = "DEC {1}";
    string src = "(ix+n)";
    auto instruction = interpolate(instructionFormat, src);
    auto data = readByte(context->ixPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}


void Z80Compiler::exitDecrementIYOffset(Z80Parser::DecrementIYOffsetContext* context) {
    string instructionFormat = "DEC {1}";
    string src = "(iy+n)";
    auto instruction = interpolate(instructionFormat, src);
    auto data = readByte(context->iyPointerWithOffset()->number());

    auto results = instructionEncoder.encodeInstructionWithImmediateBytes(instruction, {data});
    addBytesToRom(results);
}


void Z80Compiler::exitArithmeticCommand(Z80Parser::ArithmeticCommandContext* context) {
    Z80BaseListener::exitArithmeticCommand(context);
}


void Z80Compiler::exitDecimalAdjustA(Z80Parser::DecimalAdjustAContext* context) {
    //
    // DAA
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitComplementA(Z80Parser::ComplementAContext* context) {
    //
    // CPL
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitNegateA(Z80Parser::NegateAContext* context) {
    // NEG
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitCompletementCarryFlag(Z80Parser::CompletementCarryFlagContext* context) {
    //
    // CCF
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitSetCarryFlag(Z80Parser::SetCarryFlagContext* context) {
    //
    // SCF
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitNop(Z80Parser::NopContext* context) {
    //
    // NOP
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitHalt(Z80Parser::HaltContext* context) {
    //
    // HALT
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitDisableInterrupts(Z80Parser::DisableInterruptsContext* context) {
    //
    // DI
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitEnableInterrupts(Z80Parser::EnableInterruptsContext* context) {
    //
    // EI
    //
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitSetInterruptMode(Z80Parser::SetInterruptModeContext* context) {
    //
    // IM <mode>
    //
    auto instruction = "IM " + context->number()->getText();

    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void Z80Compiler::exitAddHLAndWordRegister(Z80Parser::AddHLAndWordRegisterContext* context) {
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}


void Z80Compiler::exitAddWithCarryHLAndWordRegister(Z80Parser::AddWithCarryHLAndWordRegisterContext* context) {
    auto instruction = context->getText();
    auto results = instructionEncoder.encodeInstructionWithoutImmediateBytes(instruction);
    addBytesToRom(results);
}

void
Z80Compiler::exitSubtractWithCarryWordRegisterFromHL(Z80Parser::SubtractWithCarryWordRegisterFromHLContext* context) {
    Z80BaseListener::exitSubtractWithCarryWordRegisterFromHL(context);
}


void Z80Compiler::exitSimpleIXAdditionRegister(Z80Parser::SimpleIXAdditionRegisterContext* context) {
    Z80BaseListener::exitSimpleIXAdditionRegister(context);
}


void Z80Compiler::exitSimpleIYAdditionRegister(Z80Parser::SimpleIYAdditionRegisterContext* context) {
    Z80BaseListener::exitSimpleIYAdditionRegister(context);
}


void Z80Compiler::exitAddIXWithRegister(Z80Parser::AddIXWithRegisterContext* context) {
    Z80BaseListener::exitAddIXWithRegister(context);
}


void Z80Compiler::exitAddIYWithRegister(Z80Parser::AddIYWithRegisterContext* context) {
    Z80BaseListener::exitAddIYWithRegister(context);
}


void Z80Compiler::exitIncrementWordRegister(Z80Parser::IncrementWordRegisterContext* context) {
    Z80BaseListener::exitIncrementWordRegister(context);
}


void Z80Compiler::exitIncrementIX(Z80Parser::IncrementIXContext* context) {
    Z80BaseListener::exitIncrementIX(context);
}


void Z80Compiler::exitIncrementIY(Z80Parser::IncrementIYContext* context) {
    Z80BaseListener::exitIncrementIY(context);
}


void Z80Compiler::exitDecrementWordRegister(Z80Parser::DecrementWordRegisterContext* context) {
    Z80BaseListener::exitDecrementWordRegister(context);
}


void Z80Compiler::exitDecrementIX(Z80Parser::DecrementIXContext* context) {
    Z80BaseListener::exitDecrementIX(context);
}


void Z80Compiler::exitDecrementIY(Z80Parser::DecrementIYContext* context) {
    Z80BaseListener::exitDecrementIY(context);
}


void Z80Compiler::exitWordArithemeticCommand(Z80Parser::WordArithemeticCommandContext* context) {
    Z80BaseListener::exitWordArithemeticCommand(context);
}


void Z80Compiler::exitRotateLeftCircularA(Z80Parser::RotateLeftCircularAContext* context) {
    Z80BaseListener::exitRotateLeftCircularA(context);
}


void Z80Compiler::exitRotateLeftThroughCarryA(Z80Parser::RotateLeftThroughCarryAContext* context) {
    Z80BaseListener::exitRotateLeftThroughCarryA(context);
}


void Z80Compiler::exitRotateRightCircularA(Z80Parser::RotateRightCircularAContext* context) {
    Z80BaseListener::exitRotateRightCircularA(context);
}


void Z80Compiler::exitRotateRightThroughtCarryA(Z80Parser::RotateRightThroughtCarryAContext* context) {
    Z80BaseListener::exitRotateRightThroughtCarryA(context);
}


void Z80Compiler::exitRotateLeftCircularCommandName(Z80Parser::RotateLeftCircularCommandNameContext* context) {
    Z80BaseListener::exitRotateLeftCircularCommandName(context);
}


void Z80Compiler::exitRotateLeftThroughCarryCommandName(Z80Parser::RotateLeftThroughCarryCommandNameContext* context) {
    Z80BaseListener::exitRotateLeftThroughCarryCommandName(context);
}


void Z80Compiler::exitRotateRightCircularCommandName(Z80Parser::RotateRightCircularCommandNameContext* context) {
    Z80BaseListener::exitRotateRightCircularCommandName(context);
}


void
Z80Compiler::exitRotateRightThroughCarryCommandName(Z80Parser::RotateRightThroughCarryCommandNameContext* context) {
    Z80BaseListener::exitRotateRightThroughCarryCommandName(context);
}

void Z80Compiler::exitShiftLeftArithmeticCommandName(Z80Parser::ShiftLeftArithmeticCommandNameContext* context) {
    Z80BaseListener::exitShiftLeftArithmeticCommandName(context);
}

void Z80Compiler::exitShiftLeftLogicialCommandName(Z80Parser::ShiftLeftLogicialCommandNameContext* context) {
    Z80BaseListener::exitShiftLeftLogicialCommandName(context);
}

void Z80Compiler::exitShiftRightArithmeticCommandName(Z80Parser::ShiftRightArithmeticCommandNameContext* context) {
    Z80BaseListener::exitShiftRightArithmeticCommandName(context);
}

void Z80Compiler::exitShiftRightLogicalCommandName(Z80Parser::ShiftRightLogicalCommandNameContext* context) {
    Z80BaseListener::exitShiftRightLogicalCommandName(context);
}

void Z80Compiler::exitRotateDigitLeftCommandName(Z80Parser::RotateDigitLeftCommandNameContext* context) {
    Z80BaseListener::exitRotateDigitLeftCommandName(context);
}

void Z80Compiler::exitRotateDigitRightCommandName(Z80Parser::RotateDigitRightCommandNameContext* context) {
    Z80BaseListener::exitRotateDigitRightCommandName(context);
}

void Z80Compiler::exitRotateLeftCircularRegister(Z80Parser::RotateLeftCircularRegisterContext* context) {
    Z80BaseListener::exitRotateLeftCircularRegister(context);
}

void Z80Compiler::exitRotateLeftCircularHLPointer(Z80Parser::RotateLeftCircularHLPointerContext* context) {
    Z80BaseListener::exitRotateLeftCircularHLPointer(context);
}

void Z80Compiler::exitRotateLeftCircularIXOffset(Z80Parser::RotateLeftCircularIXOffsetContext* context) {
    Z80BaseListener::exitRotateLeftCircularIXOffset(context);
}

void Z80Compiler::exitRotateLeftCircularIYOffset(Z80Parser::RotateLeftCircularIYOffsetContext* context) {
    Z80BaseListener::exitRotateLeftCircularIYOffset(context);
}

void Z80Compiler::exitRotateLeftThroughCarryRegister(Z80Parser::RotateLeftThroughCarryRegisterContext* context) {
    Z80BaseListener::exitRotateLeftThroughCarryRegister(context);
}

void Z80Compiler::exitRotateLeftThroughCarryHLPointer(Z80Parser::RotateLeftThroughCarryHLPointerContext* context) {
    Z80BaseListener::exitRotateLeftThroughCarryHLPointer(context);
}

void Z80Compiler::exitRotateLeftThroughCarryIXOffset(Z80Parser::RotateLeftThroughCarryIXOffsetContext* context) {
    Z80BaseListener::exitRotateLeftThroughCarryIXOffset(context);
}

void Z80Compiler::exitRotateLeftThroughCarryIYOffset(Z80Parser::RotateLeftThroughCarryIYOffsetContext* context) {
    Z80BaseListener::exitRotateLeftThroughCarryIYOffset(context);
}

void Z80Compiler::exitRotateRightCircularHLPointer(Z80Parser::RotateRightCircularHLPointerContext* context) {

}

void Z80Compiler::exitRotateRightCircularRegister(Z80Parser::RotateRightCircularRegisterContext* context) {
    Z80BaseListener::exitRotateRightCircularRegister(context);
}

void Z80Compiler::exitRotateRightCircularIXOffset(Z80Parser::RotateRightCircularIXOffsetContext* context) {
    Z80BaseListener::exitRotateRightCircularIXOffset(context);
}

void Z80Compiler::exitRotateRightCircularIYOffset(Z80Parser::RotateRightCircularIYOffsetContext* context) {
    Z80BaseListener::exitRotateRightCircularIYOffset(context);
}

void Z80Compiler::exitRotateRightThroughCarryRegister(Z80Parser::RotateRightThroughCarryRegisterContext* context) {
    Z80BaseListener::exitRotateRightThroughCarryRegister(context);
}

void Z80Compiler::exitRotateRightThroughCarryHLPointer(Z80Parser::RotateRightThroughCarryHLPointerContext* context) {
    Z80BaseListener::exitRotateRightThroughCarryHLPointer(context);
}

void Z80Compiler::exitRotateRightThroughCarryIXOffset(Z80Parser::RotateRightThroughCarryIXOffsetContext* context) {
    Z80BaseListener::exitRotateRightThroughCarryIXOffset(context);
}

void Z80Compiler::exitRotateRightThroughCarryIYOffset(Z80Parser::RotateRightThroughCarryIYOffsetContext* context) {
    Z80BaseListener::exitRotateRightThroughCarryIYOffset(context);
}

void Z80Compiler::exitShiftLeftArithmetic(Z80Parser::ShiftLeftArithmeticContext* context) {
    Z80BaseListener::exitShiftLeftArithmetic(context);
}

void Z80Compiler::exitShiftLeftLogical(Z80Parser::ShiftLeftLogicalContext* context) {
    Z80BaseListener::exitShiftLeftLogical(context);
}

void Z80Compiler::exitShiftRightArithmetic(Z80Parser::ShiftRightArithmeticContext* context) {
    Z80BaseListener::exitShiftRightArithmetic(context);
}

void Z80Compiler::exitShiftRightLogical(Z80Parser::ShiftRightLogicalContext* context) {
    Z80BaseListener::exitShiftRightLogical(context);
}

void Z80Compiler::exitRotateDigitLeft(Z80Parser::RotateDigitLeftContext* context) {
    Z80BaseListener::exitRotateDigitLeft(context);
}

void Z80Compiler::exitRotateDigitRight(Z80Parser::RotateDigitRightContext* context) {
    Z80BaseListener::exitRotateDigitRight(context);
}

void Z80Compiler::exitRotateCommamd(Z80Parser::RotateCommamdContext* context) {
    Z80BaseListener::exitRotateCommamd(context);
}

void Z80Compiler::exitBitCommandName(Z80Parser::BitCommandNameContext* context) {
    Z80BaseListener::exitBitCommandName(context);
}

void Z80Compiler::exitSetCommandName(Z80Parser::SetCommandNameContext* context) {
    Z80BaseListener::exitSetCommandName(context);
}

void Z80Compiler::exitResetBitCommandName(Z80Parser::ResetBitCommandNameContext* context) {
    Z80BaseListener::exitResetBitCommandName(context);
}

void Z80Compiler::exitTestBitInRegister(Z80Parser::TestBitInRegisterContext* context) {
    Z80BaseListener::exitTestBitInRegister(context);
}

void Z80Compiler::exitTestBitInHLPointer(Z80Parser::TestBitInHLPointerContext* context) {
    Z80BaseListener::exitTestBitInHLPointer(context);
}

void Z80Compiler::exitTestBitInIXOffset(Z80Parser::TestBitInIXOffsetContext* context) {
    Z80BaseListener::exitTestBitInIXOffset(context);
}

void Z80Compiler::exitTestBitInIYOffset(Z80Parser::TestBitInIYOffsetContext* context) {
    Z80BaseListener::exitTestBitInIYOffset(context);
}

void Z80Compiler::exitSetBitInRegister(Z80Parser::SetBitInRegisterContext* context) {
    Z80BaseListener::exitSetBitInRegister(context);
}

void Z80Compiler::exitSetBitInHLPointer(Z80Parser::SetBitInHLPointerContext* context) {
    Z80BaseListener::exitSetBitInHLPointer(context);
}

void Z80Compiler::exitSetBitInIXOffset(Z80Parser::SetBitInIXOffsetContext* context) {
    Z80BaseListener::exitSetBitInIXOffset(context);
}

void Z80Compiler::exitSetBitInIYOffset(Z80Parser::SetBitInIYOffsetContext* context) {
    Z80BaseListener::exitSetBitInIYOffset(context);
}

void Z80Compiler::exitResetBitInRegister(Z80Parser::ResetBitInRegisterContext* context) {
    Z80BaseListener::exitResetBitInRegister(context);
}

void Z80Compiler::exitResetBitHLPointer(Z80Parser::ResetBitHLPointerContext* context) {
    Z80BaseListener::exitResetBitHLPointer(context);
}

void Z80Compiler::exitResetBitIXOffset(Z80Parser::ResetBitIXOffsetContext* context) {
    Z80BaseListener::exitResetBitIXOffset(context);
}

void Z80Compiler::exitResetBitIYOffset(Z80Parser::ResetBitIYOffsetContext* context) {
    Z80BaseListener::exitResetBitIYOffset(context);
}

void Z80Compiler::exitBitManipulationCommand(Z80Parser::BitManipulationCommandContext* context) {
    Z80BaseListener::exitBitManipulationCommand(context);
}

void Z80Compiler::exitJumpCondition(Z80Parser::JumpConditionContext* context) {
    Z80BaseListener::exitJumpCondition(context);
}

void Z80Compiler::exitJumpCommandName(Z80Parser::JumpCommandNameContext* context) {
    Z80BaseListener::exitJumpCommandName(context);
}

void Z80Compiler::exitJumpRelativeCommandName(Z80Parser::JumpRelativeCommandNameContext* context) {
    Z80BaseListener::exitJumpRelativeCommandName(context);
}


void
Z80Compiler::exitJumpRelativeAndDecrementCommandName(Z80Parser::JumpRelativeAndDecrementCommandNameContext* context) {
    Z80BaseListener::exitJumpRelativeAndDecrementCommandName(context);
}

void Z80Compiler::exitCallCommandName(Z80Parser::CallCommandNameContext* context) {
    Z80BaseListener::exitCallCommandName(context);
}


void Z80Compiler::exitReturnCommandName(Z80Parser::ReturnCommandNameContext* context) {
    Z80BaseListener::exitReturnCommandName(context);
}


void
Z80Compiler::exitReturnAndEnableInterruptCommandName(Z80Parser::ReturnAndEnableInterruptCommandNameContext* context) {
    Z80BaseListener::exitReturnAndEnableInterruptCommandName(context);
}


void Z80Compiler::exitReturnFromNonMaskableInterruptCommandName(
    Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext* context) {
    Z80BaseListener::exitReturnFromNonMaskableInterruptCommandName(context);
}


void Z80Compiler::exitRestartCommandName(Z80Parser::RestartCommandNameContext* context) {
    Z80BaseListener::exitRestartCommandName(context);
}


void Z80Compiler::exitJumpToAbsoluteAddress(Z80Parser::JumpToAbsoluteAddressContext* context) {
    Z80BaseListener::exitJumpToAbsoluteAddress(context);
}


void
Z80Compiler::exitJumpToAbsoluteAddressGivenCondition(Z80Parser::JumpToAbsoluteAddressGivenConditionContext* context) {
    Z80BaseListener::exitJumpToAbsoluteAddressGivenCondition(context);
}


void Z80Compiler::exitJumpToRelativeAddress(Z80Parser::JumpToRelativeAddressContext* context) {
    Z80BaseListener::exitJumpToRelativeAddress(context);
}

void
Z80Compiler::exitJumpToRelativeAddressGivenCondition(Z80Parser::JumpToRelativeAddressGivenConditionContext* context) {
    Z80BaseListener::exitJumpToRelativeAddressGivenCondition(context);
}


void Z80Compiler::exitJumpToHL(Z80Parser::JumpToHLContext* context) {
    Z80BaseListener::exitJumpToHL(context);
}


void Z80Compiler::exitJumpToIX(Z80Parser::JumpToIXContext* context) {
    Z80BaseListener::exitJumpToIX(context);
}


void Z80Compiler::exitJumpToIY(Z80Parser::JumpToIYContext* context) {
    Z80BaseListener::exitJumpToIY(context);
}


void Z80Compiler::exitJumpRelativeAndDecrement(Z80Parser::JumpRelativeAndDecrementContext* context) {
    Z80BaseListener::exitJumpRelativeAndDecrement(context);
}


void Z80Compiler::exitCallSubroutine(Z80Parser::CallSubroutineContext* context) {
    Z80BaseListener::exitCallSubroutine(context);
}


void Z80Compiler::exitCallSubroutineWithCondition(Z80Parser::CallSubroutineWithConditionContext* context) {
    Z80BaseListener::exitCallSubroutineWithCondition(context);
}


void Z80Compiler::exitReturnFromSubroutine(Z80Parser::ReturnFromSubroutineContext* context) {
    Z80BaseListener::exitReturnFromSubroutine(context);
}


void
Z80Compiler::exitReturnFromSubroutineGivenCondition(Z80Parser::ReturnFromSubroutineGivenConditionContext* context) {
    Z80BaseListener::exitReturnFromSubroutineGivenCondition(context);
}


void Z80Compiler::exitReturnAndEnableInterrupt(Z80Parser::ReturnAndEnableInterruptContext* context) {
    Z80BaseListener::exitReturnAndEnableInterrupt(context);
}


void Z80Compiler::exitReturnFromNonMaskableInterrupt(Z80Parser::ReturnFromNonMaskableInterruptContext* context) {
    Z80BaseListener::exitReturnFromNonMaskableInterrupt(context);
}

void Z80Compiler::exitRestartCommand(Z80Parser::RestartCommandContext* context) {
    Z80BaseListener::exitRestartCommand(context);
}

void Z80Compiler::exitBranchCommand(Z80Parser::BranchCommandContext* context) {
    Z80BaseListener::exitBranchCommand(context);
}

void Z80Compiler::exitInputCommandName(Z80Parser::InputCommandNameContext* context) {
    Z80BaseListener::exitInputCommandName(context);
}

void Z80Compiler::exitOutCommandName(Z80Parser::OutCommandNameContext* context) {
    Z80BaseListener::exitOutCommandName(context);
}

void Z80Compiler::exitInputDataIntoA(Z80Parser::InputDataIntoAContext* context) {
    Z80BaseListener::exitInputDataIntoA(context);
}

void Z80Compiler::exitInputDataIntoRegister(Z80Parser::InputDataIntoRegisterContext* context) {
    Z80BaseListener::exitInputDataIntoRegister(context);
}


void Z80Compiler::exitIni(Z80Parser::IniContext* context) {
    Z80BaseListener::exitIni(context);
}

void Z80Compiler::exitInir(Z80Parser::InirContext* context) {
    Z80BaseListener::exitInir(context);
}


void Z80Compiler::exitInd(Z80Parser::IndContext* context) {
    Z80BaseListener::exitInd(context);
}


void Z80Compiler::exitIndr(Z80Parser::IndrContext* context) {
    Z80BaseListener::exitIndr(context);
}

void Z80Compiler::exitOutputAIntoDataPointer(Z80Parser::OutputAIntoDataPointerContext* context) {
    Z80BaseListener::exitOutputAIntoDataPointer(context);
}


void Z80Compiler::exitOutputRegisterIntoCPointer(Z80Parser::OutputRegisterIntoCPointerContext* context) {
    Z80BaseListener::exitOutputRegisterIntoCPointer(context);
}


void Z80Compiler::exitOuti(Z80Parser::OutiContext* context) {
    Z80BaseListener::exitOuti(context);
}


void Z80Compiler::exitOtir(Z80Parser::OtirContext* context) {
    Z80BaseListener::exitOtir(context);
}

void Z80Compiler::exitOutd(Z80Parser::OutdContext* context) {
    Z80BaseListener::exitOutd(context);
}


void Z80Compiler::exitOtdr(Z80Parser::OtdrContext* context) {
    Z80BaseListener::exitOtdr(context);
}


void Z80Compiler::exitInputAndOutpuCommand(Z80Parser::InputAndOutpuCommandContext* context) {
    Z80BaseListener::exitInputAndOutpuCommand(context);
}


void Z80Compiler::exitLabel(Z80Parser::LabelContext* context) {
    Z80BaseListener::exitLabel(context);
}


void Z80Compiler::exitOrgDirective(Z80Parser::OrgDirectiveContext* context) {
    Z80BaseListener::exitOrgDirective(context);
}


void Z80Compiler::exitCharNumber(Z80Parser::CharNumberContext* context) {
    Z80BaseListener::exitCharNumber(context);
}


void Z80Compiler::exitName(Z80Parser::NameContext* context) {
    Z80BaseListener::exitName(context);
}


void Z80Compiler::exitNumber(Z80Parser::NumberContext* context) {
    Z80BaseListener::exitNumber(context);
}


void Z80Compiler::exitDecimalNumber(Z80Parser::DecimalNumberContext* context) {
    Z80BaseListener::exitDecimalNumber(context);
}


void Z80Compiler::exitHexNumber(Z80Parser::HexNumberContext* context) {
    Z80BaseListener::exitHexNumber(context);
}

void Z80Compiler::exitComment(Z80Parser::CommentContext* context) {
    Z80BaseListener::exitComment(context);
}

void Z80Compiler::addByteToRom(unsigned char data) {
    romData.push_back(data);
}

void Z80Compiler::addBytesToRom(std::vector<unsigned char> data) { // NOLINT
    for (auto& byteData: data) {
        addByteToRom(byteData);
    }
}

unsigned char Z80Compiler::readByte(Z80Parser::NumberContext* numberContext) { // NOLINT
    ImmediateValueReader valueReader;
    unsigned char number = valueReader.readNumber(numberContext);
    return number;
}

unsigned char Z80Compiler::readByte(Z80Parser::NumberPointerContext* numberContext) { // NOLINT
    ImmediateValueReader valueReader;
    unsigned char number = valueReader.readNumber(numberContext);
    return number;
}

std::vector<unsigned char> Z80Compiler::readWordBytes(Z80Parser::NumberContext* numberContext) { // NOLINT
    ImmediateValueReader valueReader;
    int number = valueReader.readNumber(numberContext);
    unsigned char lowByte = (number & 0xFF); // NOLINT
    unsigned char highByte = (number >> 8) & 0xFF; // NOLINT
    std::vector<unsigned char> results{lowByte, highByte};

    return results;
}

std::vector<unsigned char> Z80Compiler::readWordBytes(Z80Parser::NumberPointerContext* numberContext) {
    return readWordBytes(numberContext->number());
}


