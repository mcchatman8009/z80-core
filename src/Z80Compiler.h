#ifndef Z80_CORE_Z80COMPILER_H
#define Z80_CORE_Z80COMPILER_H

#include <vector>
#include <string>
#include <string_view>
#include <Z80BaseListener.h>
#include <Z80InstructionEncoder.h>

class Z80Compiler : private Z80BaseListener {
    public:
        void compileAndPutIntoByteVector(std::string_view assemblyCode, std::vector<unsigned char>& bytes);

        std::vector<unsigned char> compile(std::string_view assemblyCode);

    private:
        void enterStatement(Z80Parser::StatementContext* context) override;

        template<class ParserProviderCallbackFunction>
        void provideParserFromText(std::string_view assemblyCode, ParserProviderCallbackFunction callbackFunction);

        template<class Rule>
        void addEncodedInstructionBytesToRom(std::string name, Rule* context);

        void exitLoadWordRegisterWithNNPointer(Z80Parser::LoadWordRegisterWithNNPointerContext* context) override;

        void exitLoadNNPointerWithWordRegister(Z80Parser::LoadNNPointerWithWordRegisterContext* context) override;

        Z80InstructionEncoder instructionEncoder;
        std::vector<unsigned char> romData;

        std::vector<unsigned char> readWordBytes(Z80Parser::NumberContext* numberContext);

        std::vector<unsigned char> readWordBytes(Z80Parser::NumberPointerContext* numberContext);

        unsigned char readByte(Z80Parser::NumberContext* numberContext);

        unsigned char readByte(Z80Parser::NumberPointerContext* numberContext);

        void addBytesToRom(std::vector<unsigned char> data);

        void addByteToRom(unsigned char data);

        void enterProgram(Z80Parser::ProgramContext* context) override;

        void exitLoadByteRegisterWithByteRegister(Z80Parser::LoadByteRegisterWithByteRegisterContext* context) override;

        void
        exitLoadByteRegisterWithImmediateByte(Z80Parser::LoadByteRegisterWithImmediateByteContext* context) override;

        void exitLoadByteRegisterWithHLPointer(Z80Parser::LoadByteRegisterWithHLPointerContext* context) override;


        void exitLoadByteRegisterWithIXOffset(Z80Parser::LoadByteRegisterWithIXOffsetContext* context) override;


        void exitLoadByteRegisterWithIYOffset(Z80Parser::LoadByteRegisterWithIYOffsetContext* context) override;


        void exitLoadHLPointerWithRegister(Z80Parser::LoadHLPointerWithRegisterContext* context) override;


        void exitLoadIXOffsetWithRegister(Z80Parser::LoadIXOffsetWithRegisterContext* context) override;


        void exitLoadIYOffsetWithRegister(Z80Parser::LoadIYOffsetWithRegisterContext* context) override;


        void exitLoadHLPointerWithImmediateByte(Z80Parser::LoadHLPointerWithImmediateByteContext* context) override;


        void exitLoadIXOffsetWithImmediateByte(Z80Parser::LoadIXOffsetWithImmediateByteContext* context) override;


        void exitLoadIYOffsetWithImmediateByte(Z80Parser::LoadIYOffsetWithImmediateByteContext* context) override;


        void exitLoadAWithBCPointer(Z80Parser::LoadAWithBCPointerContext* context) override;


        void exitLoadAWithDEPointer(Z80Parser::LoadAWithDEPointerContext* context) override;


        void exitLoadAWithNNPointer(Z80Parser::LoadAWithNNPointerContext* context) override;


        void exitLoadBCPointerWithA(Z80Parser::LoadBCPointerWithAContext* context) override;

        void exitLoadDEPointerWithA(Z80Parser::LoadDEPointerWithAContext* context) override;

        void exitLoadNNPointerWithA(Z80Parser::LoadNNPointerWithAContext* context) override;

        void exitLoadAWithI(Z80Parser::LoadAWithIContext* context) override;

        void exitLoadAWithR(Z80Parser::LoadAWithRContext* context) override;

        void exitLoadIWithA(Z80Parser::LoadIWithAContext* context) override;

        void exitLoadRWithA(Z80Parser::LoadRWithAContext* context) override;

        void exitLoadWordWithImmediateWord(Z80Parser::LoadWordWithImmediateWordContext* context) override;

        void exitLoadIXWithImmediateWord(Z80Parser::LoadIXWithImmediateWordContext* context) override;

        void exitLoadIYWithImmediateWord(Z80Parser::LoadIYWithImmediateWordContext* context) override;

        void exitLoadIXWithNNPointer(Z80Parser::LoadIXWithNNPointerContext* context) override;

        void exitLoadIYWithNNPointer(Z80Parser::LoadIYWithNNPointerContext* context) override;

        void exitLoadNNPointerWithIX(Z80Parser::LoadNNPointerWithIXContext* context) override;

        void exitLoadNNPointerWithIY(Z80Parser::LoadNNPointerWithIYContext* context) override;

        void exitLoadSPWithHL(Z80Parser::LoadSPWithHLContext* context) override;

        void exitLoadSPWithIX(Z80Parser::LoadSPWithIXContext* context) override;

        void exitLoadSPWithIY(Z80Parser::LoadSPWithIYContext* context) override;

        void exitPushWordRegister(Z80Parser::PushWordRegisterContext* context) override;

        void exitPushIX(Z80Parser::PushIXContext* context) override;

        void exitPushIY(Z80Parser::PushIYContext* context) override;

        void exitPopWordRegister(Z80Parser::PopWordRegisterContext* context) override;

        void exitPopIX(Z80Parser::PopIXContext* context) override;

        void exitPopIY(Z80Parser::PopIYContext* context) override;

        void exitExchangeDEWithHL(Z80Parser::ExchangeDEWithHLContext* context) override;

        void exitExchangeAFWithShadowAF(Z80Parser::ExchangeAFWithShadowAFContext* context) override;

        void exitExchangeMultipleWordRegisters(Z80Parser::ExchangeMultipleWordRegistersContext* context) override;

        void exitExchangeSPPointerWithHL(Z80Parser::ExchangeSPPointerWithHLContext* context) override;

        void exitExchangeSPPointerWithIX(Z80Parser::ExchangeSPPointerWithIXContext* context) override;

        void exitExchangeSPPointerWithIY(Z80Parser::ExchangeSPPointerWithIYContext* context) override;

        void exitLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(
            Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext* context) override;

        void exitLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(
            Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext* context) override;

        void exitLoadDEPointerWithHLPointerThenDecrementBCAndHL(
            Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext* context) override;

        void exitLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(
            Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext* context) override;

        void exitCompareAToHLPointerThenIncrementHLAndDecrementBC(
            Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext* context) override;

        void exitCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(
            Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext* context) override;

        void exitCompareAToHLPointerThenDecrementHLAndBC(
            Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext* context) override;

        void exitCompareAToHLPointerThenDecrementHLAndBCRepeat(
            Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext* context) override;

        void exitAddAAndRegister(Z80Parser::AddAAndRegisterContext* context) override;

        void exitAddAAndImmediateByte(Z80Parser::AddAAndImmediateByteContext* context) override;

        void exitAddAAndIXH(Z80Parser::AddAAndIXHContext* context) override;

        void exitAddAAndIXL(Z80Parser::AddAAndIXLContext* context) override;

        void exitAddAAndIYH(Z80Parser::AddAAndIYHContext* context) override;

        void exitAddAAndIYL(Z80Parser::AddAAndIYLContext* context) override;

        void exitAddAAndHLPointer(Z80Parser::AddAAndHLPointerContext* context) override;

        void exitAddAAndIXOffset(Z80Parser::AddAAndIXOffsetContext* context) override;

        void exitAddAAndIYOffset(Z80Parser::AddAAndIYOffsetContext* context) override;

        void exitAddWithCarryAAndRegister(Z80Parser::AddWithCarryAAndRegisterContext* context) override;

        void exitAddWithCarryAAndHLPointer(Z80Parser::AddWithCarryAAndHLPointerContext* context) override;

        void exitAddWithCarryAAndImmediate(Z80Parser::AddWithCarryAAndImmediateContext* context) override;

        void exitAddWithCarryAAndIXOffset(Z80Parser::AddWithCarryAAndIXOffsetContext* context) override;

        void exitAddWithCarryAAndIYOffset(Z80Parser::AddWithCarryAAndIYOffsetContext* context) override;

        void exitAddWithCarryAAndIXH(Z80Parser::AddWithCarryAAndIXHContext* context) override;

        void exitAddWithCarryAAndIXL(Z80Parser::AddWithCarryAAndIXLContext* context) override;

        void exitAddWithCarryAAndIYH(Z80Parser::AddWithCarryAAndIYHContext* context) override;

        void exitAddWithCarryAAndIYL(Z80Parser::AddWithCarryAAndIYLContext* context) override;

        void exitSubtractRegisterFromA(Z80Parser::SubtractRegisterFromAContext* context) override;

        void exitSubtractHLPointerFromA(Z80Parser::SubtractHLPointerFromAContext* context) override;

        void exitSubtractImmediateFromA(Z80Parser::SubtractImmediateFromAContext* context) override;

        void exitSubtractIXOffsetFromA(Z80Parser::SubtractIXOffsetFromAContext* context) override;

        void exitSubtractIYOffsetFromA(Z80Parser::SubtractIYOffsetFromAContext* context) override;

        void exitSubtractWithBorrowRegisterFromA(Z80Parser::SubtractWithBorrowRegisterFromAContext* context) override;

        void exitSubtractWithBorrowHLPointerFromA(Z80Parser::SubtractWithBorrowHLPointerFromAContext* context) override;

        void exitSubtractWithBorrowIXOffsetFromA(Z80Parser::SubtractWithBorrowIXOffsetFromAContext* context) override;

        void exitSubtractWithBorrowIYOffsetFromA(Z80Parser::SubtractWithBorrowIYOffsetFromAContext* context) override;

        void exitSubtractWithBorrowImmediateFromA(Z80Parser::SubtractWithBorrowImmediateFromAContext* context) override;

        void exitSubtractWithBorrowIXHFromA(Z80Parser::SubtractWithBorrowIXHFromAContext* context) override;

        void exitSubtractWithBorrowIXLFromA(Z80Parser::SubtractWithBorrowIXLFromAContext* context) override;

        void exitSubtractWithBorrowIYHFromA(Z80Parser::SubtractWithBorrowIYHFromAContext* context) override;

        void exitSubtractWithBorrowIYLFromA(Z80Parser::SubtractWithBorrowIYLFromAContext* context) override;

        void exitAndAWithRegister(Z80Parser::AndAWithRegisterContext* context) override;

        void exitAndAWithImmediate(Z80Parser::AndAWithImmediateContext* context) override;

        void exitAndAWithHLPointer(Z80Parser::AndAWithHLPointerContext* context) override;

        void exitAndAWithIXOffset(Z80Parser::AndAWithIXOffsetContext* context) override;

        void exitAndAWithIYOffset(Z80Parser::AndAWithIYOffsetContext* context) override;

        void exitAndAWithIXH(Z80Parser::AndAWithIXHContext* context) override;

        void exitAndAWithIXL(Z80Parser::AndAWithIXLContext* context) override;

        void exitAndAWithIYH(Z80Parser::AndAWithIYHContext* context) override;

        void exitAndAWithIYL(Z80Parser::AndAWithIYLContext* context) override;

        void exitOrAWithRegister(Z80Parser::OrAWithRegisterContext* context) override;

        void exitOrAWithImmediate(Z80Parser::OrAWithImmediateContext* context) override;

        void exitOrAWithHLPointer(Z80Parser::OrAWithHLPointerContext* context) override;

        void exitOrAWithIXOffset(Z80Parser::OrAWithIXOffsetContext* context) override;

        void exitOrAWithIYOffset(Z80Parser::OrAWithIYOffsetContext* context) override;

        void exitOrAWithIXH(Z80Parser::OrAWithIXHContext* context) override;

        void exitOrAWithIXL(Z80Parser::OrAWithIXLContext* context) override;

        void exitOrAWithIYH(Z80Parser::OrAWithIYHContext* context) override;

        void exitOrAWithIYL(Z80Parser::OrAWithIYLContext* context) override;

        void exitXorAWithRegister(Z80Parser::XorAWithRegisterContext* context) override;

        void exitXorAWithImmediate(Z80Parser::XorAWithImmediateContext* context) override;

        void exitXorAWithHLPointer(Z80Parser::XorAWithHLPointerContext* context) override;

        void exitXorAWithIXOffset(Z80Parser::XorAWithIXOffsetContext* context) override;

        void exitXorAWithIYOffset(Z80Parser::XorAWithIYOffsetContext* context) override;

        void exitXorAWithIXH(Z80Parser::XorAWithIXHContext* context) override;

        void exitXorAWithIXL(Z80Parser::XorAWithIXLContext* context) override;

        void exitXorAWithIYH(Z80Parser::XorAWithIYHContext* context) override;

        void exitXorAWithIYL(Z80Parser::XorAWithIYLContext* context) override;

        void exitCompareAWithRegister(Z80Parser::CompareAWithRegisterContext* context) override;

        void exitCompareAWithImmediate(Z80Parser::CompareAWithImmediateContext* context) override;

        void exitCompareAWithIXOffset(Z80Parser::CompareAWithIXOffsetContext* context) override;

        void exitCompareAWithIYOffset(Z80Parser::CompareAWithIYOffsetContext* context) override;

        void exitCompareAWithIXH(Z80Parser::CompareAWithIXHContext* context) override;

        void exitCompareAWithIXL(Z80Parser::CompareAWithIXLContext* context) override;

        void exitCompareAWithIYH(Z80Parser::CompareAWithIYHContext* context) override;

        void exitCompareAWithIYL(Z80Parser::CompareAWithIYLContext* context) override;

        void exitIncrementRegister(Z80Parser::IncrementRegisterContext* context) override;

        void exitIncrementIXH(Z80Parser::IncrementIXHContext* context) override;

        void exitIncrementIXL(Z80Parser::IncrementIXLContext* context) override;

        void exitIncrementIYH(Z80Parser::IncrementIYHContext* context) override;

        void exitIncrementIYL(Z80Parser::IncrementIYLContext* context) override;

        void exitIncrementHLPointer(Z80Parser::IncrementHLPointerContext* context) override;

        void exitIncrementIXOffset(Z80Parser::IncrementIXOffsetContext* context) override;

        void exitIncrementIYOffset(Z80Parser::IncrementIYOffsetContext* context) override;

        void exitDecrementRegister(Z80Parser::DecrementRegisterContext* context) override;

        void exitDecrementIXH(Z80Parser::DecrementIXHContext* context) override;

        void exitDecrementIXL(Z80Parser::DecrementIXLContext* context) override;

        void exitDecrementIYH(Z80Parser::DecrementIYHContext* context) override;


        void exitDecrementIYL(Z80Parser::DecrementIYLContext* context) override;


        void exitDecrementHLPointer(Z80Parser::DecrementHLPointerContext* context) override;


        void exitDecrementIXOffset(Z80Parser::DecrementIXOffsetContext* context) override;


        void exitDecrementIYOffset(Z80Parser::DecrementIYOffsetContext* context) override;


        void exitArithmeticCommand(Z80Parser::ArithmeticCommandContext* context) override;


        void exitDecimalAdjustA(Z80Parser::DecimalAdjustAContext* context) override;


        void exitComplementA(Z80Parser::ComplementAContext* context) override;


        void exitNegateA(Z80Parser::NegateAContext* context) override;


        void exitComplementCarryFlag(Z80Parser::ComplementCarryFlagContext* context) override;


        void exitSetCarryFlag(Z80Parser::SetCarryFlagContext* context) override;


        void exitNop(Z80Parser::NopContext* context) override;


        void exitHalt(Z80Parser::HaltContext* context) override;


        void exitDisableInterrupts(Z80Parser::DisableInterruptsContext* context) override;


        void exitEnableInterrupts(Z80Parser::EnableInterruptsContext* context) override;


        void exitSetInterruptMode(Z80Parser::SetInterruptModeContext* context) override;


        void exitAddHLAndWordRegister(Z80Parser::AddHLAndWordRegisterContext* context) override;


        void exitAddWithCarryHLAndWordRegister(Z80Parser::AddWithCarryHLAndWordRegisterContext* context) override;

        void exitSubtractWithCarryWordRegisterFromHL(
            Z80Parser::SubtractWithCarryWordRegisterFromHLContext* context) override;


        void exitSimpleIXAdditionRegister(Z80Parser::SimpleIXAdditionRegisterContext* context) override;


        void exitSimpleIYAdditionRegister(Z80Parser::SimpleIYAdditionRegisterContext* context) override;


        void exitAddIXWithRegister(Z80Parser::AddIXWithRegisterContext* context) override;


        void exitAddIYWithRegister(Z80Parser::AddIYWithRegisterContext* context) override;


        void exitIncrementWordRegister(Z80Parser::IncrementWordRegisterContext* context) override;


        void exitIncrementIX(Z80Parser::IncrementIXContext* context) override;


        void exitIncrementIY(Z80Parser::IncrementIYContext* context) override;


        void exitDecrementWordRegister(Z80Parser::DecrementWordRegisterContext* context) override;


        void exitDecrementIX(Z80Parser::DecrementIXContext* context) override;


        void exitDecrementIY(Z80Parser::DecrementIYContext* context) override;


        void exitWordArithemeticCommand(Z80Parser::WordArithemeticCommandContext* context) override;


        void exitRotateLeftCircularA(Z80Parser::RotateLeftCircularAContext* context) override;


        void exitRotateLeftThroughCarryA(Z80Parser::RotateLeftThroughCarryAContext* context) override;


        void exitRotateRightCircularA(Z80Parser::RotateRightCircularAContext* context) override;

        void exitRotateRightThroughCarryA(Z80Parser::RotateRightThroughCarryAContext* context) override;

        void exitRotateLeftCircularRegister(Z80Parser::RotateLeftCircularRegisterContext* context) override;

        void exitRotateLeftCircularHLPointer(Z80Parser::RotateLeftCircularHLPointerContext* context) override;

        void exitRotateLeftCircularIXOffset(Z80Parser::RotateLeftCircularIXOffsetContext* context) override;


        void exitRotateLeftCircularIYOffset(Z80Parser::RotateLeftCircularIYOffsetContext* context) override;


        void exitRotateLeftThroughCarryRegister(Z80Parser::RotateLeftThroughCarryRegisterContext* context) override;


        void exitRotateLeftThroughCarryHLPointer(Z80Parser::RotateLeftThroughCarryHLPointerContext* context) override;


        void exitRotateLeftThroughCarryIXOffset(Z80Parser::RotateLeftThroughCarryIXOffsetContext* context) override;


        void exitRotateLeftThroughCarryIYOffset(Z80Parser::RotateLeftThroughCarryIYOffsetContext* context) override;


        void exitRotateRightCircularRegister(Z80Parser::RotateRightCircularRegisterContext* context) override;


        void exitRotateRightCircularHLPointer(Z80Parser::RotateRightCircularHLPointerContext* context) override;


        void exitRotateRightCircularIXOffset(Z80Parser::RotateRightCircularIXOffsetContext* context) override;


        void exitRotateRightCircularIYOffset(Z80Parser::RotateRightCircularIYOffsetContext* context) override;


        void exitRotateRightThroughCarryRegister(Z80Parser::RotateRightThroughCarryRegisterContext* context) override;

        void exitRotateRightThroughCarryHLPointer(Z80Parser::RotateRightThroughCarryHLPointerContext* context) override;


        void exitRotateRightThroughCarryIXOffset(Z80Parser::RotateRightThroughCarryIXOffsetContext* context) override;


        void exitRotateRightThroughCarryIYOffset(Z80Parser::RotateRightThroughCarryIYOffsetContext* context) override;


        void exitShiftLeftArithmetic(Z80Parser::ShiftLeftArithmeticContext* context) override;


        void exitShiftLeftLogical(Z80Parser::ShiftLeftLogicalContext* context) override;


        void exitShiftRightArithmetic(Z80Parser::ShiftRightArithmeticContext* context) override;


        void exitShiftRightLogical(Z80Parser::ShiftRightLogicalContext* context) override;


        void exitRotateDigitLeft(Z80Parser::RotateDigitLeftContext* context) override;


        void exitRotateDigitRight(Z80Parser::RotateDigitRightContext* context) override;

        void exitTestBitInRegister(Z80Parser::TestBitInRegisterContext* context) override;


        void exitTestBitInHLPointer(Z80Parser::TestBitInHLPointerContext* context) override;


        void exitTestBitInIXOffset(Z80Parser::TestBitInIXOffsetContext* context) override;


        void exitTestBitInIYOffset(Z80Parser::TestBitInIYOffsetContext* context) override;


        void exitSetBitInRegister(Z80Parser::SetBitInRegisterContext* context) override;


        void exitSetBitInHLPointer(Z80Parser::SetBitInHLPointerContext* context) override;


        void exitSetBitInIXOffset(Z80Parser::SetBitInIXOffsetContext* context) override;


        void exitSetBitInIYOffset(Z80Parser::SetBitInIYOffsetContext* context) override;


        void exitResetBitInRegister(Z80Parser::ResetBitInRegisterContext* context) override;


        void exitResetBitHLPointer(Z80Parser::ResetBitHLPointerContext* context) override;


        void exitResetBitIXOffset(Z80Parser::ResetBitIXOffsetContext* context) override;


        void exitResetBitIYOffset(Z80Parser::ResetBitIYOffsetContext* context) override;

        void exitJumpCondition(Z80Parser::JumpConditionContext* context) override;

        void exitJumpToAbsoluteAddress(Z80Parser::JumpToAbsoluteAddressContext* context) override;

        void exitJumpToAbsoluteAddressGivenCondition(
            Z80Parser::JumpToAbsoluteAddressGivenConditionContext* context) override;


        void exitJumpToRelativeAddress(Z80Parser::JumpToRelativeAddressContext* context) override;

        void exitJumpToRelativeAddressGivenCondition(
            Z80Parser::JumpToRelativeAddressGivenConditionContext* context) override;


        void exitJumpToHL(Z80Parser::JumpToHLContext* context) override;


        void exitJumpToIX(Z80Parser::JumpToIXContext* context) override;


        void exitJumpToIY(Z80Parser::JumpToIYContext* context) override;


        void exitJumpRelativeAndDecrement(Z80Parser::JumpRelativeAndDecrementContext* context) override;


        void exitCallSubroutine(Z80Parser::CallSubroutineContext* context) override;


        void exitCallSubroutineWithCondition(Z80Parser::CallSubroutineWithConditionContext* context) override;


        void exitReturnFromSubroutine(Z80Parser::ReturnFromSubroutineContext* context) override;


        void
        exitReturnFromSubroutineGivenCondition(Z80Parser::ReturnFromSubroutineGivenConditionContext* context) override;


        void exitReturnAndEnableInterrupt(Z80Parser::ReturnAndEnableInterruptContext* context) override;


        void exitReturnFromNonMaskableInterrupt(Z80Parser::ReturnFromNonMaskableInterruptContext* context) override;


        void exitRestartCommand(Z80Parser::RestartCommandContext* context) override;

        void exitInputDataIntoA(Z80Parser::InputDataIntoAContext* context) override;


        void exitInputDataIntoRegister(Z80Parser::InputDataIntoRegisterContext* context) override;


        void exitIni(Z80Parser::IniContext* context) override;


        void exitInir(Z80Parser::InirContext* context) override;


        void exitInd(Z80Parser::IndContext* context) override;


        void exitIndr(Z80Parser::IndrContext* context) override;


        void exitOutputAIntoDataPointer(Z80Parser::OutputAIntoDataPointerContext* context) override;


        void exitOutputRegisterIntoCPointer(Z80Parser::OutputRegisterIntoCPointerContext* context) override;


        void exitOuti(Z80Parser::OutiContext* context) override;


        void exitOtir(Z80Parser::OtirContext* context) override;


        void exitOutd(Z80Parser::OutdContext* context) override;


        void exitOtdr(Z80Parser::OtdrContext* context) override;


        void exitInputAndOutpuCommand(Z80Parser::InputAndOutpuCommandContext* context) override;


        void exitLabel(Z80Parser::LabelContext* context) override;


        void exitOrgDirective(Z80Parser::OrgDirectiveContext* context) override;


        void exitCharNumber(Z80Parser::CharNumberContext* context) override;


        void exitName(Z80Parser::NameContext* context) override;


        void exitNumber(Z80Parser::NumberContext* context) override;


        void exitDecimalNumber(Z80Parser::DecimalNumberContext* context) override;


        void exitHexNumber(Z80Parser::HexNumberContext* context) override;


        void exitComment(Z80Parser::CommentContext* context) override;

        void exitLoadRegisterWithIXHigh(Z80Parser::LoadRegisterWithIXHighContext* context) override;

        void exitLoadRegisterWithIXLow(Z80Parser::LoadRegisterWithIXLowContext* context) override;

        void exitLoadRegisterWithIYHigh(Z80Parser::LoadRegisterWithIYHighContext* context) override;

        void exitLoadRegisterWithIYLow(Z80Parser::LoadRegisterWithIYLowContext* context) override;

        void exitLoadIXHighWithRegister(Z80Parser::LoadIXHighWithRegisterContext* context) override;

        void exitLoadIXLowWithRegister(Z80Parser::LoadIXLowWithRegisterContext* context) override;

        void exitLoadIYHighWithRegister(Z80Parser::LoadIYHighWithRegisterContext* context) override;

        void exitLoadIYLowWithRegister(Z80Parser::LoadIYLowWithRegisterContext* context) override;

        void exitLoadIXNibbles(Z80Parser::LoadIXNibblesContext* context) override;

        void exitLoadIYNibbles(Z80Parser::LoadIYNibblesContext* context) override;

        void exitSubtractIXHighOrLowFromA(Z80Parser::SubtractIXHighOrLowFromAContext* context) override;

        void exitSubtractIYHighOrLowFromA(Z80Parser::SubtractIYHighOrLowFromAContext* context) override;

        void exitCompareAWithHLPointer(Z80Parser::CompareAWithHLPointerContext* context) override;

        void enterInstruction(Z80Parser::InstructionContext* context) override;
};


#endif //Z80_CORE_Z80COMPILER_H
