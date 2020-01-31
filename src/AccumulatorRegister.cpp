#include "AccumulatorRegister.h"
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
    //
    // Based on the following information:
    // http://www.worldofspectrum.org/faq/reference/z80reference.htm#DAA
    //
    bool carry = false;
    int correctionFactor = 0;
    int aValue = value.getValue();

    int lsbNibble = value.getValue() & 0x0F; // NOLINT

    if (value.getValue() > 0x99 || flagRegister.getCarryBit()) {
        correctionFactor |= 0x60; // NOLINT
        carry = true;
    }

    if (lsbNibble > 9 || flagRegister.getHalfCarryBit()) {
        correctionFactor |= 0x06; // NOLINT
    }

    if (flagRegister.getNegativeBit()) {
        value = Z80Byte(value.getValue() - correctionFactor);
    } else {
        value = Z80Byte(value.getValue() + correctionFactor);
    }

    flagRegister.setHalfCarryBit((aValue ^ value.getValue()) & 0x10); // NOLINT
    flagRegister.setCarryBit(carry);
    flagRegister.setSignBit(value.isBitEnabled(7));
    flagRegister.setZeroBit(value.getValue() == 0);
    flagRegister.setParityBit(EVEN_PARITY_TABLE[value.getValue()]);
    flagRegister.setBit3FromValue(value);
    flagRegister.setBit5FromValue(value);
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
