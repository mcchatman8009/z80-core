#include "WordRegister.h"

WordRegister::WordRegister(FlagRegister& flagRegister) : flagRegister{flagRegister}, registerHandler{flagRegister} {}

void WordRegister::initialize() {
    value = Z80Word{0};
    shadowValue = Z80Word{0};
}

void WordRegister::setRegisterName(std::string name) {
    this->registerName = name;
}

std::string WordRegister::getRegisterName() {
    return this->registerName;
}

void WordRegister::swapCurrentValueWithShadowValue() {
    auto temp = value;
    value = shadowValue;
    shadowValue = temp;
}

void WordRegister::incrementWord() {
    auto lowByte = Z80Byte{value.getLowByte().getValue() + 1};
    auto highByte = value.getHighByte();

    if (lowByte.getValue() == 0) {
        highByte = Z80Byte{value.getHighByte().getValue() + 1};
    }

    value = Z80Word(highByte, lowByte);
}

void WordRegister::incrementLowByte() {
    auto lowByte = incrementByte(value.getLowByte());
    auto highByte = value.getHighByte();
    value = Z80Word(highByte, lowByte);
}

void WordRegister::incrementHighByte() {
    auto lowByte = value.getLowByte();
    auto highByte = incrementByte(value.getHighByte());
    value = Z80Word(highByte, lowByte);
}

void WordRegister::decrementWord() {
    auto lowByte = Z80Byte{value.getLowByte().getValue() - 1};
    auto highByte = value.getHighByte();

    if (lowByte.getValue() == 255) {
        highByte = Z80Byte{value.getHighByte().getValue() - 1};
    }

    value = Z80Word(highByte, lowByte);
}

void WordRegister::decrementLowByte() {
    auto lowByte = decrementByte(value.getLowByte());
    auto highByte = value.getHighByte();
    value = Z80Word(highByte, lowByte);
}

void WordRegister::decrementHighByte() {
    auto lowByte = value.getLowByte();
    auto highByte = decrementByte(value.getHighByte());
    value = Z80Word(highByte, lowByte);
}

Z80Byte WordRegister::incrementByte(Z80Byte data) {
    auto result = Z80Byte(data.getValue() + 1);

    flagRegister.setHalfCarryBit((result.getValue() & 0x0F) == 0x00); // NOLINT
    flagRegister.setParityBit(result.getValue() == 0x80);
    flagRegister.setNegativeBit(false);
    flagRegister.setZeroBit(result.getValue() == 0);
    flagRegister.setSignBit(result.isBitEnabled(7)); // NOLINT

    return result;
}

Z80Byte WordRegister::decrementByte(Z80Byte data) {
    auto result = Z80Byte(data.getValue() - 1);

    flagRegister.setHalfCarryBit((result.getValue() & 0x0F) == 0x0F); // NOLINT
    flagRegister.setParityBit(result.getValue() == 0x7F);
    flagRegister.setNegativeBit(true);
    flagRegister.setZeroBit(result.getValue() == 0);
    flagRegister.setSignBit(result.isBitEnabled(7)); // NOLINT

    return result;
}

void WordRegister::addWord(Z80Word data) {
    int result = data.getValue() + value.getValue();
    int carryBits = data.getValue() ^value.getValue() ^result; // NOLINT

    flagRegister.setHalfCarryBit((carryBits & 0x1000) != 0); // NOLINT
    flagRegister.setCarryBit((carryBits & 0x10000) != 0); // NOLINT

    value = Z80Word{result};

    flagRegister.setNegativeBit(false);

    result = result >> 8; // NOLINT
    flagRegister.setBit3FromValue(Z80Byte{result});
    flagRegister.setBit5FromValue(Z80Byte{result});
}

void WordRegister::addWordWithCarry(Z80Word data) {
    auto result = data.getValue() + value.getValue() + (flagRegister.getCarryBit() ? 1 : 0);
    auto carryBits = data.getValue() ^value.getValue() ^result; // NOLINT

    flagRegister.setHalfCarryBit((carryBits & 0x1000) != 0); // NOLINT
    flagRegister.setCarryBit((carryBits & 0x10000) != 0); // NOLINT
    flagRegister.setParityBit((((carryBits << 1) ^ carryBits) & 0x10000) != 0); // NOLINT
    flagRegister.setZeroBit(result == 0);

    value = Z80Word{result};

    flagRegister.setSignBit((result & 0x8000) != 0); // NOLINT
    flagRegister.setNegativeBit(false);

    result = result >> 8; // NOLINT
    flagRegister.setBit3FromValue(Z80Byte{result});
    flagRegister.setBit5FromValue(Z80Byte{result});
}

void WordRegister::subtractWordWithCarry(Z80Word data) {
    auto result = value.getValue() - data.getValue() - (flagRegister.getCarryBit() ? 1 : 0);
    auto carryBits = value.getValue() ^data.getValue() ^result; // NOLINT

    flagRegister.setHalfCarryBit((carryBits & 0x1000) != 0); // NOLINT
    flagRegister.setCarryBit((carryBits & 0x10000) != 0); // NOLINT
    flagRegister.setParityBit((((carryBits << 1) ^ carryBits) & 0x10000) != 0); // NOLINT

    value = Z80Word{result};

    flagRegister.setZeroBit(value.getValue() == 0);
    flagRegister.setSignBit((result & 0x8000) != 0); // NOLINT
    flagRegister.setNegativeBit(true);

    result = result >> 8; // NOLINT
    flagRegister.setBit3FromValue(Z80Byte{result});
    flagRegister.setBit5FromValue(Z80Byte{result});
}

void WordRegister::setWordValue(Z80Word data) {
    value = data;
}

Z80Word WordRegister::getWordValue() {
    return value;
}

void WordRegister::setLowByte(Z80Byte lowByte) {
    value = Z80Word(value.getHighByte(), lowByte);
}

void WordRegister::setHighByte(Z80Byte highByte) {
    value = Z80Word(highByte, value.getLowByte());
}

void WordRegister::setByteValue(RegisterWordPart lowOrHigh, Z80Byte data) {
    switch (lowOrHigh) {
        case LOW:
            setLowByte(data);
            break;
        case HIGH:
            setHighByte(data);
            break;
    }
}

Z80Byte WordRegister::getLowByte() {
    return value.getLowByte();
}

Z80Byte WordRegister::getHighByte() {
    return value.getHighByte();
}

Z80Byte WordRegister::getByteValue(RegisterWordPart lowOrHigh) {
    switch (lowOrHigh) {
        case LOW:
            return value.getLowByte();
        case HIGH:
        default:
            return value.getHighByte();

    }
}

void WordRegister::rotateLeftCircular(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.rotateLeftCircular(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::rotateRightCircular(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.rotateRightCircular(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::rotateLeftThroughCarry(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.rotateLeftThroughCarry(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::rotateRightThroughCarry(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.rotateRightThroughCarry(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::shiftLeftArithmetic(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.shiftLeftArithmetic(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::shiftRightArithmetic(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.shiftRightArithmetic(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::shiftLeftLogical(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.shiftLeftLogical(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::shiftRightLogical(RegisterWordPart lowOrHigh) {
    auto result = registerHandler.shiftRightLogical(getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::testBit(int bit, RegisterWordPart lowOrHigh) {
    registerHandler.testBit(bit, getByteValue(lowOrHigh));
}

void WordRegister::enableBit(int bit, RegisterWordPart lowOrHigh) {
    auto result = registerHandler.enableBit(bit, getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}

void WordRegister::clearBit(int bit, RegisterWordPart lowOrHigh) {
    auto result = registerHandler.clearBit(bit, getByteValue(lowOrHigh));
    setByteValue(lowOrHigh, result);
}
