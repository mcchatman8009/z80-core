#include "ByteRegister.h"

void ByteRegister::initialize() {
    value = Z80Byte{0};
    shadowValue = Z80Byte{0};
}

void ByteRegister::swapCurrentValueWithShadowValue() {
    auto temp = value;
    value = shadowValue;
    shadowValue = temp;
}

void ByteRegister::setByteValue(Z80Byte byteValue) {
    value = byteValue;
}

Z80Byte ByteRegister::getByteValue() const {
    return value;
}

void ByteRegister::setShadowByteValue(Z80Byte byteValue) {
    shadowValue = byteValue;
}
