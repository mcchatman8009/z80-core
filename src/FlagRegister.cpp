#include "FlagRegister.h"

//
// Bit :  7 | 6 | 5 | 4 | 3 | 2   | 1 | 0
// Flag:  S | Z | X | H | X | P/V | N | C
//
constexpr auto CARRY_BIT = 0;
const auto NEGATIVE_BIT = 1;
const auto PARITY_BIT = 2;
const auto UNKNOWN_BIT3 = 3;
const auto HALF_CARRY_BIT = 4;
const auto UNKNOWN_BIT5 = 5;
const auto ZERO_BIT = 6;
const auto SIGN_BIT = 7;

void FlagRegister::setCarryBit(bool flag) {
    value = value.setBit(CARRY_BIT, flag);
}

bool FlagRegister::getCarryBit() {
    return value.isBitEnabled(CARRY_BIT);
}

void FlagRegister::setNegativeBit(bool flag) {
    value = value.setBit(NEGATIVE_BIT, flag);
}

bool FlagRegister::getNegativeBit() {
    return value.isBitEnabled(NEGATIVE_BIT);
}

void FlagRegister::setParityBit(bool flag) {
    value = value.setBit(PARITY_BIT, flag);
}

bool FlagRegister::getParityBit() {
    return value.isBitEnabled(PARITY_BIT);
}

void FlagRegister::setBit3(bool flag) {
    value = value.setBit(UNKNOWN_BIT3, flag);
}

void FlagRegister::setBit3FromValue(Z80Byte data) {
    auto flag = data.isBitEnabled(UNKNOWN_BIT3);
    value = value.setBit(UNKNOWN_BIT3, flag);
}

bool FlagRegister::getBit3() {
    return value.isBitEnabled(UNKNOWN_BIT3);
}

void FlagRegister::setHalfCarryBit(bool flag) {
    value = value.setBit(HALF_CARRY_BIT, flag);
}

bool FlagRegister::getHalfCarryBit() {
    return value.isBitEnabled(HALF_CARRY_BIT);
}

void FlagRegister::setBit5(bool flag) {
    value = value.setBit(UNKNOWN_BIT5, flag);
}

void FlagRegister::setBit5FromValue(Z80Byte data) {
    auto flag = data.isBitEnabled(UNKNOWN_BIT5);
    value = value.setBit(UNKNOWN_BIT5, flag);
}

bool FlagRegister::getBit5() {
    return value.isBitEnabled(UNKNOWN_BIT5);
}

void FlagRegister::setZeroBit(bool flag) {
    value = value.setBit(ZERO_BIT, flag);
}

bool FlagRegister::getZeroBit() {
    return value.isBitEnabled(ZERO_BIT);
}

void FlagRegister::setSignBit(bool flag) {
    value = value.setBit(SIGN_BIT, flag);
}

bool FlagRegister::getSignBit() {
    return value.isBitEnabled(SIGN_BIT);
}

void FlagRegister::complementCarryFlag() {
    if (getCarryBit()) {
        setCarryBit(false);
        setHalfCarryBit(true);
    } else {
        setCarryBit(true);
        setHalfCarryBit(false);
    }
}

