#include "FlagRegister.h"
#include <gtest/gtest.h>

TEST(FlagRegisterTest, ComplementCarryFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    flagRegister.setCarryBit(true);
    flagRegister.complementCarryFlag();

    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), true);
}

TEST(FlagRegisterTest, SetCarryFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setCarryBit(true);

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000001);
    ASSERT_EQ(flagRegister.getCarryBit(), true);

    flagRegister.setByteValue(Z80Byte{0x81});

    flagRegister.setCarryBit(false);

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b10000000);
}

TEST(FlagRegisterTest, SetNegativeFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setNegativeBit(true);
    flagRegister.setCarryBit(true);

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000011);
    ASSERT_EQ(flagRegister.getNegativeBit(), true);

    flagRegister.setNegativeBit(false);
    flagRegister.setCarryBit(false);

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);
}

TEST(FlagRegisterTest, SetParityFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setParityBit(true);
    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000100);
    ASSERT_EQ(flagRegister.getParityBit(), true);

    ASSERT_EQ(flagRegister.getParityBit(), true);
}

TEST(FlagRegisterTest, SetBit3Flag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setBit3(true);
    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00001000);
    ASSERT_EQ(flagRegister.getBit3(), true);

    flagRegister.setBit3FromValue(Z80Byte{0x01});

    ASSERT_EQ(flagRegister.getBit3(), false);
}

TEST(FlagRegisterTest, SetHalfCarryFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setHalfCarryBit(true);
    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00010000);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), true);
}

TEST(FlagRegisterTest, SetBit5Flag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setBit5(true);
    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00100000);
    ASSERT_EQ(flagRegister.getBit5(), true);

    flagRegister.setBit5FromValue(Z80Byte{0x2F});

    ASSERT_EQ(flagRegister.getBit5(), true);
}

TEST(FlagRegisterTest, SetZeroFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setZeroBit(true);
    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b01000000);
    ASSERT_EQ(flagRegister.getZeroBit(), true);
}

TEST(FlagRegisterTest, SetSignFlag) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b00000000);

    flagRegister.setSignBit(true);
    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0b10000000);
    ASSERT_EQ(flagRegister.getSignBit(), true);
}


