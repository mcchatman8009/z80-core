#ifndef SMS_REGISTERBYTEOPERATIONHANDLER_H
#define SMS_REGISTERBYTEOPERATIONHANDLER_H

#include "FlagRegister.h"
#include "ByteOperationHandler.h"

class RegisterByteOperationHandler {
    public:
        explicit RegisterByteOperationHandler(FlagRegister& flagRegister);

        Z80Byte increment(Z80Byte data);

        Z80Byte decrement(Z80Byte data);

        Z80Byte add(Z80Byte lhs, Z80Byte rhs, int carryIn = 0);

        Z80Byte subtract(Z80Byte lhs, Z80Byte rhs, int carryIn = 0);

        Z80Byte logicalAnd(Z80Byte lhs, Z80Byte rhs);

        Z80Byte logicalOr(Z80Byte lhs, Z80Byte rhs);

        Z80Byte logicalXOR(Z80Byte lhs, Z80Byte rhs);

        Z80Byte complement(Z80Byte data);

        Z80Byte rotateLeftCircularForAccumulator(Z80Byte data);

        Z80Byte rotateRightCircularForAccumulator(Z80Byte data);

        Z80Byte rotateLeftThroughCarryForAccumulator(Z80Byte data);

        Z80Byte rotateRightThroughCarryForAccumulator(Z80Byte data);

        Z80Byte rotateLeftCircular(Z80Byte data);

        Z80Byte rotateRightCircular(Z80Byte data);

        Z80Byte rotateLeftThroughCarry(Z80Byte data);

        Z80Byte rotateRightThroughCarry(Z80Byte data);

        Z80Byte shiftLeftArithmetic(Z80Byte data);

        Z80Byte shiftRightArithmetic(Z80Byte data);

        Z80Byte shiftLeftLogical(Z80Byte data);

        Z80Byte shiftRightLogical(Z80Byte data);

        Z80Byte enableBit(int bit, Z80Byte data);

        Z80Byte clearBit(int bit, Z80Byte data);

        void testBit(int bit, Z80Byte data);

    private:
        ByteOperationHandler byteOperationHandler;
        FlagRegister& flagRegister;

};


#endif //SMS_REGISTERBYTEOPERATIONHANDLER_H
