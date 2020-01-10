#ifndef Z80_CORE_ACCUMULATORREGISTER_H
#define Z80_CORE_ACCUMULATORREGISTER_H

#include "ByteRegister.h"
#include "FlagRegister.h"
#include "RegisterByteOperationHandler.h"

class AccumulatorRegister : public ByteRegister {
    public:
        explicit AccumulatorRegister(FlagRegister& flagRegister);

        void incrementByte();

        void decrementByte();

        void addByte(Z80Byte data);

        void addByteWithCarry(Z80Byte data);

        void subtractByte(Z80Byte data);

        void subtractByteWithCarry(Z80Byte data);

        void andByte(Z80Byte data);

        void orByte(Z80Byte data);

        void xorByte(Z80Byte data);

        void compareByte(Z80Byte data);

        void complementByte();

        /**
         * RRA
         * @param data
         */
        void rotateRightThroughCarry();

        /**
         * RLA
         * @param data
         */
        void rotateLeftThroughCarry();


        /**
         * RLCA
         * @param data
         */
        void rotateLeftCircular();

        /**
         * RRCA
         * @param data
         */
        void rotateRightCircular();


        void shiftLeftArithmetic();

        void shiftRightArithmetic();

        void shiftLeftLogical();

        void shiftRightLogical();

        void testBit(int bit);

        void enableBit(int bit);

        void clearBit(int bit);

        void decimalAdjust();

    private:
        RegisterByteOperationHandler registerHandler;
        FlagRegister& flagRegister;
};

#endif //Z80_CORE_ACCUMULATORREGISTER_H
