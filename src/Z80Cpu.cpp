#include "Z80Cpu.h"

using namespace std;

#define Z80_DEBUG 0

using w=Z80Word;
using b=Z80Byte;


//@formatter:off
Z80Cpu::Z80Cpu(MemoryHandler& memoryHandler, IOMemoryHandler& ioMemoryHandler)
    :memory{memoryHandler}, ioMemory{ioMemoryHandler}, memoryCommandHandler{memoryHandler, f} {}
//@formatter:on

void Z80Cpu::initialize() {
    cyclesPassed = 0;
    debug = Z80_DEBUG;


    interruptMode = 0;
    interruptsEnabled = false;
    halted = false;
    iff1 = false;
    iff2 = false;

    interruptVectorRegister = Z80Byte{0x00};
    refreshRegister = Z80Byte{0x0};

    a.initialize();
    f.initialize();

    bc.initialize();
    de.initialize();
    hl.initialize();
    ix.initialize();
    ix.setRegisterName("IY");
    iy.initialize();
    iy.setRegisterName("IX");

    programCounter = w{0x0000};
    stackPointer = w{0xDFF0};

}

int Z80Cpu::getNumberOfCyclesPassed() const {
    return cyclesPassed;
}

void Z80Cpu::set(ByteCpuRegisterSymbol byteCpuRegisterSymbol, Z80Byte data) {
    switch (byteCpuRegisterSymbol) {
        case ByteCpuRegisterSymbol::A:
            a.setByteValue(data);
            return;
        case ByteCpuRegisterSymbol::F:
            f.setByteValue(data);
            return;
        case ByteCpuRegisterSymbol::B:
            bc.setHighByte(data);
            return;
        case ByteCpuRegisterSymbol::C:
            bc.setLowByte(data);
            return;
        case ByteCpuRegisterSymbol::D:
            de.setHighByte(data);
            return;
        case ByteCpuRegisterSymbol::E:
            de.setLowByte(data);
            return;
        case ByteCpuRegisterSymbol::H:
            hl.setHighByte(data);
            return;
        case ByteCpuRegisterSymbol::L:
            hl.setLowByte(data);
            return;
        case ByteCpuRegisterSymbol::R:
            refreshRegister = data;
            return;
        case ByteCpuRegisterSymbol::I:
            interruptVectorRegister = data;
            return;
        case ByteCpuRegisterSymbol::HL_PTR:
            memory.writeByte(hl.getWordValue(), data);
            return;
        case ByteCpuRegisterSymbol::N:
            return;
    }
}

void Z80Cpu::set(WordCpuRegisterSymbol wordCpuRegisterSymbol, Z80Word data) {
    switch (wordCpuRegisterSymbol) {
        case WordCpuRegisterSymbol::BC:
            bc.setWordValue(data);
            return;
        case WordCpuRegisterSymbol::DE:
            de.setWordValue(data);
            return;
        case WordCpuRegisterSymbol::HL:
            hl.setWordValue(data);
            return;
        case WordCpuRegisterSymbol::PC:
            programCounter = data;
            return;
        case WordCpuRegisterSymbol::SP:
            stackPointer = data;
            return;
        case WordCpuRegisterSymbol::IX:
            ix.setWordValue(data);
            return;
        case WordCpuRegisterSymbol::IY:
            iy.setWordValue(data);
            return;
    }
}

Z80Byte Z80Cpu::get(ByteCpuRegisterSymbol byteCpuRegisterSymbol) {
    switch (byteCpuRegisterSymbol) {
        case ByteCpuRegisterSymbol::A:
            return a.getByteValue();
        case ByteCpuRegisterSymbol::F:
            return f.getByteValue();
        case ByteCpuRegisterSymbol::B:
            return bc.getHighByte();
        case ByteCpuRegisterSymbol::C:
            return bc.getLowByte();
        case ByteCpuRegisterSymbol::D:
            return de.getHighByte();
        case ByteCpuRegisterSymbol::E:
            return de.getLowByte();
        case ByteCpuRegisterSymbol::H:
            return hl.getHighByte();
        case ByteCpuRegisterSymbol::L:
            return hl.getLowByte();
        case ByteCpuRegisterSymbol::R:
            return refreshRegister;
        case ByteCpuRegisterSymbol::I:
            return interruptVectorRegister;
        case ByteCpuRegisterSymbol::HL_PTR:
            return memory.readByte(hl.getWordValue());
        case ByteCpuRegisterSymbol::N:
        default:
            return readImmediateByteOperand();
    }
}

Z80Word Z80Cpu::get(WordCpuRegisterSymbol wordCpuRegisterSymbol) {
    switch (wordCpuRegisterSymbol) {
        case WordCpuRegisterSymbol::BC:
            return bc.getWordValue();
        case WordCpuRegisterSymbol::DE:
            return de.getWordValue();
        case WordCpuRegisterSymbol::HL:
            return hl.getWordValue();
        case WordCpuRegisterSymbol::PC:
            return programCounter;
        case WordCpuRegisterSymbol::SP:
            return stackPointer;
        case WordCpuRegisterSymbol::IX:
            return ix.getWordValue();
        case WordCpuRegisterSymbol::IY:
        default:
            return iy.getWordValue();
    }
}

void Z80Cpu::triggerInterrupt() {
    requestInterrupt = true;
}

void Z80Cpu::triggerNonMaskableInterrupt() {
    // Preserve the pending maskable interrupts
    iff2 = iff1;
    // Disable all future interrupts
    iff1 = false;

    incrementRefreshRegister();

    if (halted) {
        programCounter = w(programCounter.getValue() + 1);
        halted = false;
    }

    //
    // Preserve the Program Counter on the stack
    //
    pushWord(programCounter);
    // Jump to the address 0x66
    programCounter = w{0x66};
    cyclesPassed += 11;
}

Z80Word Z80Cpu::programCounterPlus(int value) {
    return w(value + programCounter.getValue());
}

void Z80Cpu::addToProgramCounter(int value) {
    programCounter = w{programCounter.getValue() + value};
}

void Z80Cpu::incrementRefreshRegister() {
    refreshRegister = Z80Byte(
        (refreshRegister.getValue() & 0x80) | ((refreshRegister.getValue() + 1) & 0x7F)); // NOLINT
}

void Z80Cpu::handleMaskableInterrupts() {
    if (!iff1 || interruptsEnabled) {
        return;
    } else if (halted) {
        programCounter = w(programCounter.getValue() + 1);
        halted = false;
    }

    incrementRefreshRegister();

    // Disable further interrupts
    iff1 = false;
    iff2 = false;
    requestInterrupt = false;

    if (interruptMode == 1 || interruptMode == 0) {
        pushWord(programCounter);
        programCounter = w(0x38);
        cyclesPassed += 13;
    }
}

void Z80Cpu::pushWord(Z80Word data) {
    auto spValue = stackPointer.getValue();

    memory.writeByte(Z80Word{--spValue}, data.getHighByte());
    memory.writeByte(Z80Word{--spValue}, data.getLowByte());

    stackPointer = w{spValue};
}

Z80Word Z80Cpu::popWord() {
    auto data = memory.readWord(stackPointer);
    this->stackPointer = w{stackPointer.getValue() + 2};

    return data;
}

void Z80Cpu::incrementMemoryContents(Z80Word address) {
    memoryCommandHandler.increment(address);
}

void Z80Cpu::decrementMemoryContents(Z80Word address) {
    memoryCommandHandler.decrement(address);
}

void Z80Cpu::incrementHLMemoryContents() {
    auto address = hl.getWordValue();
    incrementMemoryContents(address);
}

void Z80Cpu::decrementHLMemoryContents() {
    auto address = hl.getWordValue();
    decrementMemoryContents(address);
}

void Z80Cpu::performJumpUsingCondition(bool condition) {
    if (condition) {
        programCounter = memory.readWord(w{programCounter.getValue() + 1});
    } else {
        programCounter = w{programCounter.getValue() + 3};
    }
}

void Z80Cpu::performJumpRelativeUsingCondition(bool condition) {
    if (condition) {
        auto offset = memory.readSignedByte(w{programCounter.getValue() + 1});
        programCounter = w{programCounter.getValue() + offset + 2};
        cyclesPassed += 5;
    } else {
        programCounter = w{programCounter.getValue() + 2};
    }
}

void Z80Cpu::performSubroutineCallUsingCondition() {
    pushWord(programCounterPlus(3));
    programCounter = readImmediateWordOperand();
}

void Z80Cpu::performSubroutineCallUsingCondition(bool condition) {
    if (condition) {
        pushWord(w{programCounter.getValue() + 3});
        programCounter = memory.readWord(w{programCounter.getValue() + 1});
        cyclesPassed += 7;
    } else {
        programCounter = w{programCounter.getValue() + 3};
    }
}

void Z80Cpu::performReturnUsingCondition(bool condition) {
    if (condition) {
        programCounter = popWord();
        cyclesPassed += 6;
    } else {
        programCounter = w{programCounter.getValue() + 1};
    }
}

Z80Byte Z80Cpu::readImmediateByteOperand() {
    return memory.readByte(programCounterPlus(1));
}

Z80Word Z80Cpu::readImmediateWordOperand() {
    return memory.readWord(programCounterPlus(1));
}

void Z80Cpu::enableInterrupts() {
    iff1 = true;
    iff2 = true;
    interruptsEnabled = true;
}

void Z80Cpu::loadHLIntoImmediatePointer() {
    auto nn = memory.readWord(programCounterPlus(1));
    memory.writeByte(nn, hl.getWordValue().getLowByte());
    memory.writeByte(w{nn.getValue() + 1}, hl.getWordValue().getHighByte());
}

void Z80Cpu::performHalt() {
    halted = true;
}

void Z80Cpu::exchangeHLWithStackPointer() {
    auto tempValue = hl.getWordValue();
    hl.setWordValue(memory.readWord(stackPointer));

    memory.writeByte(stackPointer, tempValue.getLowByte());
    memory.writeByte(w{stackPointer.getValue() + 1}, tempValue.getHighByte());
}

void Z80Cpu::switchToFDTable() {
    addToProgramCounter(1);
    auto data = memory.readByte(programCounter);
    executeNextIndexCommand(data, iy);
}

void Z80Cpu::switchToDDTable() {
    addToProgramCounter(1);
    executeNextIndexCommand(memory.readByte(programCounter), ix);
}

void Z80Cpu::loadHLWithImmediatePointer() {
    auto nn = memory.readWord(programCounterPlus(1));
    hl.setLowByte(memory.readByte(nn));
    hl.setHighByte(memory.readByte(w{nn.getValue() + 1}));
}

void Z80Cpu::swapBCDEAndHL() {
    bc.swapCurrentValueWithShadowValue();
    de.swapCurrentValueWithShadowValue();
    hl.swapCurrentValueWithShadowValue();
}

void Z80Cpu::loadAWithImmediatePointer() {
    auto nn = memory.readWord(programCounterPlus(1));
    auto value = memory.readByte(nn);
    a.setByteValue(value);
}

void Z80Cpu::loadAIntoImmediatePointer() {
    auto nn = memory.readWord(programCounterPlus(1));
    memory.writeByte(nn, a.getByteValue());
}

void Z80Cpu::setCarryFlag() {
    f.setCarryBit(true);
    f.setNegativeBit(false);
    f.setHalfCarryBit(false);
}

void Z80Cpu::swapAF() {
    a.swapCurrentValueWithShadowValue();
    f.swapCurrentValueWithShadowValue();
}

void Z80Cpu::swapDEWithHL() {
    auto tempValue = de.getWordValue();
    de.setWordValue(hl.getWordValue());
    hl.setWordValue(tempValue);
}

void Z80Cpu::disableInterrupts() {
    iff1 = false;
    iff2 = false;
    interruptsEnabled = true;
}

void Z80Cpu::switchToCBTable() {
    addToProgramCounter(1);
    executeNextCBCommand(memory.readByte(programCounter));
}

void Z80Cpu::switchToEDTable() {
    addToProgramCounter(1);
    executeNextEDCommand(memory.readByte(programCounter));
}

void Z80Cpu::readIOMemoryIntoA() {
    auto data = ioMemory.readByte(memory.readByte(programCounterPlus(1)));
    a.setByteValue(data);
}

void Z80Cpu::writeAIntoImmediateIOMemoryPort() {
    auto port = readImmediateByteOperand();
    ioMemory.writeByte(port, a.getByteValue());
}

void Z80Cpu::performCpuRestart(Z80Word address) {
    pushWord(programCounterPlus(1));
    programCounter = address;
}

void Z80Cpu::DJNZ() {
    auto temp = b{bc.getWordValue().getHighByte().getValue() - 1};
    performJumpRelativeUsingCondition(temp.getValue() != 0);
    bc.setHighByte(temp);
}

void Z80Cpu::returnAndEnableInterrupts() {
    programCounter = popWord();
    iff1 = iff2;
}

void Z80Cpu::negateA() {
    auto temporaryValue = a.getByteValue();
    a.setByteValue(b{0});

    a.subtractByte(temporaryValue);
}

void Z80Cpu::popAF() {
    f.setByteValue(memory.readByte(stackPointer));
    a.setByteValue(memory.readByte(w(stackPointer.getValue() + 1)));
    stackPointer = w{stackPointer.getValue() + 2};
}

void Z80Cpu::OUTI() {
    auto temp = memory.readByte(hl.getWordValue());
    ioMemory.writeByte(bc.getLowByte(), temp);

    hl.incrementWord();
    bc.decrementHighByte();
}

void Z80Cpu::OTIR() {
    OUTI();

    if (bc.getHighByte().getValue() != 0) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::OUTD() {
    auto temporaryValue = memory.readByte(hl.getWordValue());
    ioMemory.writeByte(bc.getLowByte(), temporaryValue);

    hl.decrementWord();
    bc.decrementHighByte();
}

void Z80Cpu::OTDR() {
    OUTD();

    if (bc.getHighByte().getValue() != 0) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::LDI() {
    memory.writeByte(de.getWordValue(), memory.readByte(hl.getWordValue()));

    de.incrementWord();
    hl.incrementWord();
    bc.decrementWord();

    f.setParityBit(bc.getWordValue().getValue() > 0);
    f.setNegativeBit(false);
    f.setHalfCarryBit(false);
}

void Z80Cpu::LDIR() {
    LDI();

    if (bc.getWordValue().getValue() != 0) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::CPI() {
    auto carry = f.getCarryBit();

    a.compareByte(memory.readByte(hl.getWordValue()));

    hl.incrementWord();
    bc.decrementWord();

    f.setParityBit(bc.getWordValue().getValue() > 0);

    f.setNegativeBit(true);
    f.setCarryBit(carry);
}

void Z80Cpu::CPIR() {
    CPI();

    if (bc.getWordValue().getValue() != 0 && !f.getZeroBit()) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::CPD() {
    auto carry = f.getCarryBit();
    a.compareByte(memory.readByte(hl.getWordValue()));

    hl.decrementWord();
    bc.decrementWord();

    f.setParityBit(bc.getWordValue().getValue() > 0);
    f.setNegativeBit(true);
    f.setCarryBit(carry);

}

void Z80Cpu::CPDR() {
    CPD();

    if (bc.getWordValue().getValue() != 0 && !f.getZeroBit()) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::INI() {
    auto temp = ioMemory.readByte(bc.getLowByte());
    memory.writeByte(hl.getWordValue(), temp);
    bc.decrementHighByte();
    hl.incrementWord();
}

void Z80Cpu::INIR() {
    INI();

    if (bc.getHighByte().getValue() != 0) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::IND() {
    auto tempByte = ioMemory.readByte(bc.getLowByte());
    memory.writeByte(hl.getWordValue(), tempByte);

    bc.decrementHighByte();
    hl.decrementWord();
}

void Z80Cpu::INDR() {
    IND();

    if (bc.getHighByte().getValue() != 0) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
    } else {
        addToProgramCounter(1);
    }
}

void Z80Cpu::loadWordDataIntoWordOperandPointer(Z80Word wordData) {
    auto address = programCounterPlus(1);
    auto nn = memory.readWord(address);

    memory.writeByte(nn, wordData.getLowByte());
    memory.writeByte(w{nn.getValue() + 1}, wordData.getHighByte());
}

void Z80Cpu::loadRegisterFromWordOperandPointer(WordRegister& wordRegister) {
    auto temporaryValue = memory.readWord(programCounterPlus(1));
    wordRegister.setLowByte(memory.readByte(temporaryValue));
    wordRegister.setHighByte(memory.readByte(w(temporaryValue.getValue() + 1)));
}

void Z80Cpu::IN(ByteCpuRegisterSymbol cpuRegisterSymbol) {
    // (C)
    auto temporaryValue = ioMemory.readByte(bc.getLowByte());

    switch (cpuRegisterSymbol) {
        case ByteCpuRegisterSymbol::B:
            bc.setHighByte(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::C:
            bc.setLowByte(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::D:
            de.setHighByte(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::E:
            de.setLowByte(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::H:
            hl.setHighByte(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::L:
            hl.setLowByte(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::A:
            a.setByteValue(temporaryValue);
            break;
        case ByteCpuRegisterSymbol::F:
        case ByteCpuRegisterSymbol::R:
        case ByteCpuRegisterSymbol::I:
        case ByteCpuRegisterSymbol::N:
        case ByteCpuRegisterSymbol::HL_PTR:
            break;
    }

    f.setZeroBit(byteOperationHandler.zeroFromValue(temporaryValue));
    f.setParityBit(byteOperationHandler.parityFromValue(temporaryValue));
    f.setSignBit(byteOperationHandler.signFromValue(temporaryValue));
    f.setNegativeBit(false);
    f.setHalfCarryBit(false);

}

void Z80Cpu::LDD() {
    memory.writeByte(de.getWordValue(), memory.readByte(hl.getWordValue()));
    de.decrementWord();
    hl.decrementWord();
    bc.decrementWord();

    f.setParityBit(bc.getWordValue().getValue() > 0);
    f.setNegativeBit(false);
    f.setHalfCarryBit(false);
}

void Z80Cpu::LDDR() {
    LDD();

    if (bc.getWordValue().getValue() != 0) {
        cyclesPassed += 5;
        addToProgramCounter(-1);
        f.setParityBit(true);
    } else {
        addToProgramCounter(1);
        f.setParityBit(false);
    }

    f.setNegativeBit(false);
    f.setHalfCarryBit(false);
}

void Z80Cpu::RRD() {
    // A
    auto aValue = a.getByteValue().getValue();
    auto hlContents = memory.readByte(hl.getWordValue()).getValue();

    auto highBits = (aValue & 0x0F) << 4; // NOLINT
    // Rotate 4 bits right
    auto lowBits = (hlContents >> 4); // NOLINT
    memory.writeByte(hl.getWordValue(), b{highBits | lowBits}); // NOLINT
    // Store the rotated nibble of (HL)
    a.setByteValue(b((aValue & 0xF0) | (hlContents & 0x0F))); // NOLINT

    f.setZeroBit(byteOperationHandler.zeroFromValue(b{aValue}));
    f.setSignBit(byteOperationHandler.signFromValue(b{aValue}));
    f.setParityBit(byteOperationHandler.parityFromValue(b{aValue}));
    f.setHalfCarryBit(false);
    f.setNegativeBit(false);
}

void Z80Cpu::RLD() {
    // A
    auto aValue = a.getByteValue().getValue();
    // (HL)
    auto hlContents = memory.readByte(hl.getWordValue()).getValue();

    // Store HL[7-4]A[3-0]
    memory.writeByte(hl.getWordValue(),
                     b(((hlContents & 0x0F) << 4) | (aValue & 0x0F))); // NOLINT

    a.setByteValue(b{(aValue & 0xF0) | (hlContents >> 4)}); // NOLINT

    f.setZeroBit(byteOperationHandler.zeroFromValue(b{aValue}));
    f.setSignBit(byteOperationHandler.signFromValue(b{aValue}));
    f.setParityBit(byteOperationHandler.parityFromValue(b{aValue}));
    f.setHalfCarryBit(false);
    f.setNegativeBit(false);
}
