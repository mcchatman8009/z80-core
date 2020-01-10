#include <gtest/gtest.h>
#include <Z80Byte.h>

TEST(Z80ByteTest, TestContructors) { // NOLINT

    ASSERT_EQ(Z80Byte(0xFF).getValue(), 0xFF);
    ASSERT_EQ(Z80Byte(static_cast<unsigned long>(0x100)).getValue(), 0x00);

    Z80Byte::byte data = 0xF;
    Z80Byte byte0(data);
    ASSERT_EQ(byte0.getValue(), 0x0F);
}


TEST(Z80ByteTest, TestBitManipulation) { // NOLINT
    ASSERT_EQ(Z80Byte(0x80).setBit(7, false).getValue(), 0);
    ASSERT_EQ(Z80Byte(0x18).setBit(3, false).getValue(), 0x10);
    ASSERT_EQ(Z80Byte(0x18).setBit(0, true).getValue(), 0x19);
}

TEST(Z80ByteTest, TestBitFlags) { // NOLINT
    ASSERT_EQ(Z80Byte(0x80).isBitEnabled(7), true);
    ASSERT_EQ(Z80Byte(0x80).isBitEnabled(6), false);
    ASSERT_EQ(Z80Byte(0x81).isBitEnabled(0), true);
}

