#ifndef Z80_CORE_Z80CPU_H
#define Z80_CORE_Z80CPU_H

#include "Z80Word.h"
#include "WordRegister.h"
#include "AccumulatorRegister.h"
#include "MemoryHandler.h"
#include "IOMemoryHandler.h"
#include "OpcodeCycleReader.h"
#include "MemoryCommandHandler.h"
#include "ByteCpuRegisterSymbol.h"
#include "WordCpuRegisterSymbol.h"

class Z80Cpu {
    public:
        explicit Z80Cpu(MemoryHandler& memoryHandler, IOMemoryHandler& ioMemoryHandler);

        void set(ByteCpuRegisterSymbol byteCpuRegisterSymbol, Z80Byte data);

        void set(WordCpuRegisterSymbol wordCpuRegisterSymbol, Z80Word data);

        Z80Byte get(ByteCpuRegisterSymbol byteCpuRegisterSymbol);

        Z80Word get(WordCpuRegisterSymbol wordCpuRegisterSymbol);

        void initialize();

        void triggerInterrupt();

        void triggerNonMaskableInterrupt();

        void executeNextCommand();

        void executeNextCommand(Z80Byte opCode);

        void executeUntilNumberOfCycles(int cycles);

        int getNumberOfCyclesPassed() const; // NOLINT

        void enableDebugLogging(bool enable);


    private:
        MemoryHandler& memory;
        IOMemoryHandler& ioMemory;
        MemoryCommandHandler memoryCommandHandler;
        bool debug{false};

        /**
         * The current Cpu interrupt mode
         */
        int interruptMode{0};

        bool iff1{false};
        bool iff2{false};
        bool halted{false};
        bool interruptsEnabled{false};
        bool requestInterrupt{false};


        // Registers...
        FlagRegister f;
        AccumulatorRegister a{f};
        WordRegister bc{f};
        WordRegister de{f};
        WordRegister hl{f};
        WordRegister ix{f};
        WordRegister iy{f};
        Z80Byte refreshRegister{0x00};
        Z80Byte interruptVectorRegister{0x00};
        Z80Word programCounter{0x00};
        Z80Word stackPointer{0x00};

        /**
         * The number of cycles that passed after an executed command.
         */
        int cyclesPassed{0};

        /**
         * Execute a command using the current base op code, using the base command table.
         * @param opCode command or prefix byte
         */
        void executeNextBaseCommand(Z80Byte opCode);

        /**
         * Execute a CB prefix op code.
         *
         * @param opCode command byte
         */
        void executeNextCBCommand(Z80Byte opCode);

        /**
         * Execute one of the index commands.
         *
         * @param opCode command byte
         * @param indexRegister either the IX or IY word register
         */
        void executeNextIndexCommand(Z80Byte opCode, WordRegister& indexRegister);

        /**
         * Execute one of the index CB commands.
         *
         * @param indexRegister either the IX or IY word register
         */
        void executeNextIndexCBCommand(WordRegister& indexRegister);

        /**
         * Execute one of the ED commands.
         *
         * @param opCode command byte
         */
        void executeNextEDCommand(Z80Byte opCode);

        /**
         * Increment the refresh register.
         */
        void incrementRefreshRegister();

        /**
         * Process all maskable interrupts
         */
        void handleMaskableInterrupts();

        /**
         * Push a word onto the stack
         * @param word
         */
        void pushWord(Z80Word word);

        /**
         * Push the AF register
         */
        void popAF();

        /**
         * Pop a word off of the stack.
         */
        Z80Word popWord();

        /**
         * NEG - negate the A register
         * A = 0 - A
         */
        void negateA();

        /**
         * RETI - return and enable interrupts
         */
        void returnAndEnableInterrupts();

        /**
         * Increment the byte contents  by one, of the given address.
         */
        void incrementMemoryContents(Z80Word address);

        /**
         * Decrement the byte contents  by one, of the given address.
         */
        void decrementMemoryContents(Z80Word address);

        /**
         * Increment the byte contents  by one, of (HL).
         */
        void incrementHLMemoryContents();

        /**
         * Decrement the byte contents  by one, of (HL).
         */
        void decrementHLMemoryContents();

        /**
         * Perform an absolute jump if the condition is true.
         * @param condition
         */
        void performJumpUsingCondition(bool condition);

        /**
         *
         * Perform relative jump if the condition is true.
         * @param condition
         */
        void performJumpRelativeUsingCondition(bool condition);

        /**
         * Perform a subroutine call if the condition is true.
         * @param condition
         */
        void performSubroutineCallUsingCondition(bool condition);

        /**
         * Perform the subroutine call.
         */
        void performSubroutineCallUsingCondition();

        /**
         * Return if the condition is true.
         *
         * @param condition
         */
        void performReturnUsingCondition(bool condition);

        /**
         * EI
         */
        void enableInterrupts();

        /**
         * DI
         */
        void disableInterrupts();

        /**
         * Load (HL) into (NN).
         */
        void loadHLIntoImmediatePointer();

        /**
         * Load (HL) using (NN).
         */
        void loadHLWithImmediatePointer();

        /**
         * Load A with (NN).
         */
        void loadAWithImmediatePointer();

        /**
         * Load A into (NN).
         */
        void loadAIntoImmediatePointer();

        /**
         * SCF - set the carry flag.
         */
        void setCarryFlag();

        void performHalt();

        void exchangeHLWithStackPointer();

        void swapAF();

        void swapDEWithHL();

        void swapBCDEAndHL();

        void switchToCBTable();

        void switchToEDTable();

        void switchToFDTable();

        void switchToDDTable();

        void readIOMemoryIntoA();

        void writeAIntoImmediateIOMemoryPort();

        void addToProgramCounter(int value);

        void performCpuRestart(Z80Word address);

        /**
         * Decrement B, and if B is 0 JR nn.
         */
        void DJNZ();

        /**
         * Write (HL) into port (C) and increment HL & decrement B
         *
         * OUT[(C)] = (HL)
         */
        void OUTI();

        /**
         * Repeat OUTI until B = 0.
         */
        void OTIR();

        /**
         *  Write (HL) into IO port (C) and decrement HL & D
         *
         *  OUT[(C)] = (HL)
         */
        void OUTD();

        /**
         * Repeat OUTD until B=0.
         */
        void OTDR();

        /**
         * Byte compare A & (HL); increment HL & decrement BC
         */
        void CPI();

        /**
         * Repeat CPI until BC = 0 or Z =1.
         */
        void CPIR();

        /**
         * Byte compare A & (HL); decrement HL & decrement BC
         */
        void CPD();

        /**
         * Repeat CPD until Z=1 or BC = 0
         */
        void CPDR();

        /**
         * Load (HL) with the contents of IO port (C); increment HL and decrement B.
         */
        void INI();

        /**
         * Repeat INI until B = 0;
         */
        void INIR();

        /**
         * Load (HL) with the contents of IO port (C); decrement HL and B
         */
        void IND();

        /**
         * Repeat IND until B = 0.
         */
        void INDR();


        /**
         * Load (DE) = (HL) and increment DE, HL, & BC
         */
        void LDI();

        /**
         * Repeat LDI until BC == 0.
         */
        void LDIR();

        /**
         * Load (DE) = (HL) and decrement DE, HL, & BC
         */
        void LDD();

        /**
         * Repeat LDD until BC == 0.
         */
        void LDDR();


        /**
        * Performs a 4-bit rightward rotation of a 12-bit number whose 4 most signigifcant bits
        * are the 4 least significant bits of A, and its 8 least significant bits are in (HL).
        *   A               (HL)
        *  (xxxx[11-8]])   ([7-0])
        */
        void RRD();

        /**
         * Performs a 4-bit leftward rotation of a 12-bit number whose 4 most signigifcant bits
         * are the 4 least significant bits of A, and its 8 least significant bits are in (HL).
         *   A               (HL)
         *  (xxxx[11-8]])   ([7-0])
         */
        void RLD();

        /**
         * Store the data from IO port (C) into the specified register
         */
        void IN(ByteCpuRegisterSymbol cpuRegisterSymbol);

        void loadWordDataIntoWordOperandPointer(Z80Word wordData);

        void loadRegisterFromWordOperandPointer(WordRegister& wordRegister);

        Z80Word programCounterPlus(int value);

        OpcodeCycleReader cycleReader{};

        ByteOperationHandler byteOperationHandler;

        void outputOpCode(std::string mnemonic, Z80Byte opCode);

        void dumpCpuState();

        Z80Byte readImmediateByteOperand();

        Z80Word readImmediateWordOperand();
};

#endif //Z80_CORE_Z80CPU_H
