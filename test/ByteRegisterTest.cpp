#include "ByteRegister.h"
#include <gtest/gtest.h>

TEST(ByteRegisterTest, Initailize) { // NOLINT
    auto reg = ByteRegister();
    reg.initialize();
    ASSERT_EQ(reg.getByteValue().getValue(), 0);

    reg.setByteValue(Z80Byte{0xFF});
    reg.initialize();
    ASSERT_EQ(reg.getByteValue().getValue(), 0);
}

TEST(ByteRegisterTest, SwapCurrentValueWithShadowValue) { // NOLINT
    auto reg = ByteRegister();
    reg.initialize();
    reg.setByteValue(Z80Byte{0xFF});

    ASSERT_EQ(reg.getByteValue().getValue(), 0xFF);

    //
    // Perform the swap with the Shadow register.
    //
    reg.swapCurrentValueWithShadowValue();
    // The results should now be zero.
    ASSERT_EQ(reg.getByteValue().getValue(), 0x00);

    reg.setByteValue(Z80Byte{0x1});
    ASSERT_EQ(reg.getByteValue().getValue(), 0x01);

    // Restore the original byte val;ue
    reg.swapCurrentValueWithShadowValue();
    ASSERT_EQ(reg.getByteValue().getValue(), 0xFF);
}

