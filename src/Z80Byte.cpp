#include "Z80Byte.h"

Z80Byte::Z80Byte(std::bitset<8> byteValue) {
    value = byteValue;
}

Z80Byte::Z80Byte(Z80Byte::byte byteValue) {
    value = byteValue;
}

Z80Byte::Z80Byte(int byteValue) {
    value = byteValue;
}

Z80Byte::Z80Byte(unsigned long byteValue) {
    value = byteValue;
}

Z80Byte::byte Z80Byte::getValue() const {
    return static_cast<byte>(value.to_ullong());
}

Z80Byte Z80Byte::setBit(int bit, bool enableBit) const {
    Z80Byte newByte{value};
    newByte.value.set(bit, enableBit);

    return newByte;
}

bool Z80Byte::isBitEnabled(int bit) const {
    return value.test(bit);
}
