#include <gtest/gtest.h>
#include "AccumulatorRegister.h"

TEST(AccumulatorRegisterTest, IncrementByte) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xA8});
    accumulatorRegister.incrementByte();

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0xA9);

}

TEST(AccumulatorRegisterTest, DecrementByte) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xA8});

    accumulatorRegister.decrementByte();

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0xA7);
}

TEST(AccumulatorRegisterTest, AddBytes) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xE3});

    accumulatorRegister.addByte(Z80Byte{0xA0});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b10000011);
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(flagRegister.getSignBit(), true);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
}

TEST(AccumulatorRegisterTest, AddBytesWithCarryBit) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xE3});
    flagRegister.setCarryBit(true);

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), true);

    accumulatorRegister.addByteWithCarry(Z80Byte{0xA0});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b10000100);
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(flagRegister.getSignBit(), true);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
}

TEST(AccumulatorRegisterTest, SubtractBytes) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xE3});

    accumulatorRegister.subtractByte(Z80Byte{0xA0});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x43);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);
    ASSERT_EQ(flagRegister.getNegativeBit(), true);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
}

TEST(AccumulatorRegisterTest, SubtractBytesUsingCarryBit) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xE3});

    accumulatorRegister.subtractByteWithCarry(Z80Byte{0xA0});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x43);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);
    ASSERT_EQ(flagRegister.getNegativeBit(), true);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
}

TEST(AccumulatorRegisterTest, AndByteValues) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0x3A});

    accumulatorRegister.andByte(Z80Byte{0x7C});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x38);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
}

TEST(AccumulatorRegisterTest, OrByteValues) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0xE3});

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);

    accumulatorRegister.orByte(Z80Byte{0xA8});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0xEB);
    ASSERT_EQ(flagRegister.getSignBit(), true);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
}

TEST(AccumulatorRegisterTest, XORByteValues) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    const auto dest = 0x3A;
    const auto src = 0x7C;
    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{dest});

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);

    accumulatorRegister.xorByte(Z80Byte{src});

    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x46);
    ASSERT_EQ(flagRegister.getSignBit(), false);
    ASSERT_EQ(flagRegister.getParityBit(), false);
}

TEST(AccumulatorRegisterTest, ComplementByte) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{0x3A});

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);

    accumulatorRegister.complementByte();

    // After
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), true);
    ASSERT_EQ(flagRegister.getNegativeBit(), true);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b11000101);
}

TEST(AccumulatorRegisterTest, ComplementByteAgain) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();
    const auto dest = 0xFF;

    AccumulatorRegister accumulatorRegister(flagRegister);
    accumulatorRegister.setByteValue(Z80Byte{dest});

    accumulatorRegister.complementByte();

    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x00);
}

TEST(AccumulatorRegisterTest, CompareValues) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);

    accumulatorRegister.setByteValue(Z80Byte{0xE3});

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0xE3);

    accumulatorRegister.compareByte(Z80Byte{0xA0});

    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0xE3);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getNegativeBit(), true);
}

TEST(AccumulatorRegisterTest, CompareValuesAgain) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);


    accumulatorRegister.setByteValue(Z80Byte{0x0});

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), false);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getSignBit(), false);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x00);

    accumulatorRegister.compareByte(Z80Byte{0xFE});


    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0x00);
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(flagRegister.getHalfCarryBit(), true);
    ASSERT_EQ(flagRegister.getZeroBit(), false);
    ASSERT_EQ(flagRegister.getNegativeBit(), true);
}

TEST(AccumulatorRegisterTest, CompareAndCheckTheZeroBit) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);

    const auto dest = 10;
    const auto src = 10;

    accumulatorRegister.setByteValue(Z80Byte{dest});
    accumulatorRegister.compareByte(Z80Byte{src});


    ASSERT_EQ(flagRegister.getZeroBit(), true);
}

TEST(AccumulatorRegisterTest, CompareAndCheckTheHalfCarryBit) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();

    AccumulatorRegister accumulatorRegister(flagRegister);

    const auto dest = 1;
    const auto src = 10;

    accumulatorRegister.setByteValue(Z80Byte{dest});
    accumulatorRegister.compareByte(Z80Byte{src});


    ASSERT_EQ(flagRegister.getHalfCarryBit(), true);
}

TEST(AccumulatorRegisterTest, RotateRightThroughCarry) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();


    AccumulatorRegister accumulatorRegister(flagRegister);

    accumulatorRegister.setByteValue(Z80Byte{0b01111010});
    flagRegister.setCarryBit(true);

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b01111010);

    accumulatorRegister.rotateRightThroughCarry();

    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b10111101);
    ASSERT_EQ(flagRegister.getCarryBit(), false);

}

TEST(AccumulatorRegisterTest, RotateLeftThroughCarry) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();


    AccumulatorRegister accumulatorRegister(flagRegister);

    accumulatorRegister.setByteValue(Z80Byte{0b01111010});
    flagRegister.setCarryBit(true);

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b01111010);

    accumulatorRegister.rotateLeftThroughCarry();

    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b11110101);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
}

TEST(AccumulatorRegisterTest, RotateRightCircular) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();


    AccumulatorRegister accumulatorRegister(flagRegister);

    accumulatorRegister.setByteValue(Z80Byte{0b01111010});
    flagRegister.setCarryBit(true);

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b01111010);

    accumulatorRegister.rotateRightCircular();

    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b00111101);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
}

TEST(AccumulatorRegisterTest, RotateLeftCircular) { // NOLINT
    FlagRegister flagRegister;
    flagRegister.initialize();


    AccumulatorRegister accumulatorRegister(flagRegister);

    accumulatorRegister.setByteValue(Z80Byte{0b01111010});
    flagRegister.setCarryBit(true);

    // Before
    ASSERT_EQ(flagRegister.getCarryBit(), true);
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b01111010);

    accumulatorRegister.rotateLeftCircular();

    // After
    ASSERT_EQ(accumulatorRegister.getByteValue().getValue(), 0b11110100);
    ASSERT_EQ(flagRegister.getCarryBit(), false);
}

