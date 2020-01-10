#include "Z80Cpu.h"
#include <Z80CpuMnemonicMapper.h>

using namespace std;

using w=Z80Word;
using b=Z80Byte;

#define CPU_LOGIC(programCounterOffset, block) \
    block; \
    addToProgramCounter(programCounterOffset);

#define CPU_COMMAND(opCode, programCounterOffset, block) \
    case opCode: \
        block; \
        addToProgramCounter(programCounterOffset); \
        return;

#define HL_VALUE hl.getWordValue()

void Z80Cpu::executeUntilNumberOfCycles(int cycles) {
    cyclesPassed = 0;

    while (cyclesPassed < cycles) {
        if (requestInterrupt) {
            handleMaskableInterrupts();
        }

        executeNextCommand();
    }
}

void Z80Cpu::executeNextCommand() {
    const auto opCode = memory.readByte(programCounter);

    executeNextCommand(opCode);
}

void Z80Cpu::executeNextCommand(Z80Byte opCode) {
    executeNextBaseCommand(opCode);
}

void Z80Cpu::executeNextBaseCommand(Z80Byte opCode) {
    auto& mnemonic = Z80CpuMnemonicMapper::map(OpcodeType::BASE_TABLE_OPCODE, opCode.getValue());
    incrementRefreshRegister();
    cyclesPassed += cycleReader.getCyclesFromByte(opCode);

    outputOpCode(mnemonic, opCode);

    interruptsEnabled = false;

    switch (opCode.getValue()) {
        //  NOP
        CPU_COMMAND(0x00, 1, {})

        //
        // 8-Bit Immediate Loads
        //
        CPU_COMMAND(0x06, 2, { bc.setHighByte(readImmediateByteOperand()); })
        CPU_COMMAND(0x0E, 2, { bc.setLowByte(readImmediateByteOperand()); })
        CPU_COMMAND(0x16, 2, { de.setHighByte(readImmediateByteOperand()); })
        CPU_COMMAND(0x1E, 2, { de.setLowByte(readImmediateByteOperand()); })
        CPU_COMMAND(0x26, 2, { hl.setHighByte(readImmediateByteOperand()); })
        CPU_COMMAND(0x2E, 2, { hl.setLowByte(readImmediateByteOperand()); })
        CPU_COMMAND(0x3E, 2, { a.setByteValue(readImmediateByteOperand()); })

        //
        // 8-Bit Register Loads
        //
        CPU_COMMAND(0x7F, 1, {})
        CPU_COMMAND(0x78, 1, { a.setByteValue(bc.getHighByte()); })
        CPU_COMMAND(0x79, 1, { a.setByteValue(bc.getLowByte()); })
        CPU_COMMAND(0x7A, 1, { a.setByteValue(de.getHighByte()); })
        CPU_COMMAND(0x7B, 1, { a.setByteValue(de.getLowByte()); })
        CPU_COMMAND(0x7C, 1, { a.setByteValue(hl.getHighByte()); })
        CPU_COMMAND(0x7D, 1, { a.setByteValue(hl.getLowByte()); })
        CPU_COMMAND(0x40, 1, {})
        CPU_COMMAND(0x41, 1, { bc.setHighByte(bc.getLowByte()); })
        CPU_COMMAND(0x42, 1, { bc.setHighByte(de.getHighByte()); })
        CPU_COMMAND(0x43, 1, { bc.setHighByte(de.getLowByte()); })
        CPU_COMMAND(0x44, 1, { bc.setHighByte(hl.getHighByte()); })
        CPU_COMMAND(0x45, 1, { bc.setHighByte(hl.getLowByte()); })
        CPU_COMMAND(0x47, 1, { bc.setHighByte(a.getByteValue()); })
        CPU_COMMAND(0x48, 1, { bc.setLowByte(bc.getHighByte()); })
        CPU_COMMAND(0x49, 1, {})
        CPU_COMMAND(0x4A, 1, { bc.setLowByte(de.getHighByte()); })
        CPU_COMMAND(0x4B, 1, { bc.setLowByte(de.getLowByte()); })
        CPU_COMMAND(0x4C, 1, { bc.setLowByte(hl.getHighByte()); })
        CPU_COMMAND(0x4D, 1, { bc.setLowByte(hl.getLowByte()); })
        CPU_COMMAND(0x4F, 1, { bc.setLowByte(a.getByteValue()); })
        CPU_COMMAND(0x50, 1, { de.setHighByte(bc.getHighByte()); })
        CPU_COMMAND(0x51, 1, { de.setHighByte(bc.getLowByte()); })
        CPU_COMMAND(0x52, 1, {})
        CPU_COMMAND(0x53, 1, { de.setHighByte(de.getLowByte()); })
        CPU_COMMAND(0x54, 1, { de.setHighByte(hl.getHighByte()); })
        CPU_COMMAND(0x55, 1, { de.setHighByte(hl.getLowByte()); })
        CPU_COMMAND(0x57, 1, { de.setHighByte(a.getByteValue()); })
        CPU_COMMAND(0x58, 1, { de.setLowByte(bc.getHighByte()); })
        CPU_COMMAND(0x59, 1, { de.setLowByte(bc.getLowByte()); })
        CPU_COMMAND(0x5A, 1, { de.setLowByte(de.getHighByte()); })
        CPU_COMMAND(0x5B, 1, {})
        CPU_COMMAND(0x5C, 1, { de.setLowByte(hl.getHighByte()); })
        CPU_COMMAND(0x5D, 1, { de.setLowByte(hl.getLowByte()); })
        CPU_COMMAND(0x5F, 1, { de.setLowByte(a.getByteValue()); })
        CPU_COMMAND(0x60, 1, { hl.setHighByte(bc.getHighByte()); })
        CPU_COMMAND(0x61, 1, { hl.setHighByte(bc.getLowByte()); })
        CPU_COMMAND(0x62, 1, { hl.setHighByte(de.getHighByte()); })
        CPU_COMMAND(0x63, 1, { hl.setHighByte(de.getLowByte()); })
        CPU_COMMAND(0x64, 1, {})
        CPU_COMMAND(0x65, 1, { hl.setHighByte(hl.getLowByte()); })
        CPU_COMMAND(0x67, 1, { hl.setHighByte(a.getByteValue()); })
        CPU_COMMAND(0x68, 1, { hl.setLowByte(bc.getHighByte()); })
        CPU_COMMAND(0x69, 1, { hl.setLowByte(bc.getLowByte()); })
        CPU_COMMAND(0x6A, 1, { hl.setLowByte(de.getHighByte()); })
        CPU_COMMAND(0x6B, 1, { hl.setLowByte(de.getLowByte()); })
        CPU_COMMAND(0x6C, 1, { hl.setLowByte(hl.getHighByte()); })
        CPU_COMMAND(0x6D, 1, {})
        CPU_COMMAND(0x6F, 1, { hl.setLowByte(a.getByteValue()); })

        //
        // Write register to memory
        //
        CPU_COMMAND(0x70, 1, { memory.writeByte(hl.getWordValue(), bc.getHighByte()); })
        CPU_COMMAND(0x71, 1, { memory.writeByte(hl.getWordValue(), bc.getLowByte()); })
        CPU_COMMAND(0x72, 1, { memory.writeByte(hl.getWordValue(), de.getHighByte()); })
        CPU_COMMAND(0x73, 1, { memory.writeByte(hl.getWordValue(), de.getLowByte()); })
        CPU_COMMAND(0x74, 1, { memory.writeByte(hl.getWordValue(), hl.getHighByte()); })
        CPU_COMMAND(0x75, 1, { memory.writeByte(hl.getWordValue(), hl.getLowByte()); })
        CPU_COMMAND(0x02, 1, { memory.writeByte(bc.getWordValue(), a.getByteValue()); })
        CPU_COMMAND(0x12, 1, { memory.writeByte(de.getWordValue(), a.getByteValue()); })
        CPU_COMMAND(0x77, 1, { memory.writeByte(hl.getWordValue(), a.getByteValue()); })

        //
        // Write memory to register
        //
        CPU_COMMAND(0x7E, 1, { a.setByteValue(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x46, 1, { bc.setHighByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x4E, 1, { bc.setLowByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x56, 1, { de.setHighByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x5E, 1, { de.setLowByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x66, 1, { hl.setHighByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x6E, 1, { hl.setLowByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0x0A, 1, { a.setByteValue(memory.readByte(bc.getWordValue())); })
        CPU_COMMAND(0x1A, 1, { a.setByteValue(memory.readByte(de.getWordValue())); })

        //
        // 16-bit loads
        //
        CPU_COMMAND(0x01, 3, { bc.setWordValue(readImmediateWordOperand()); })
        CPU_COMMAND(0x11, 3, { de.setWordValue(readImmediateWordOperand()); })
        CPU_COMMAND(0x21, 3, { hl.setWordValue(readImmediateWordOperand()); })
        CPU_COMMAND(0x31, 3, { stackPointer = readImmediateWordOperand(); })
        CPU_COMMAND(0xF9, 1, { stackPointer = hl.getWordValue(); })

        //
        // Push word onto stack
        //
        CPU_COMMAND(0xF5, 1, { pushWord(w(a.getByteValue(), f.getByteValue())); })
        CPU_COMMAND(0xC5, 1, { pushWord(bc.getWordValue()); })
        CPU_COMMAND(0xD5, 1, { pushWord(de.getWordValue()); })
        CPU_COMMAND(0xE5, 1, { pushWord(hl.getWordValue()); })


        //
        // Pop word onto the stack
        //
        CPU_COMMAND(0xF1, 1, { popAF(); })
        CPU_COMMAND(0xC1, 1, { bc.setWordValue(popWord()); })
        CPU_COMMAND(0xD1, 1, { de.setWordValue(popWord()); })
        CPU_COMMAND(0xE1, 1, { hl.setWordValue(popWord()); })

        //
        // 8-Bit Add
        //
        CPU_COMMAND(0x87, 1, { a.addByte(a.getByteValue()); })
        CPU_COMMAND(0x80, 1, { a.addByte(bc.getHighByte()); })
        CPU_COMMAND(0x81, 1, { a.addByte(bc.getLowByte()); })
        CPU_COMMAND(0x82, 1, { a.addByte(de.getHighByte()); })
        CPU_COMMAND(0x83, 1, { a.addByte(de.getLowByte()); })
        CPU_COMMAND(0x84, 1, { a.addByte(hl.getHighByte()); })
        CPU_COMMAND(0x85, 1, { a.addByte(hl.getLowByte()); })
        CPU_COMMAND(0x86, 1, { a.addByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xC6, 2, { a.addByte(readImmediateByteOperand()); })

        //
        // 8-Bit Add with carry
        //
        CPU_COMMAND(0x8F, 1, { a.addByteWithCarry(a.getByteValue()); })
        CPU_COMMAND(0x88, 1, { a.addByteWithCarry(bc.getHighByte()); })
        CPU_COMMAND(0x89, 1, { a.addByteWithCarry(bc.getLowByte()); })
        CPU_COMMAND(0x8A, 1, { a.addByteWithCarry(de.getHighByte()); })
        CPU_COMMAND(0x8B, 1, { a.addByteWithCarry(de.getLowByte()); })
        CPU_COMMAND(0x8C, 1, { a.addByteWithCarry(hl.getHighByte()); })
        CPU_COMMAND(0x8D, 1, { a.addByteWithCarry(hl.getLowByte()); })
        CPU_COMMAND(0x8E, 1, { a.addByteWithCarry(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xCE, 2, { a.addByteWithCarry(readImmediateByteOperand()); })

        //
        // 16-Bit increment register
        //
        CPU_COMMAND(0x03, 1, { bc.incrementWord(); })
        CPU_COMMAND(0x13, 1, { de.incrementWord(); })
        CPU_COMMAND(0x23, 1, { hl.incrementWord(); })
        CPU_COMMAND(0x33, 1, { stackPointer = w{stackPointer.getValue() + 1}; })


        //
        // 16-Bit decrement  register
        //
        CPU_COMMAND(0x0B, 1, { bc.decrementWord(); })
        CPU_COMMAND(0x1B, 1, { de.decrementWord(); })
        CPU_COMMAND(0x2B, 1, { hl.decrementWord(); })
        CPU_COMMAND(0x3B, 1, { stackPointer = w{stackPointer.getValue() - 1}; })

        //
        // 8-Bit Subtract
        //
        CPU_COMMAND(0x97, 1, { a.subtractByte(a.getByteValue()); })
        CPU_COMMAND(0x90, 1, { a.subtractByte(bc.getHighByte()); })
        CPU_COMMAND(0x91, 1, { a.subtractByte(bc.getLowByte()); })
        CPU_COMMAND(0x92, 1, { a.subtractByte(de.getHighByte()); })
        CPU_COMMAND(0x93, 1, { a.subtractByte(de.getLowByte()); })
        CPU_COMMAND(0x94, 1, { a.subtractByte(hl.getHighByte()); })
        CPU_COMMAND(0x95, 1, { a.subtractByte(hl.getLowByte()); })
        CPU_COMMAND(0x96, 1, { a.subtractByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xD6, 2, { a.subtractByte(readImmediateByteOperand()); })

        //
        // 8-Bit Subtract with carry
        //
        CPU_COMMAND(0x9F, 1, { a.subtractByteWithCarry(a.getByteValue()); })
        CPU_COMMAND(0x98, 1, { a.subtractByteWithCarry(bc.getHighByte()); })
        CPU_COMMAND(0x99, 1, { a.subtractByteWithCarry(bc.getLowByte()); })
        CPU_COMMAND(0x9A, 1, { a.subtractByteWithCarry(de.getHighByte()); })
        CPU_COMMAND(0x9B, 1, { a.subtractByteWithCarry(de.getLowByte()); })
        CPU_COMMAND(0x9C, 1, { a.subtractByteWithCarry(hl.getHighByte()); })
        CPU_COMMAND(0x9D, 1, { a.subtractByteWithCarry(hl.getLowByte()); })
        CPU_COMMAND(0x9E, 1, { a.subtractByteWithCarry(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xDE, 2, { a.subtractByteWithCarry(readImmediateByteOperand()); })

        //
        // 8-Bit AND
        //
        CPU_COMMAND(0xA7, 1, { a.andByte(a.getByteValue()); })
        CPU_COMMAND(0xA0, 1, { a.andByte(bc.getHighByte()); })
        CPU_COMMAND(0xA1, 1, { a.andByte(bc.getLowByte()); })
        CPU_COMMAND(0xA2, 1, { a.andByte(de.getHighByte()); })
        CPU_COMMAND(0xA3, 1, { a.andByte(de.getLowByte()); })
        CPU_COMMAND(0xA4, 1, { a.andByte(hl.getHighByte()); })
        CPU_COMMAND(0xA5, 1, { a.andByte(hl.getLowByte()); })
        CPU_COMMAND(0xA6, 1, { a.andByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xE6, 2, { a.andByte(readImmediateByteOperand()); })

        //
        // 8-Bit OR
        //
        CPU_COMMAND(0xB7, 1, { a.orByte(a.getByteValue()); })
        CPU_COMMAND(0xB0, 1, { a.orByte(bc.getHighByte()); })
        CPU_COMMAND(0xB1, 1, { a.orByte(bc.getLowByte()); })
        CPU_COMMAND(0xB2, 1, { a.orByte(de.getHighByte()); })
        CPU_COMMAND(0xB3, 1, { a.orByte(de.getLowByte()); })
        CPU_COMMAND(0xB4, 1, { a.orByte(hl.getHighByte()); })
        CPU_COMMAND(0xB5, 1, { a.orByte(hl.getLowByte()); })
        CPU_COMMAND(0xB6, 1, { a.orByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xF6, 2, { a.orByte(readImmediateByteOperand()); })

        //
        // 8-Bit XOR
        //
        CPU_COMMAND(0xAF, 1, { a.xorByte(a.getByteValue()); })
        CPU_COMMAND(0xA8, 1, { a.xorByte(bc.getHighByte()); })
        CPU_COMMAND(0xA9, 1, { a.xorByte(bc.getLowByte()); })
        CPU_COMMAND(0xAA, 1, { a.xorByte(de.getHighByte()); })
        CPU_COMMAND(0xAB, 1, { a.xorByte(de.getLowByte()); })
        CPU_COMMAND(0xAC, 1, { a.xorByte(hl.getHighByte()); })
        CPU_COMMAND(0xAD, 1, { a.xorByte(hl.getLowByte()); })
        CPU_COMMAND(0xAE, 1, { a.xorByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xEE, 2, { a.xorByte(readImmediateByteOperand()); })

        //
        // 8-Bit compare
        //
        CPU_COMMAND(0xBF, 1, { a.compareByte(a.getByteValue()); })
        CPU_COMMAND(0xB8, 1, { a.compareByte(bc.getHighByte()); })
        CPU_COMMAND(0xB9, 1, { a.compareByte(bc.getLowByte()); })
        CPU_COMMAND(0xBA, 1, { a.compareByte(de.getHighByte()); })
        CPU_COMMAND(0xBB, 1, { a.compareByte(de.getLowByte()); })
        CPU_COMMAND(0xBC, 1, { a.compareByte(hl.getHighByte()); })
        CPU_COMMAND(0xBD, 1, { a.compareByte(hl.getLowByte()); })
        CPU_COMMAND(0xBE, 1, { a.compareByte(memory.readByte(hl.getWordValue())); })
        CPU_COMMAND(0xFE, 2, { a.compareByte(readImmediateByteOperand()); })

        //
        // 8-Bit increment
        //
        CPU_COMMAND(0x3C, 1, { a.incrementByte(); })
        CPU_COMMAND(0x04, 1, { bc.incrementHighByte(); })
        CPU_COMMAND(0x0C, 1, { bc.incrementLowByte(); })
        CPU_COMMAND(0x14, 1, { de.incrementHighByte(); })
        CPU_COMMAND(0x1C, 1, { de.incrementLowByte(); })
        CPU_COMMAND(0x24, 1, { hl.incrementHighByte(); })
        CPU_COMMAND(0x2C, 1, { hl.incrementLowByte(); })
        CPU_COMMAND(0x34, 1, { incrementHLMemoryContents(); })

        //
        // 8-Bit decrement
        //
        CPU_COMMAND(0x3D, 1, { a.decrementByte(); })
        CPU_COMMAND(0x05, 1, { bc.decrementHighByte(); })
        CPU_COMMAND(0x0D, 1, { bc.decrementLowByte(); })
        CPU_COMMAND(0x15, 1, { de.decrementHighByte(); })
        CPU_COMMAND(0x1D, 1, { de.decrementLowByte(); })
        CPU_COMMAND(0x25, 1, { hl.decrementHighByte(); })
        CPU_COMMAND(0x2D, 1, { hl.decrementLowByte(); })
        CPU_COMMAND(0x35, 1, { decrementHLMemoryContents(); })

        //
        // 16-Bit additions
        //
        CPU_COMMAND(0x09, 1, { hl.addWord(bc.getWordValue()); })
        CPU_COMMAND(0x19, 1, { hl.addWord(de.getWordValue()); })
        CPU_COMMAND(0x29, 1, { hl.addWord(hl.getWordValue()); })
        CPU_COMMAND(0x39, 1, { hl.addWord(stackPointer); })

        //
        // Jumps commands
        //
        CPU_COMMAND(0xE9, 0, { programCounter = hl.getWordValue(); })
        CPU_COMMAND(0xC3, 0, { programCounter = memory.readWord(programCounterPlus(1)); })
        CPU_COMMAND(0xC2, 0, { performJumpUsingCondition(!f.getZeroBit()); })
        CPU_COMMAND(0xCA, 0, { performJumpUsingCondition(f.getZeroBit()); })
        CPU_COMMAND(0xD2, 0, { performJumpUsingCondition(!f.getCarryBit()); })
        CPU_COMMAND(0xDA, 0, { performJumpUsingCondition(f.getCarryBit()); })
        CPU_COMMAND(0xFA, 0, { performJumpUsingCondition(f.getSignBit()); })
        CPU_COMMAND(0xF2, 0, { performJumpUsingCondition(!f.getSignBit()); })
        CPU_COMMAND(0xE2, 0, { performJumpUsingCondition(!f.getParityBit()); })
        CPU_COMMAND(0xEA, 0, { performJumpUsingCondition(f.getParityBit()); })

        //
        // Jump with immediate data
        //
        CPU_COMMAND(0x10, 0, { DJNZ(); })
        CPU_COMMAND(0x18, 0, { addToProgramCounter(memory.readSignedByte(programCounterPlus(1)) + 2); })
        CPU_COMMAND(0x20, 0, { performJumpRelativeUsingCondition(!f.getZeroBit()); })
        CPU_COMMAND(0x28, 0, { performJumpRelativeUsingCondition(f.getZeroBit()); })
        CPU_COMMAND(0x30, 0, { performJumpRelativeUsingCondition(!f.getCarryBit()); })
        CPU_COMMAND(0x38, 0, { performJumpRelativeUsingCondition(f.getCarryBit()); })

        //
        // Call subroutine
        //
        CPU_COMMAND(0xCD, 0, { performSubroutineCallUsingCondition(); })
        CPU_COMMAND(0xC4, 0, { performSubroutineCallUsingCondition(!f.getZeroBit()); })
        CPU_COMMAND(0xCC, 0, { performSubroutineCallUsingCondition(f.getZeroBit()); })
        CPU_COMMAND(0xD4, 0, { performSubroutineCallUsingCondition(!f.getCarryBit()); })
        CPU_COMMAND(0xDC, 0, { performSubroutineCallUsingCondition(f.getCarryBit()); })
        CPU_COMMAND(0xE4, 0, { performSubroutineCallUsingCondition(!f.getParityBit()); })
        CPU_COMMAND(0xEC, 0, { performSubroutineCallUsingCondition(f.getParityBit()); })
        CPU_COMMAND(0xF4, 0, { performSubroutineCallUsingCondition(!f.getSignBit()); })
        CPU_COMMAND(0xFC, 0, { performSubroutineCallUsingCondition(f.getSignBit()); })

        //
        // Return from subroutine
        //
        CPU_COMMAND(0xC9, 0, { programCounter = popWord(); })
        CPU_COMMAND(0xC0, 0, { performReturnUsingCondition(!f.getZeroBit()); })
        CPU_COMMAND(0xC8, 0, { performReturnUsingCondition(f.getZeroBit()); })
        CPU_COMMAND(0xD0, 0, { performReturnUsingCondition(!f.getCarryBit()); })
        CPU_COMMAND(0xD8, 0, { performReturnUsingCondition(f.getCarryBit()); })
        CPU_COMMAND(0xF0, 0, { performReturnUsingCondition(!f.getSignBit()); })
        CPU_COMMAND(0xF8, 0, { performReturnUsingCondition(f.getSignBit()); })
        CPU_COMMAND(0xE0, 0, { performReturnUsingCondition(!f.getParityBit()); })
        CPU_COMMAND(0xE8, 0, { performReturnUsingCondition(f.getParityBit()); })

        //
        // Cpu restart commands
        //
        CPU_COMMAND(0xC7, 0, { performCpuRestart(w{0x00}); })
        CPU_COMMAND(0xCF, 0, { performCpuRestart(w{0x08}); })
        CPU_COMMAND(0xD7, 0, { performCpuRestart(w{0x10}); })
        CPU_COMMAND(0xDF, 0, { performCpuRestart(w{0x18}); })
        CPU_COMMAND(0xE7, 0, { performCpuRestart(w{0x20}); })
        CPU_COMMAND(0xEF, 0, { performCpuRestart(w{0x28}); })
        CPU_COMMAND(0xF7, 0, { performCpuRestart(w{0x30}); })
        CPU_COMMAND(0xFF, 0, { performCpuRestart(w{0x38}); })

        //
        // Rotate commands
        //
        CPU_COMMAND(0x07, 1, { a.rotateLeftCircular(); })
        CPU_COMMAND(0x0F, 1, { a.rotateRightCircular(); })
        CPU_COMMAND(0x17, 1, { a.rotateLeftThroughCarry(); })
        CPU_COMMAND(0x1F, 1, { a.rotateRightThroughCarry(); })


        CPU_COMMAND(0xCB, 0, { switchToCBTable(); })
        CPU_COMMAND(0xED, 0, { switchToEDTable(); })
        CPU_COMMAND(0xDD, 0, { switchToDDTable(); })
        CPU_COMMAND(0xFD, 0, { switchToFDTable(); })


        //
        // Exchange/Swap commands
        //
        CPU_COMMAND(0xEB, 1, { swapDEWithHL(); })
        CPU_COMMAND(0x08, 1, { swapAF(); })


        CPU_COMMAND(0xFB, 1, { enableInterrupts(); })
        CPU_COMMAND(0xF3, 1, { disableInterrupts(); })

        CPU_COMMAND(0x22, 3, { loadHLIntoImmediatePointer(); })
        CPU_COMMAND(0x76, 0, { performHalt(); })
        CPU_COMMAND(0xE3, 1, { exchangeHLWithStackPointer(); })
        CPU_COMMAND(0xD9, 1, { swapBCDEAndHL(); })
        CPU_COMMAND(0x2A, 3, { loadHLWithImmediatePointer(); })
        CPU_COMMAND(0x2F, 1, { a.complementByte(); })
        CPU_COMMAND(0x3A, 3, { loadAWithImmediatePointer(); })
        CPU_COMMAND(0x32, 3, { loadAIntoImmediatePointer(); })
        CPU_COMMAND(0x36, 2, { memory.writeByte(hl.getWordValue(), readImmediateByteOperand()); })
        CPU_COMMAND(0x3F, 1, { f.complementCarryFlag(); })
        CPU_COMMAND(0x27, 1, { a.decimalAdjust(); })
        CPU_COMMAND(0x37, 1, { setCarryFlag(); })


        CPU_COMMAND(0xD3, 2, { writeAIntoImmediateIOMemoryPort(); })
        CPU_COMMAND(0xDB, 2, { readIOMemoryIntoA(); })
    }
}

void Z80Cpu::executeNextCBCommand(Z80Byte opCode) {
    auto& mnemonic = Z80CpuMnemonicMapper::map(OpcodeType::CB_TABLE_OPCODE, opCode.getValue());

    incrementRefreshRegister();
    cyclesPassed += cycleReader.getCyclesFromBytes(b{0xCB}, opCode);
    outputOpCode(mnemonic, opCode);

    switch (opCode.getValue()) {
        CPU_COMMAND(0x00, 1, bc.rotateLeftCircular(HIGH))
        CPU_COMMAND(0x01, 1, bc.rotateLeftCircular(LOW))
        CPU_COMMAND(0x02, 1, de.rotateLeftCircular(HIGH))
        CPU_COMMAND(0x03, 1, de.rotateLeftCircular(LOW))
        CPU_COMMAND(0x04, 1, hl.rotateLeftCircular(HIGH))
        CPU_COMMAND(0x05, 1, hl.rotateLeftCircular(LOW))
        CPU_COMMAND(0x06, 1, memoryCommandHandler.rotateLeftCircular(HL_VALUE))
        CPU_COMMAND(0x07, 1, a.rotateLeftCircular())
        CPU_COMMAND(0x08, 1, bc.rotateRightCircular(HIGH))
        CPU_COMMAND(0x09, 1, bc.rotateRightCircular(LOW))
        CPU_COMMAND(0x0A, 1, de.rotateRightCircular(HIGH))
        CPU_COMMAND(0x0B, 1, de.rotateRightCircular(LOW))
        CPU_COMMAND(0x0C, 1, hl.rotateRightCircular(HIGH))
        CPU_COMMAND(0x0D, 1, hl.rotateRightCircular(LOW))
        CPU_COMMAND(0x0E, 1, memoryCommandHandler.rotateRightCircular(HL_VALUE))
        CPU_COMMAND(0x0F, 1, a.rotateRightCircular())

        CPU_COMMAND(0x10, 1, bc.rotateLeftThroughCarry(HIGH))
        CPU_COMMAND(0x11, 1, bc.rotateLeftThroughCarry(LOW))
        CPU_COMMAND(0x12, 1, de.rotateLeftThroughCarry(HIGH))
        CPU_COMMAND(0x13, 1, de.rotateLeftThroughCarry(LOW))
        CPU_COMMAND(0x14, 1, hl.rotateLeftThroughCarry(HIGH))
        CPU_COMMAND(0x15, 1, hl.rotateLeftThroughCarry(LOW))
        CPU_COMMAND(0x16, 1, memoryCommandHandler.rotateLeftThroughCarry(HL_VALUE))
        CPU_COMMAND(0x17, 1, a.rotateLeftThroughCarry())
        CPU_COMMAND(0x18, 1, bc.rotateRightThroughCarry(HIGH))
        CPU_COMMAND(0x19, 1, bc.rotateRightThroughCarry(LOW))
        CPU_COMMAND(0x1A, 1, de.rotateRightThroughCarry(HIGH))
        CPU_COMMAND(0x1B, 1, de.rotateRightThroughCarry(LOW))
        CPU_COMMAND(0x1C, 1, hl.rotateRightThroughCarry(HIGH))
        CPU_COMMAND(0x1D, 1, hl.rotateRightThroughCarry(LOW))
        CPU_COMMAND(0x1E, 1, memoryCommandHandler.rotateRightThroughCarry(HL_VALUE))
        CPU_COMMAND(0x1F, 1, a.rotateRightThroughCarry())


        CPU_COMMAND(0x20, 1, bc.shiftLeftArithmetic(HIGH))
        CPU_COMMAND(0x21, 1, bc.shiftLeftArithmetic(LOW))
        CPU_COMMAND(0x22, 1, de.shiftLeftArithmetic(HIGH))
        CPU_COMMAND(0x23, 1, de.shiftLeftArithmetic(LOW))
        CPU_COMMAND(0x24, 1, hl.shiftLeftArithmetic(HIGH))
        CPU_COMMAND(0x25, 1, hl.shiftLeftArithmetic(LOW))
        CPU_COMMAND(0x26, 1, memoryCommandHandler.shiftLeftArithmetic(HL_VALUE))
        CPU_COMMAND(0x27, 1, a.shiftLeftArithmetic())
        CPU_COMMAND(0x28, 1, bc.shiftRightArithmetic(HIGH))
        CPU_COMMAND(0x29, 1, bc.shiftRightArithmetic(LOW))
        CPU_COMMAND(0x2A, 1, de.shiftRightArithmetic(HIGH))
        CPU_COMMAND(0x2B, 1, de.shiftRightArithmetic(LOW))
        CPU_COMMAND(0x2C, 1, hl.shiftRightArithmetic(HIGH))
        CPU_COMMAND(0x2D, 1, hl.shiftRightArithmetic(LOW))
        CPU_COMMAND(0x2E, 1, memoryCommandHandler.shiftRightArithmetic(HL_VALUE))
        CPU_COMMAND(0x2F, 1, a.shiftRightArithmetic())


        CPU_COMMAND(0x30, 1, bc.shiftLeftLogical(HIGH))
        CPU_COMMAND(0x31, 1, bc.shiftLeftLogical(LOW))
        CPU_COMMAND(0x32, 1, de.shiftLeftLogical(HIGH))
        CPU_COMMAND(0x33, 1, de.shiftLeftLogical(LOW))
        CPU_COMMAND(0x34, 1, hl.shiftLeftLogical(HIGH))
        CPU_COMMAND(0x35, 1, hl.shiftLeftLogical(LOW))
        CPU_COMMAND(0x36, 1, memoryCommandHandler.shiftLeftLogical(HL_VALUE))
        CPU_COMMAND(0x37, 1, a.shiftLeftLogical())
        CPU_COMMAND(0x38, 1, bc.shiftRightLogical(HIGH))
        CPU_COMMAND(0x39, 1, bc.shiftRightLogical(LOW))
        CPU_COMMAND(0x3A, 1, de.shiftRightLogical(HIGH))
        CPU_COMMAND(0x3B, 1, de.shiftRightLogical(LOW))
        CPU_COMMAND(0x3C, 1, hl.shiftRightLogical(HIGH))
        CPU_COMMAND(0x3D, 1, hl.shiftRightLogical(LOW))
        CPU_COMMAND(0x3E, 1, memoryCommandHandler.shiftRightLogical(HL_VALUE))
        CPU_COMMAND(0x3F, 1, a.shiftRightLogical())

        CPU_COMMAND(0x40, 1, bc.testBit(0, HIGH))
        CPU_COMMAND(0x41, 1, bc.testBit(0, LOW))
        CPU_COMMAND(0x42, 1, de.testBit(0, HIGH))
        CPU_COMMAND(0x43, 1, de.testBit(0, LOW))
        CPU_COMMAND(0x44, 1, hl.testBit(0, HIGH))
        CPU_COMMAND(0x45, 1, hl.testBit(0, LOW))
        CPU_COMMAND(0x46, 1, memoryCommandHandler.testBit(0, HL_VALUE))
        CPU_COMMAND(0x47, 1, a.testBit(0))
        CPU_COMMAND(0x48, 1, bc.testBit(1, HIGH))
        CPU_COMMAND(0x49, 1, bc.testBit(1, LOW))
        CPU_COMMAND(0x4A, 1, de.testBit(1, HIGH))
        CPU_COMMAND(0x4B, 1, de.testBit(1, LOW))
        CPU_COMMAND(0x4C, 1, hl.testBit(1, HIGH))
        CPU_COMMAND(0x4D, 1, hl.testBit(1, LOW))
        CPU_COMMAND(0x4E, 1, memoryCommandHandler.testBit(1, HL_VALUE))
        CPU_COMMAND(0x4F, 1, a.testBit(1))

        CPU_COMMAND(0x50, 1, bc.testBit(2, HIGH))
        CPU_COMMAND(0x51, 1, bc.testBit(2, LOW))
        CPU_COMMAND(0x52, 1, de.testBit(2, HIGH))
        CPU_COMMAND(0x53, 1, de.testBit(2, LOW))
        CPU_COMMAND(0x54, 1, hl.testBit(2, HIGH))
        CPU_COMMAND(0x55, 1, hl.testBit(2, LOW))
        CPU_COMMAND(0x56, 1, memoryCommandHandler.testBit(2, HL_VALUE))
        CPU_COMMAND(0x57, 1, a.testBit(2))
        CPU_COMMAND(0x58, 1, bc.testBit(3, HIGH))
        CPU_COMMAND(0x59, 1, bc.testBit(3, LOW))
        CPU_COMMAND(0x5A, 1, de.testBit(3, HIGH))
        CPU_COMMAND(0x5B, 1, de.testBit(3, LOW))
        CPU_COMMAND(0x5C, 1, hl.testBit(3, HIGH))
        CPU_COMMAND(0x5D, 1, hl.testBit(3, LOW))
        CPU_COMMAND(0x5E, 1, memoryCommandHandler.testBit(3, HL_VALUE))
        CPU_COMMAND(0x5F, 1, a.testBit(3))

        CPU_COMMAND(0x60, 1, bc.testBit(4, HIGH))
        CPU_COMMAND(0x61, 1, bc.testBit(4, LOW))
        CPU_COMMAND(0x62, 1, de.testBit(4, HIGH))
        CPU_COMMAND(0x63, 1, de.testBit(4, LOW))
        CPU_COMMAND(0x64, 1, hl.testBit(4, HIGH))
        CPU_COMMAND(0x65, 1, hl.testBit(4, LOW))
        CPU_COMMAND(0x66, 1, memoryCommandHandler.testBit(4, HL_VALUE))
        CPU_COMMAND(0x67, 1, a.testBit(4))
        CPU_COMMAND(0x68, 1, bc.testBit(5, HIGH))
        CPU_COMMAND(0x69, 1, bc.testBit(5, LOW))
        CPU_COMMAND(0x6A, 1, de.testBit(5, HIGH))
        CPU_COMMAND(0x6B, 1, de.testBit(5, LOW))
        CPU_COMMAND(0x6C, 1, hl.testBit(5, HIGH))
        CPU_COMMAND(0x6D, 1, hl.testBit(5, LOW))
        CPU_COMMAND(0x6E, 1, memoryCommandHandler.testBit(5, HL_VALUE))
        CPU_COMMAND(0x6F, 1, a.testBit(5))

        CPU_COMMAND(0x70, 1, bc.testBit(6, HIGH))
        CPU_COMMAND(0x71, 1, bc.testBit(6, LOW))
        CPU_COMMAND(0x72, 1, de.testBit(6, HIGH))
        CPU_COMMAND(0x73, 1, de.testBit(6, LOW))
        CPU_COMMAND(0x74, 1, hl.testBit(6, HIGH))
        CPU_COMMAND(0x75, 1, hl.testBit(6, LOW))
        CPU_COMMAND(0x76, 1, memoryCommandHandler.testBit(6, HL_VALUE))
        CPU_COMMAND(0x77, 1, a.testBit(6))
        CPU_COMMAND(0x78, 1, bc.testBit(7, HIGH))
        CPU_COMMAND(0x79, 1, bc.testBit(7, LOW))
        CPU_COMMAND(0x7A, 1, de.testBit(7, HIGH))
        CPU_COMMAND(0x7B, 1, de.testBit(7, LOW))
        CPU_COMMAND(0x7C, 1, hl.testBit(7, HIGH))
        CPU_COMMAND(0x7D, 1, hl.testBit(7, LOW))
        CPU_COMMAND(0x7E, 1, memoryCommandHandler.testBit(7, HL_VALUE))
        CPU_COMMAND(0x7F, 1, a.testBit(7))

        CPU_COMMAND(0x80, 1, bc.clearBit(0, HIGH))
        CPU_COMMAND(0x81, 1, bc.clearBit(0, LOW))
        CPU_COMMAND(0x82, 1, de.clearBit(0, HIGH))
        CPU_COMMAND(0x83, 1, de.clearBit(0, LOW))
        CPU_COMMAND(0x84, 1, hl.clearBit(0, HIGH))
        CPU_COMMAND(0x85, 1, hl.clearBit(0, LOW))
        CPU_COMMAND(0x86, 1, memoryCommandHandler.clearBit(0, HL_VALUE))
        CPU_COMMAND(0x87, 1, a.clearBit(0))
        CPU_COMMAND(0x88, 1, bc.clearBit(1, HIGH))
        CPU_COMMAND(0x89, 1, bc.clearBit(1, LOW))
        CPU_COMMAND(0x8A, 1, de.clearBit(1, HIGH))
        CPU_COMMAND(0x8B, 1, de.clearBit(1, LOW))
        CPU_COMMAND(0x8C, 1, hl.clearBit(1, HIGH))
        CPU_COMMAND(0x8D, 1, hl.clearBit(1, LOW))
        CPU_COMMAND(0x8E, 1, memoryCommandHandler.clearBit(1, HL_VALUE))
        CPU_COMMAND(0x8F, 1, a.clearBit(1))

        CPU_COMMAND(0x90, 1, bc.clearBit(2, HIGH))
        CPU_COMMAND(0x91, 1, bc.clearBit(2, LOW))
        CPU_COMMAND(0x92, 1, de.clearBit(2, HIGH))
        CPU_COMMAND(0x93, 1, de.clearBit(2, LOW))
        CPU_COMMAND(0x94, 1, hl.clearBit(2, HIGH))
        CPU_COMMAND(0x95, 1, hl.clearBit(2, LOW))
        CPU_COMMAND(0x96, 1, memoryCommandHandler.clearBit(2, HL_VALUE))
        CPU_COMMAND(0x97, 1, a.clearBit(2))
        CPU_COMMAND(0x98, 1, bc.clearBit(3, HIGH))
        CPU_COMMAND(0x99, 1, bc.clearBit(3, LOW))
        CPU_COMMAND(0x9A, 1, de.clearBit(3, HIGH))
        CPU_COMMAND(0x9B, 1, de.clearBit(3, LOW))
        CPU_COMMAND(0x9C, 1, hl.clearBit(3, HIGH))
        CPU_COMMAND(0x9D, 1, hl.clearBit(3, LOW))
        CPU_COMMAND(0x9E, 1, memoryCommandHandler.clearBit(3, HL_VALUE))
        CPU_COMMAND(0x9F, 1, a.clearBit(3))

        CPU_COMMAND(0xA0, 1, bc.clearBit(4, HIGH))
        CPU_COMMAND(0xA1, 1, bc.clearBit(4, LOW))
        CPU_COMMAND(0xA2, 1, de.clearBit(4, HIGH))
        CPU_COMMAND(0xA3, 1, de.clearBit(4, LOW))
        CPU_COMMAND(0xA4, 1, hl.clearBit(4, HIGH))
        CPU_COMMAND(0xA5, 1, hl.clearBit(4, LOW))
        CPU_COMMAND(0xA6, 1, memoryCommandHandler.clearBit(4, HL_VALUE))
        CPU_COMMAND(0xA7, 1, a.clearBit(4))
        CPU_COMMAND(0xA8, 1, bc.clearBit(5, HIGH))
        CPU_COMMAND(0xA9, 1, bc.clearBit(5, LOW))
        CPU_COMMAND(0xAA, 1, de.clearBit(5, HIGH))
        CPU_COMMAND(0xAB, 1, de.clearBit(5, LOW))
        CPU_COMMAND(0xAC, 1, hl.clearBit(5, HIGH))
        CPU_COMMAND(0xAD, 1, hl.clearBit(5, LOW))
        CPU_COMMAND(0xAE, 1, memoryCommandHandler.clearBit(5, HL_VALUE))
        CPU_COMMAND(0xAF, 1, a.clearBit(5))

        CPU_COMMAND(0xB0, 1, bc.clearBit(6, HIGH))
        CPU_COMMAND(0xB1, 1, bc.clearBit(6, LOW))
        CPU_COMMAND(0xB2, 1, de.clearBit(6, HIGH))
        CPU_COMMAND(0xB3, 1, de.clearBit(6, LOW))
        CPU_COMMAND(0xB4, 1, hl.clearBit(6, HIGH))
        CPU_COMMAND(0xB5, 1, hl.clearBit(6, LOW))
        CPU_COMMAND(0xB6, 1, memoryCommandHandler.clearBit(6, HL_VALUE))
        CPU_COMMAND(0xB7, 1, a.clearBit(6))
        CPU_COMMAND(0xB8, 1, bc.clearBit(7, HIGH))
        CPU_COMMAND(0xB9, 1, bc.clearBit(7, LOW))
        CPU_COMMAND(0xBA, 1, de.clearBit(7, HIGH))
        CPU_COMMAND(0xBB, 1, de.clearBit(7, LOW))
        CPU_COMMAND(0xBC, 1, hl.clearBit(7, HIGH))
        CPU_COMMAND(0xBD, 1, hl.clearBit(7, LOW))
        CPU_COMMAND(0xBE, 1, memoryCommandHandler.clearBit(7, HL_VALUE))
        CPU_COMMAND(0xBF, 1, a.clearBit(7))

        CPU_COMMAND(0xC0, 1, bc.enableBit(0, HIGH))
        CPU_COMMAND(0xC1, 1, bc.enableBit(0, LOW))
        CPU_COMMAND(0xC2, 1, de.enableBit(0, HIGH))
        CPU_COMMAND(0xC3, 1, de.enableBit(0, LOW))
        CPU_COMMAND(0xC4, 1, hl.enableBit(0, HIGH))
        CPU_COMMAND(0xC5, 1, hl.enableBit(0, LOW))
        CPU_COMMAND(0xC6, 1, memoryCommandHandler.enableBit(0, HL_VALUE))
        CPU_COMMAND(0xC7, 1, a.enableBit(0))
        CPU_COMMAND(0xC8, 1, bc.enableBit(1, HIGH))
        CPU_COMMAND(0xC9, 1, bc.enableBit(1, LOW))
        CPU_COMMAND(0xCA, 1, de.enableBit(1, HIGH))
        CPU_COMMAND(0xCB, 1, de.enableBit(1, LOW))
        CPU_COMMAND(0xCC, 1, hl.enableBit(1, HIGH))
        CPU_COMMAND(0xCD, 1, hl.enableBit(1, LOW))
        CPU_COMMAND(0xCE, 1, memoryCommandHandler.enableBit(1, HL_VALUE))
        CPU_COMMAND(0xCF, 1, a.enableBit(1))

        CPU_COMMAND(0xD0, 1, bc.enableBit(2, HIGH))
        CPU_COMMAND(0xD1, 1, bc.enableBit(2, LOW))
        CPU_COMMAND(0xD2, 1, de.enableBit(2, HIGH))
        CPU_COMMAND(0xD3, 1, de.enableBit(2, LOW))
        CPU_COMMAND(0xD4, 1, hl.enableBit(2, HIGH))
        CPU_COMMAND(0xD5, 1, hl.enableBit(2, LOW))
        CPU_COMMAND(0xD6, 1, memoryCommandHandler.enableBit(2, HL_VALUE))
        CPU_COMMAND(0xD7, 1, a.enableBit(2))
        CPU_COMMAND(0xD8, 1, bc.enableBit(3, HIGH))
        CPU_COMMAND(0xD9, 1, bc.enableBit(3, LOW))
        CPU_COMMAND(0xDA, 1, de.enableBit(3, HIGH))
        CPU_COMMAND(0xDB, 1, de.enableBit(3, LOW))
        CPU_COMMAND(0xDC, 1, hl.enableBit(3, HIGH))
        CPU_COMMAND(0xDD, 1, hl.enableBit(3, LOW))
        CPU_COMMAND(0xDE, 1, memoryCommandHandler.enableBit(3, HL_VALUE))
        CPU_COMMAND(0xDF, 1, a.enableBit(3))

        CPU_COMMAND(0xE0, 1, bc.enableBit(4, HIGH))
        CPU_COMMAND(0xE1, 1, bc.enableBit(4, LOW))
        CPU_COMMAND(0xE2, 1, de.enableBit(4, HIGH))
        CPU_COMMAND(0xE3, 1, de.enableBit(4, LOW))
        CPU_COMMAND(0xE4, 1, hl.enableBit(4, HIGH))
        CPU_COMMAND(0xE5, 1, hl.enableBit(4, LOW))
        CPU_COMMAND(0xE6, 1, memoryCommandHandler.enableBit(4, HL_VALUE))
        CPU_COMMAND(0xE7, 1, a.enableBit(4))
        CPU_COMMAND(0xE8, 1, bc.enableBit(5, HIGH))
        CPU_COMMAND(0xE9, 1, bc.enableBit(5, LOW))
        CPU_COMMAND(0xEA, 1, de.enableBit(5, HIGH))
        CPU_COMMAND(0xEB, 1, de.enableBit(5, LOW))
        CPU_COMMAND(0xEC, 1, hl.enableBit(5, HIGH))
        CPU_COMMAND(0xED, 1, hl.enableBit(5, LOW))
        CPU_COMMAND(0xEE, 1, memoryCommandHandler.enableBit(5, HL_VALUE))
        CPU_COMMAND(0xEF, 1, a.enableBit(5))

        CPU_COMMAND(0xF0, 1, bc.enableBit(6, HIGH))
        CPU_COMMAND(0xF1, 1, bc.enableBit(6, LOW))
        CPU_COMMAND(0xF2, 1, de.enableBit(6, HIGH))
        CPU_COMMAND(0xF3, 1, de.enableBit(6, LOW))
        CPU_COMMAND(0xF4, 1, hl.enableBit(6, HIGH))
        CPU_COMMAND(0xF5, 1, hl.enableBit(6, LOW))
        CPU_COMMAND(0xF6, 1, memoryCommandHandler.enableBit(6, HL_VALUE))
        CPU_COMMAND(0xF7, 1, a.enableBit(6))
        CPU_COMMAND(0xF8, 1, bc.enableBit(7, HIGH))
        CPU_COMMAND(0xF9, 1, bc.enableBit(7, LOW))
        CPU_COMMAND(0xFA, 1, de.enableBit(7, HIGH))
        CPU_COMMAND(0xFB, 1, de.enableBit(7, LOW))
        CPU_COMMAND(0xFC, 1, hl.enableBit(7, HIGH))
        CPU_COMMAND(0xFD, 1, hl.enableBit(7, LOW))
        CPU_COMMAND(0xFE, 1, memoryCommandHandler.enableBit(7, HL_VALUE))
        CPU_COMMAND(0xFF, 1, a.enableBit(7))
    }
}

void Z80Cpu::executeNextIndexCommand(Z80Byte opCode, WordRegister& indexRegister) {
    auto& mnemonic = Z80CpuMnemonicMapper::map(OpcodeType::INDEX_TABLE_OPCODE, opCode.getValue());

    incrementRefreshRegister();
    cyclesPassed += cycleReader.getCyclesFromBytes(b{0xDD}, opCode);

    outputOpCode(mnemonic, opCode);

    switch (opCode.getValue()) {
        // LD IX, (NN)
        CPU_COMMAND(0x2A, 3, { loadRegisterFromWordOperandPointer(indexRegister); })
        // LD IX, NN
        CPU_COMMAND(0x21, 3, { indexRegister.setWordValue(readImmediateWordOperand()); })
        // LD (NN), IX
        CPU_COMMAND(0x22, 3, { loadWordDataIntoWordOperandPointer(indexRegister.getWordValue()); })
        // LD IXH, N
        CPU_COMMAND(0x26, 2, { indexRegister.setHighByte(readImmediateByteOperand()); })
        // LD IXL, N
        CPU_COMMAND(0x2E, 2, { indexRegister.setLowByte(readImmediateByteOperand()); })
        // LD (IX + N), N
        CPU_COMMAND(0x36, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);

            addToProgramCounter(1);
            auto data = memory.readByte(programCounter);

            memory.writeByte(w{indexRegister.getWordValue().getValue() + offset}, data);
        })
        // LD B, IXH
        CPU_COMMAND(0x44, 1, { bc.setHighByte(indexRegister.getHighByte()); })
        // LD B, IXL
        CPU_COMMAND(0x45, 1, { bc.setHighByte(indexRegister.getLowByte()); })
        // LD B, (IX + N)
        CPU_COMMAND(0x46, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto data = memory.readByte(w(indexRegister.getWordValue().getValue() + offset));
            bc.setHighByte(data);
        })
        // LD C, IXH
        CPU_COMMAND(0x4C, 1, { bc.setLowByte(indexRegister.getHighByte()); })
        // LD C, IXL
        CPU_COMMAND(0x4D, 1, { bc.setLowByte(indexRegister.getLowByte()); })
        // LD C, (IX + N)
        CPU_COMMAND(0x4E, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto data = memory.readByte(w(indexRegister.getWordValue().getValue() + offset));
            bc.setLowByte(data);
        })
        // LD D, IXH
        CPU_COMMAND(0x54, 1, { de.setHighByte(indexRegister.getHighByte()); })
        // LD D, IXL
        CPU_COMMAND(0x55, 1, { de.setHighByte(indexRegister.getLowByte()); })
        // LD D, (IX + N)
        CPU_COMMAND(0x56, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto data = memory.readByte(w(indexRegister.getWordValue().getValue() + offset));
            de.setHighByte(data);
        })
        // LD E, IXH
        CPU_COMMAND(0x5C, 1, { de.setLowByte(indexRegister.getHighByte()); })
        // LD E, IXL
        CPU_COMMAND(0x5D, 1, { de.setLowByte(indexRegister.getLowByte()); })
        // LD E, (IX + N)
        CPU_COMMAND(0x5E, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto data = memory.readByte(w(indexRegister.getWordValue().getValue() + offset));
            de.setLowByte(data);
        })
        // LD IXH, B
        CPU_COMMAND(0x60, 1, { indexRegister.setHighByte(bc.getHighByte()); })
        // LD IXH, C
        CPU_COMMAND(0x61, 1, { indexRegister.setHighByte(bc.getLowByte()); })
        // LD IXH, D
        CPU_COMMAND(0x62, 1, { indexRegister.setHighByte(de.getHighByte()); })
        // LD IXH, E
        CPU_COMMAND(0x63, 1, { indexRegister.setHighByte(de.getLowByte()); })
        CPU_COMMAND(0x64, 1, {})
        // LD IXH, IXL
        CPU_COMMAND(0x65, 1, { indexRegister.setHighByte(indexRegister.getLowByte()); })
        // LD H, (IX + N)
        CPU_COMMAND(0x66, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto data = memory.readByte(w(indexRegister.getWordValue().getValue() + offset));
            hl.setHighByte(data);
        })
        // LD IXH, A
        CPU_COMMAND(0x67, 1, { indexRegister.setHighByte(a.getByteValue()); })
        // LD IXL, B
        CPU_COMMAND(0x68, 1, { indexRegister.setLowByte(bc.getHighByte()); })
        // LD IXL, C
        CPU_COMMAND(0x69, 1, { indexRegister.setLowByte(bc.getLowByte()); })
        // LD IXL, D
        CPU_COMMAND(0x6A, 1, { indexRegister.setLowByte(de.getHighByte()); })
        // LD IXL, E
        CPU_COMMAND(0x6B, 1, { indexRegister.setLowByte(de.getLowByte()); })
        // LD IXL, IXH
        CPU_COMMAND(0x6C, 1, { indexRegister.setLowByte(indexRegister.getHighByte()); })
        CPU_COMMAND(0x6D, 1, {})
        // LD L, (IX + N)
        CPU_COMMAND(0x6E, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto data = memory.readByte(w(indexRegister.getWordValue().getValue() + offset));
            hl.setLowByte(data);
        })
        // LD IXL, A
        CPU_COMMAND(0x6F, 1, { indexRegister.setLowByte(a.getByteValue()); })
        // LD (IX + N), B
        CPU_COMMAND(0x70, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, bc.getHighByte());
        })
        // LD (IX + N), C
        CPU_COMMAND(0x71, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, bc.getLowByte());
        })
        // LD (IX + N), D
        CPU_COMMAND(0x72, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, de.getHighByte());
        })
        // LD (IX + N), E
        CPU_COMMAND(0x73, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, de.getLowByte());
        })
        // LD (IX + N), H
        CPU_COMMAND(0x74, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, hl.getHighByte());
        })
        // LD (IX + N), L
        CPU_COMMAND(0x75, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, hl.getLowByte());
        })
        // LD (IX + N), A
        CPU_COMMAND(0x77, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            memory.writeByte(address, a.getByteValue());
        })
        // LD A, IXH
        CPU_COMMAND(0x7C, 1, { a.setByteValue(indexRegister.getHighByte()); })
        // LD A, IXL
        CPU_COMMAND(0x7D, 1, { a.setByteValue(indexRegister.getLowByte()); })
        // LD A, (IX + N)
        CPU_COMMAND(0x7E, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.setByteValue(memory.readByte(address));
        })
        // LD SP, IX
        CPU_COMMAND(0xF9, 1, { stackPointer = indexRegister.getWordValue(); })

        // ADD IX, BC
        CPU_COMMAND(0x09, 1, { indexRegister.addWord(bc.getWordValue()); })
        // ADD IX, DE
        CPU_COMMAND(0x19, 1, { indexRegister.addWord(de.getWordValue()); })
        // ADD IX, IX
        CPU_COMMAND(0x29, 1, { indexRegister.addWord(indexRegister.getWordValue()); })
        // ADD IX, SP
        CPU_COMMAND(0x39, 1, { indexRegister.addWord(stackPointer); })
        // ADD A, IXH
        CPU_COMMAND(0x84, 1, { a.addByte(indexRegister.getHighByte()); })
        // ADD A, IXL
        CPU_COMMAND(0x85, 1, { a.addByte(indexRegister.getLowByte()); })
        // ADD A, (IX + N)
        CPU_COMMAND(0x86, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.addByte(memory.readByte(address));
        })

        // ADC A, IXH
        CPU_COMMAND(0x8C, 1, { a.addByteWithCarry(indexRegister.getHighByte()); })
        // ADC A, IXL
        CPU_COMMAND(0x8D, 1, { a.addByteWithCarry(indexRegister.getLowByte()); })
        // ADC A, (IX + N)
        CPU_COMMAND(0x8E, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.addByteWithCarry(memory.readByte(address));
        })

        // SUB A, IXH
        CPU_COMMAND(0x94, 1, { a.subtractByte(indexRegister.getHighByte()); })
        // SUB A, IXL
        CPU_COMMAND(0x95, 1, { a.subtractByte(indexRegister.getLowByte()); })
        // SUB A, (IX + N)
        CPU_COMMAND(0x96, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.subtractByte(memory.readByte(address));
        })
        // SUB A, IXH
        CPU_COMMAND(0x9C, 1, { a.subtractByteWithCarry(indexRegister.getHighByte()); })
        // SUB A, IXL
        CPU_COMMAND(0x9D, 1, { a.subtractByteWithCarry(indexRegister.getLowByte()); })
        // SUB A, (IX +N)
        CPU_COMMAND(0x9E, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.subtractByteWithCarry(memory.readByte(address));
        })

        // INC IX
        CPU_COMMAND(0x23, 1, { indexRegister.incrementWord(); })
        // INC IXH
        CPU_COMMAND(0x24, 1, { indexRegister.incrementHighByte(); })
        // INC IXL
        CPU_COMMAND(0x2C, 1, { indexRegister.incrementLowByte(); })
        // INC (IX + N)
        CPU_COMMAND(0x34, 1, {
            addToProgramCounter(1);
            auto address = indexRegister.getWordValue().getValue() + memory.readSignedByte(programCounter);
            incrementMemoryContents(w{address});
        })

        //  DEC IX
        CPU_COMMAND(0x2B, 1, { indexRegister.decrementWord(); })
        // DEC IXH
        CPU_COMMAND(0x25, 1, { indexRegister.decrementHighByte(); })
        // DEC IXL
        CPU_COMMAND(0x2D, 1, { indexRegister.decrementLowByte(); })
        // DEC (IX + N)
        CPU_COMMAND(0x35, 1, {
            addToProgramCounter(1);
            auto address = indexRegister.getWordValue().getValue() + memory.readSignedByte(programCounter);
            decrementMemoryContents(w{address});
        })

        // AND A, IXH
        CPU_COMMAND(0xA4, 1, { a.andByte(indexRegister.getHighByte()); })
        // AND A, IXL
        CPU_COMMAND(0xA5, 1, { a.andByte(indexRegister.getLowByte()); })
        // AND A, (IX + N)
        CPU_COMMAND(0xA6, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.andByte(memory.readByte(address));
        })

        //  XOR A, IXH
        CPU_COMMAND(0xAC, 1, { a.xorByte(indexRegister.getHighByte()); })
        //  XOR A, IXL
        CPU_COMMAND(0xAD, 1, { a.xorByte(indexRegister.getLowByte()); })
        //  XOR A, (IX + N)
        CPU_COMMAND(0xAE, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.xorByte(memory.readByte(address));
        })

        // OR A, IXH
        CPU_COMMAND(0xB4, 1, { a.orByte(indexRegister.getHighByte()); })
        // OR A, IXL
        CPU_COMMAND(0xB5, 1, { a.orByte(indexRegister.getLowByte()); })
        //  OR A, (IX + N)
        CPU_COMMAND(0xB6, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.orByte(memory.readByte(address));
        })

        // CP A, IXH
        CPU_COMMAND(0xBC, 1, { a.compareByte(indexRegister.getHighByte()); })
        // CP A, IXL
        CPU_COMMAND(0xBD, 1, { a.compareByte(indexRegister.getLowByte()); })
        //  CP A, (IX + N)
        CPU_COMMAND(0xBE, 1, {
            addToProgramCounter(1);
            auto offset = memory.readSignedByte(programCounter);
            auto address = w(indexRegister.getWordValue().getValue() + offset);
            a.compareByte(memory.readByte(address));
        })

        // EX (SP), IX
        CPU_COMMAND(0xE3, 1, {
            auto temporaryValue = indexRegister.getWordValue();
            indexRegister.setWordValue(memory.readWord(stackPointer));
            memory.writeByte(stackPointer, temporaryValue.getLowByte());
            memory.writeByte(w{stackPointer.getValue() + 1}, temporaryValue.getHighByte());
        })

        // POP IX
        CPU_COMMAND(0xE1, 1, { indexRegister.setWordValue(popWord()); })
        // PUSH IX
        CPU_COMMAND(0xE5, 1, { pushWord(indexRegister.getWordValue()); })

        // JP (IX)
        CPU_COMMAND(0xE9, 0, { programCounter = indexRegister.getWordValue(); })
        CPU_COMMAND(0xCB, 0, { executeNextIndexCBCommand(indexRegister); })
    }
}

void Z80Cpu::executeNextIndexCBCommand(WordRegister& indexRegister) {
    addToProgramCounter(1); // read the 0xCB byte
    auto offset = memory.readSignedByte(programCounter);
    auto address = w{indexRegister.getWordValue().getValue() + offset};

    addToProgramCounter(1);
    auto opCode = memory.readByte(programCounter);
    auto& mnemonic = Z80CpuMnemonicMapper::map(OpcodeType::CB_TABLE_OPCODE, opCode.getValue());

    cyclesPassed += cycleReader.getCyclesFromBytes(b{0xDD}, b{0xCB}, opCode);
    outputOpCode(mnemonic, opCode);

    switch (opCode.getValue()) {
        CPU_COMMAND(0x06, 1, memoryCommandHandler.rotateLeftCircular(address))
        CPU_COMMAND(0x0E, 1, memoryCommandHandler.rotateRightCircular(address))
        CPU_COMMAND(0x16, 1, memoryCommandHandler.rotateLeftThroughCarry(address))
        CPU_COMMAND(0x1E, 1, memoryCommandHandler.rotateRightThroughCarry(address))
        CPU_COMMAND(0x26, 1, memoryCommandHandler.shiftLeftArithmetic(address))
        CPU_COMMAND(0x2E, 1, memoryCommandHandler.shiftRightArithmetic(address))
        CPU_COMMAND(0x36, 1, memoryCommandHandler.shiftLeftLogical(address))
        CPU_COMMAND(0x3E, 1, memoryCommandHandler.shiftRightLogical(address))
        CPU_COMMAND(0x46, 1, memoryCommandHandler.testBit(0, address))
        CPU_COMMAND(0x4E, 1, memoryCommandHandler.testBit(1, address))
        CPU_COMMAND(0x56, 1, memoryCommandHandler.testBit(2, address))
        CPU_COMMAND(0x5E, 1, memoryCommandHandler.testBit(3, address))
        CPU_COMMAND(0x66, 1, memoryCommandHandler.testBit(4, address))
        CPU_COMMAND(0x6E, 1, memoryCommandHandler.testBit(5, address))
        CPU_COMMAND(0x76, 1, memoryCommandHandler.testBit(6, address))
        CPU_COMMAND(0x7E, 1, memoryCommandHandler.testBit(7, address))
        CPU_COMMAND(0x86, 1, memoryCommandHandler.clearBit(0, address))
        CPU_COMMAND(0x8E, 1, memoryCommandHandler.clearBit(1, address))
        CPU_COMMAND(0x96, 1, memoryCommandHandler.clearBit(2, address))
        CPU_COMMAND(0x9E, 1, memoryCommandHandler.clearBit(3, address))
        CPU_COMMAND(0xA6, 1, memoryCommandHandler.clearBit(4, address))
        CPU_COMMAND(0xAE, 1, memoryCommandHandler.clearBit(5, address))
        CPU_COMMAND(0xB6, 1, memoryCommandHandler.clearBit(6, address))
        CPU_COMMAND(0xBE, 1, memoryCommandHandler.clearBit(7, address))
        CPU_COMMAND(0xC6, 1, memoryCommandHandler.enableBit(0, address))
        CPU_COMMAND(0xCE, 1, memoryCommandHandler.enableBit(1, address))
        CPU_COMMAND(0xD6, 1, memoryCommandHandler.enableBit(2, address))
        CPU_COMMAND(0xDE, 1, memoryCommandHandler.enableBit(3, address))
        CPU_COMMAND(0xE6, 1, memoryCommandHandler.enableBit(4, address))
        CPU_COMMAND(0xEE, 1, memoryCommandHandler.enableBit(5, address))
        CPU_COMMAND(0xF6, 1, memoryCommandHandler.enableBit(6, address))
        CPU_COMMAND(0xFE, 1, memoryCommandHandler.enableBit(7, address))
    }
}

void Z80Cpu::executeNextEDCommand(Z80Byte opCode) {
    incrementRefreshRegister();
    cyclesPassed += cycleReader.getCyclesFromBytes(b{0xED}, opCode);
    auto& mnemonic = Z80CpuMnemonicMapper::map(OpcodeType::ED_TABLE_OPCODE, opCode.getValue());

    outputOpCode(mnemonic, opCode);

    switch (opCode.getValue()) {
        //
        // I/O Output commands
        //
        CPU_COMMAND(0x49, 1, { ioMemory.writeByte(bc.getLowByte(), bc.getLowByte()); })
        CPU_COMMAND(0x41, 1, { ioMemory.writeByte(bc.getLowByte(), bc.getHighByte()); })
        CPU_COMMAND(0x51, 1, { ioMemory.writeByte(bc.getLowByte(), de.getHighByte()); })
        CPU_COMMAND(0x59, 1, { ioMemory.writeByte(bc.getLowByte(), de.getLowByte()); })
        CPU_COMMAND(0x61, 1, { ioMemory.writeByte(bc.getLowByte(), hl.getHighByte()); })
        CPU_COMMAND(0x71, 1, { ioMemory.writeByte(bc.getLowByte(), Z80Byte{0}); })
        CPU_COMMAND(0x69, 1, { ioMemory.writeByte(bc.getLowByte(), hl.getLowByte()); })
        CPU_COMMAND(0x79, 1, { ioMemory.writeByte(bc.getLowByte(), a.getByteValue()); })
        CPU_COMMAND(0xA3, 1, { OUTI(); })
        CPU_COMMAND(0xB3, 0, { OTIR(); })

        //
        // 16-Bit Add
        //
        CPU_COMMAND(0x4A, 1, { hl.addWordWithCarry(bc.getWordValue()); })
        CPU_COMMAND(0x5A, 1, { hl.addWordWithCarry(de.getWordValue()); })
        CPU_COMMAND(0x6A, 1, { hl.addWordWithCarry(hl.getWordValue()); })
        CPU_COMMAND(0x7A, 1, { hl.addWordWithCarry(stackPointer); })

        //
        // 16-Bit Subtraction
        //
        CPU_COMMAND(0x42, 1, { hl.subtractWordWithCarry(bc.getWordValue()); })
        CPU_COMMAND(0x52, 1, { hl.subtractWordWithCarry(de.getWordValue()); })
        CPU_COMMAND(0x62, 1, { hl.subtractWordWithCarry(hl.getWordValue()); })
        CPU_COMMAND(0x72, 1, { hl.subtractWordWithCarry(stackPointer); })


        CPU_COMMAND(0xAB, 1, { OUTD(); })
        CPU_COMMAND(0xBB, 0, { OTDR(); })
        CPU_COMMAND(0xA0, 1, { LDI(); })
        CPU_COMMAND(0xB0, 0, { LDIR(); })
        CPU_COMMAND(0xA1, 1, { CPI(); })
        CPU_COMMAND(0xB1, 0, { CPIR(); })
        CPU_COMMAND(0xA9, 1, { CPD(); })
        CPU_COMMAND(0xB9, 0, { CPDR(); })
        CPU_COMMAND(0xA2, 1, { INI(); })
        CPU_COMMAND(0xB2, 0, { INIR(); })
        CPU_COMMAND(0xAA, 1, { IND(); })
        CPU_COMMAND(0xBA, 0, { INDR(); })


        CPU_COMMAND(0x43, 3, { loadWordDataIntoWordOperandPointer(bc.getWordValue()); })
        CPU_COMMAND(0x53, 3, { loadWordDataIntoWordOperandPointer(de.getWordValue()); })
        CPU_COMMAND(0x63, 3, { loadWordDataIntoWordOperandPointer(hl.getWordValue()); })
        CPU_COMMAND(0x73, 3, { loadWordDataIntoWordOperandPointer(stackPointer); })

        // RETI
        case 0x45:
        case 0x4D:
        case 0x55:
        case 0x5D:
        case 0x65:
        case 0x6D:
        case 0x75:
        case 0x7D: {
            CPU_LOGIC(0, { returnAndEnableInterrupts(); })
            return;
        }

        CPU_COMMAND(0x4B, 3, { loadRegisterFromWordOperandPointer(bc); })
        CPU_COMMAND(0x5B, 3, { loadRegisterFromWordOperandPointer(de); })
        CPU_COMMAND(0x6B, 3, { loadRegisterFromWordOperandPointer(hl); })
        CPU_COMMAND(0x7B, 3, {
            auto address = readImmediateWordOperand();
            Z80Byte low = memory.readByte(address);
            Z80Byte high = memory.readByte(w{address.getValue() + 1});
            stackPointer = w(high, low);
        })


        CPU_COMMAND(0x40, 1, { IN(ByteCpuRegisterSymbol::B); })
        CPU_COMMAND(0x48, 1, { IN(ByteCpuRegisterSymbol::C); })
        CPU_COMMAND(0x50, 1, { IN(ByteCpuRegisterSymbol::D); })
        CPU_COMMAND(0x58, 1, { IN(ByteCpuRegisterSymbol::E); })
        CPU_COMMAND(0x60, 1, { IN(ByteCpuRegisterSymbol::H); })
        CPU_COMMAND(0x68, 1, { IN(ByteCpuRegisterSymbol::L); })
        CPU_COMMAND(0x78, 1, { IN(ByteCpuRegisterSymbol::A); })

            // NEG
        case 0x44:
        case 0x4C:
        case 0x54:
        case 0x5C:
        case 0x64:
        case 0x6C:
        case 0x74:
        case 0x7C: {
            CPU_LOGIC(1, { negateA(); })
            return;
        }

            // IM 0
        case 0x46:
        case 0x4E:
        case 0x66:
        case 0x6E: {
            CPU_LOGIC(1, { interruptMode = 0; })
            return;
        }


        CPU_COMMAND(0xA8, 1, { LDD(); })
        CPU_COMMAND(0xB8, 0, { LDDR(); })
        CPU_COMMAND(0x67, 1, { RRD(); })
        CPU_COMMAND(0x6F, 1, { RLD(); })

            // LD I, A
        CPU_COMMAND(0x47, 1, { interruptVectorRegister = a.getByteValue(); })
            // LD R, A
        CPU_COMMAND(0x4F, 1, { refreshRegister = a.getByteValue(); })
            // IM 1
        case 0x56:
        case 0x76: {
            CPU_LOGIC(1, { interruptMode = 1; })
            return;
        }

            // LD A, I
        CPU_COMMAND(0x57, 1, {
            a.setByteValue(interruptVectorRegister);
            f.setParityBit(iff2);
            f.setZeroBit(byteOperationHandler.zeroFromValue(interruptVectorRegister));
            f.setSignBit(byteOperationHandler.signFromValue(interruptVectorRegister));
            f.setHalfCarryBit(false);
            f.setNegativeBit(false);
        })

            // LD A, R
        CPU_COMMAND(0x5F, 1, {
            a.setByteValue(refreshRegister);
            f.setParityBit(iff2);
            f.setZeroBit(byteOperationHandler.zeroFromValue(refreshRegister));
            f.setSignBit(byteOperationHandler.signFromValue(refreshRegister));
            f.setHalfCarryBit(false);
            f.setNegativeBit(false);
        })
    }
}
