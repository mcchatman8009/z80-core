#include "RegisterByteOperationHandler.h"

RegisterByteOperationHandler::RegisterByteOperationHandler(FlagRegister& flagRegister) : flagRegister{flagRegister} {}

Z80Byte RegisterByteOperationHandler::increment(Z80Byte data) {
    auto result = byteOperationHandler.increment(data);

    flagRegister.setNegativeBit(false);
    flagRegister.setHalfCarryBit(result.halfCarryBitEnabled); // NOLINT
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::decrement(Z80Byte data) {
    auto result = byteOperationHandler.decrement(data);

    flagRegister.setNegativeBit(true);
    flagRegister.setHalfCarryBit(result.halfCarryBitEnabled); // NOLINT
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::add(Z80Byte lhs, Z80Byte rhs, int carryIn) {
    auto result = byteOperationHandler.add(lhs, rhs, carryIn);

    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setHalfCarryBit(result.halfCarryBitEnabled); // NOLINT
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT

    flagRegister.setBit3FromValue(result.byteValue);
    flagRegister.setBit5FromValue(result.byteValue);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::subtract(Z80Byte lhs, Z80Byte rhs, int carryIn) {
    auto result = byteOperationHandler.subtract(lhs, rhs, carryIn);

    flagRegister.setNegativeBit(true);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setHalfCarryBit(result.halfCarryBitEnabled); // NOLINT
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT

    flagRegister.setBit3FromValue(result.byteValue);
    flagRegister.setBit5FromValue(result.byteValue);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::logicalAnd(Z80Byte lhs, Z80Byte rhs) {
    auto result = byteOperationHandler.logicalAnd(lhs, rhs);

    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT
    flagRegister.setHalfCarryBit(true);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(false);
    flagRegister.setBit3FromValue(result.byteValue);
    flagRegister.setBit5FromValue(result.byteValue);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::logicalOr(Z80Byte lhs, Z80Byte rhs) {
    auto result = byteOperationHandler.logicalOr(lhs, rhs);

    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT
    flagRegister.setBit3FromValue(result.byteValue);
    flagRegister.setBit5FromValue(result.byteValue);
    flagRegister.setCarryBit(false);
    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::logicalXOR(Z80Byte lhs, Z80Byte rhs) {
    auto result = byteOperationHandler.logicalXOR(lhs, rhs);

    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setSignBit(result.signBitEnabled); // NOLINT
    flagRegister.setBit3FromValue(result.byteValue);
    flagRegister.setBit5FromValue(result.byteValue);
    flagRegister.setNegativeBit(false);
    flagRegister.setHalfCarryBit(false);
    flagRegister.setCarryBit(false);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::complement(Z80Byte data) {
    auto result = byteOperationHandler.complement(data);

    flagRegister.setNegativeBit(true);
    flagRegister.setHalfCarryBit(true);
    flagRegister.setBit3FromValue(result.byteValue);
    flagRegister.setBit5FromValue(result.byteValue);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::rotateLeftCircular(Z80Byte data) {
    auto result = byteOperationHandler.rotateLeftCircular(data);

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::rotateRightCircular(Z80Byte data) {
    auto result = byteOperationHandler.rotateRightCircular(data);

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::rotateLeftThroughCarry(Z80Byte data) {
    auto result = byteOperationHandler.rotateLeftThroughCarry(data, flagRegister.getCarryBit());

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::rotateRightThroughCarry(Z80Byte data) {
    auto result = byteOperationHandler.rotateRightThroughCarry(data, flagRegister.getCarryBit());

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::shiftLeftArithmetic(Z80Byte data) {
    auto result = byteOperationHandler.shiftLeftArithmetic(data);

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::shiftRightArithmetic(Z80Byte data) {
    auto result = byteOperationHandler.shiftRightArithmetic(data);

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::shiftLeftLogical(Z80Byte data) {
    auto result = byteOperationHandler.shiftLeftLogical(data);

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::shiftRightLogical(Z80Byte data) {
    auto result = byteOperationHandler.shiftRightLogical(data);

    flagRegister.setHalfCarryBit(false);
    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setSignBit(result.signBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::enableBit(int bit, Z80Byte data) {
    auto result = byteOperationHandler.enableBit(bit, data);
    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::clearBit(int bit, Z80Byte data) {
    auto result = byteOperationHandler.clearBit(bit, data);
    return result.byteValue;
}

void RegisterByteOperationHandler::testBit(int bit, Z80Byte data) {
    auto result = byteOperationHandler.testBit(bit, data);

    flagRegister.setHalfCarryBit(result.halfCarryBitEnabled);
    flagRegister.setZeroBit(result.isZero);
    flagRegister.setParityBit(result.parityBitEnabled);
    flagRegister.setNegativeBit(false);

    if (!result.isZero) {
        switch (bit) {
            case 3:
                flagRegister.setBit3(true);
                break;
            case 5:
                flagRegister.setBit5(true);
                break;
            case 7:
                flagRegister.setSignBit(true);
                break;
            default:
                break;
        }

    }
}

Z80Byte RegisterByteOperationHandler::rotateLeftCircularForAccumulator(Z80Byte data) {
    auto result = byteOperationHandler.rotateLeftCircular(data);

    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setNegativeBit(false);
    flagRegister.setHalfCarryBit(false);

    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::rotateRightCircularForAccumulator(Z80Byte data) {
    auto result = byteOperationHandler.rotateRightCircular(data);

    flagRegister.setCarryBit(result.carryBitEnabled);
    flagRegister.setNegativeBit(false);
    flagRegister.setHalfCarryBit(false);

    return result.byteValue;

}

Z80Byte RegisterByteOperationHandler::rotateLeftThroughCarryForAccumulator(Z80Byte data) {
    auto result = byteOperationHandler.rotateLeftThroughCarry(data, flagRegister.getCarryBit());

    flagRegister.setCarryBit(result.carryBitEnabled); // NOLINT
    flagRegister.setNegativeBit(false);
    flagRegister.setHalfCarryBit(false);
    return result.byteValue;
}

Z80Byte RegisterByteOperationHandler::rotateRightThroughCarryForAccumulator(Z80Byte data) {
    auto result = byteOperationHandler.rotateRightThroughCarry(data, flagRegister.getCarryBit());

    flagRegister.setCarryBit(result.carryBitEnabled); // NOLINT
    flagRegister.setNegativeBit(false);
    flagRegister.setHalfCarryBit(false);
    return result.byteValue;
}
