#ifndef Z80_CORE_Z80BYTE_H
#define Z80_CORE_Z80BYTE_H

#include <bitset>

class Z80Byte {
    public:
        using byte = unsigned char;

        explicit Z80Byte(std::bitset<8> byteValue);

        explicit Z80Byte(byte byteValue);

        explicit Z80Byte(int byteValue);

        explicit Z80Byte(unsigned long byteValue);

        byte getValue() const; // NOLINT

        Z80Byte setBit(int bit, bool enableBit) const; // NOLINT

        bool isBitEnabled(int bit) const; // NOLINT

    private:
        std::bitset<8> value;
};

#endif //Z80_CORE_Z80BYTE_H
