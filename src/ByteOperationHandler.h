#ifndef Z80_CORE_BYTEOPERATIONHANDLER_H
#define Z80_CORE_BYTEOPERATIONHANDLER_H

#include "Z80Byte.h"

class ByteResult {
    public:
        explicit ByteResult(Z80Byte byteValue, const bool carryBit, const bool halfCarry, const bool signBitEnabled,
                            const bool isZero, const bool parity) : byteValue{byteValue}, carryBitEnabled{carryBit},
                                                                    halfCarryBitEnabled{halfCarry},
                                                                    signBitEnabled{signBitEnabled}, isZero{isZero},
                                                                    parityBitEnabled{parity} {}

        const Z80Byte byteValue;
        const bool carryBitEnabled;
        const bool halfCarryBitEnabled;
        const bool signBitEnabled;
        const bool isZero;
        const bool parityBitEnabled;
};

class ByteOperationHandler {
    public:
        ByteResult increment(Z80Byte data);

        ByteResult decrement(Z80Byte data);

        ByteResult add(Z80Byte lhs, Z80Byte rhs, int carryIn = 0);

        ByteResult subtract(Z80Byte lhs, Z80Byte rhs, int carryIn = 0);

        ByteResult logicalAnd(Z80Byte lhs, Z80Byte rhs);

        ByteResult logicalOr(Z80Byte lhs, Z80Byte rhs);

        ByteResult logicalXOR(Z80Byte lhs, Z80Byte rhs);

        ByteResult complement(Z80Byte data);

        ByteResult rotateLeftCircular(Z80Byte data);

        ByteResult rotateRightCircular(Z80Byte data);

        ByteResult rotateLeftThroughCarry(Z80Byte data, bool carryIn);

        ByteResult rotateRightThroughCarry(Z80Byte data, bool carryIn);

        ByteResult shiftLeftArithmetic(Z80Byte data);

        ByteResult shiftRightArithmetic(Z80Byte data);

        ByteResult shiftLeftLogical(Z80Byte data);

        ByteResult shiftRightLogical(Z80Byte data);

        ByteResult enableBit(int bit, Z80Byte data);

        ByteResult clearBit(int bit, Z80Byte data);

        ByteResult testBit(int bit, Z80Byte data);

        bool parityFromValue(Z80Byte data);

        bool zeroFromValue(Z80Byte data);

        bool signFromValue(Z80Byte data);
};

#endif //Z80_CORE_BYTEOPERATIONHANDLER_H
