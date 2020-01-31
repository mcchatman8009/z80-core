#include <gtest/gtest.h>
#include "Z80InstructionEncoder.h"
#include <vector>

using namespace std;

class InstructionEncoderFixture : public ::testing::Test {

    protected:
        void SetUp() override {}

        Z80InstructionEncoder encoder;

        void AssertVectors(vector<unsigned char> expected, vector<unsigned char> actual) { // NOLINT
            ASSERT_TRUE(expected == actual);
        }

};

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST_F(InstructionEncoderFixture, ENCODE_IX_BIT_INSTRCTIONS) { // NOLINT
    auto res = encoder.encodeInstructionWithImmediateBytes("bit 0, (ix+n)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x46, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("bit 1, (ix+n)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x4e, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("BIT 2, (ix+n)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x56, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("BIT 3, (ix+n)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x5e, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("BIT 4, (IX+N)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x66, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("BIT 5, (IX+N)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x6e, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("BIT 6, (IX+N)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x76, 0x01}, res);

    res = encoder.encodeInstructionWithImmediateBytes("BIT 7, (IX+N)", {0x1});
    AssertVectors({0xdd, 0xcb, 0x7e, 0x01}, res);
}
