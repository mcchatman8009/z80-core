#ifndef Z80_CORE_MEMORYCOMMANDHANDLER_H
#define Z80_CORE_MEMORYCOMMANDHANDLER_H

#include "FlagRegister.h"
#include "Z80Word.h"
#include "MemoryHandler.h"
#include "RegisterByteOperationHandler.h"

class MemoryCommandHandler {
    public:
        explicit MemoryCommandHandler(MemoryHandler& memoryHandler, FlagRegister& flagRegister);

        void decrement(Z80Word address);

        void increment(Z80Word address);

        void rotateLeftCircular(Z80Word address);

        void rotateRightCircular(Z80Word address);

        void rotateLeftThroughCarry(Z80Word address);

        void rotateRightThroughCarry(Z80Word address);

        void shiftLeftArithmetic(Z80Word address);

        void shiftRightArithmetic(Z80Word address);

        void shiftLeftLogical(Z80Word address);

        void shiftRightLogical(Z80Word address);

        void testBit(int bit, Z80Word address);

        void enableBit(int bit, Z80Word address);

        void clearBit(int bit, Z80Word address);

    private:
        FlagRegister& flagRegister;
        MemoryHandler& memory;
        RegisterByteOperationHandler registerHandler;

        void setByteValue(Z80Word address, Z80Byte data);

        Z80Byte getByteValue(Z80Word address);
};


#endif //Z80_CORE_MEMORYCOMMANDHANDLER_H
