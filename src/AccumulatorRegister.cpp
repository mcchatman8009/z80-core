#include "AccumulatorRegister.h"
#include "DAA.h"
#include <EVEN_PARITY.h>

AccumulatorRegister::AccumulatorRegister(FlagRegister& flagRegister) : flagRegister{flagRegister},
                                                                       registerHandler{flagRegister} {}

void AccumulatorRegister::incrementByte() {
    value = registerHandler.increment(value);
}

void AccumulatorRegister::decrementByte() {
    value = registerHandler.decrement(value);
}

void AccumulatorRegister::addByte(Z80Byte data) {
    value = registerHandler.add(value, data);
}

void AccumulatorRegister::addByteWithCarry(Z80Byte data) {
    auto cin = (flagRegister.getCarryBit() ? 1 : 0);
    value = registerHandler.add(value, data, cin);
}

void AccumulatorRegister::subtractByte(Z80Byte data) {
    value = registerHandler.subtract(value, data);
}

void AccumulatorRegister::subtractByteWithCarry(Z80Byte data) {
    auto cin = (flagRegister.getCarryBit() ? 1 : 0);
    value = registerHandler.subtract(value, data, cin);
}

void AccumulatorRegister::andByte(Z80Byte data) {
    value = registerHandler.logicalAnd(value, data);
}

void AccumulatorRegister::orByte(Z80Byte data) {
    value = registerHandler.logicalOr(value, data);
}

void AccumulatorRegister::xorByte(Z80Byte data) {
    value = registerHandler.logicalXOR(value, data);
}

void AccumulatorRegister::compareByte(Z80Byte data) {
    registerHandler.subtract(value, data);
}

void AccumulatorRegister::complementByte() {
    value = registerHandler.complement(value);
}

// RRA
void AccumulatorRegister::rotateRightThroughCarry() {
    value = registerHandler.rotateRightThroughCarryForAccumulator(value);
}

// RLA
void AccumulatorRegister::rotateLeftThroughCarry() {
    value = registerHandler.rotateLeftThroughCarryForAccumulator(value);
}

// RLCA
void AccumulatorRegister::rotateLeftCircular() {
    value = registerHandler.rotateLeftCircularForAccumulator(value);
}

// RRCA
void AccumulatorRegister::rotateRightCircular() {
    value = registerHandler.rotateRightCircularForAccumulator(value);
}

void AccumulatorRegister::decimalAdjust() {
    auto accumulatorValue = value.getValue();

    if (flagRegister.getNegativeBit()) {
        accumulatorValue = accumulatorValue | 0x100; // NOLINT
    }

    if (flagRegister.getCarryBit()) {
        accumulatorValue = accumulatorValue | 0x200; // NOLINT
    }

    if (flagRegister.getHalfCarryBit()) {
        accumulatorValue = accumulatorValue | 0x400; // NOLINT
    }

    auto tableResult = DAA_TABLE[accumulatorValue];

    flagRegister.setCarryBit(tableResult > 0xFF);

    value = Z80Byte{tableResult};
    flagRegister.setParityBit(EVEN_PARITY_TABLE[tableResult]);

    flagRegister.setZeroBit(value.getValue() == 0);
    flagRegister.setSignBit(value.isBitEnabled(7));
}

void AccumulatorRegister::shiftLeftArithmetic() {
    value = registerHandler.shiftLeftArithmetic(value);
}

void AccumulatorRegister::shiftRightArithmetic() {
    value = registerHandler.shiftRightArithmetic(value);
}

void AccumulatorRegister::shiftLeftLogical() {
    value = registerHandler.shiftLeftLogical(value);
}

void AccumulatorRegister::shiftRightLogical() {
    value = registerHandler.shiftRightLogical(value);
}

void AccumulatorRegister::testBit(int bit) {
    registerHandler.testBit(bit, value);
}

void AccumulatorRegister::enableBit(int bit) {
    value = registerHandler.enableBit(bit, value);
}

void AccumulatorRegister::clearBit(int bit) {
    value = registerHandler.clearBit(bit, value);
}
