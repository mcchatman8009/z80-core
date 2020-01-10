#include <gtest/gtest.h>
#include <Z80Word.h>

TEST(Z80WordTest, TestContstructors) { // NOLINT
    ASSERT_EQ(Z80Word(0xFF00).getValue(), 0xFF00);
    ASSERT_EQ(Z80Word(static_cast<unsigned long>(0xFFFF)).getValue(), 0xFFFF);
    ASSERT_EQ(Z80Word(static_cast<unsigned long>(0x10000)).getValue(), 0x0);

    Z80Word word0((Z80Word::word) 0x1000);
    ASSERT_EQ(word0.getValue(), 0x1000);
}

TEST(Z80WordTest, TestBytes) { // NOLINT
    Z80Word word0((Z80Word::word) 0x1000);

    ASSERT_EQ(word0.getLowByte().getValue(), 0x00);
    ASSERT_EQ(word0.getHighByte().getValue(), 0x10);

    Z80Word word1((Z80Word::word) 0x18FF);

    ASSERT_EQ(word1.getLowByte().getValue(), 0xFF);
    ASSERT_EQ(word1.getHighByte().getValue(), 0x18);

    Z80Word reversedBytes = word1.reverseBytes();

    ASSERT_EQ(reversedBytes.getLowByte().getValue(), 0x18);
    ASSERT_EQ(reversedBytes.getHighByte().getValue(), 0xFF);
}

