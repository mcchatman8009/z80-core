#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, rotateLeftCircularA) { // NOLINT
    performParse("rlca ", [](Z80Parser& parser) {
        parser.rotateLeftCircularA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftThroughCarryA) { // NOLINT
    performParse("rla ", [](Z80Parser& parser) {
        parser.rotateLeftThroughCarryA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightCircularA) { // NOLINT
    performParse("rrca ", [](Z80Parser& parser) {
        parser.rotateRightCircularA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightThroughtCarryA) { // NOLINT
    performParse("rra ", [](Z80Parser& parser) {
        parser.rotateRightThroughtCarryA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftCircularRegister) { // NOLINT
    performParse("rlc d ", [](Z80Parser& parser) {
        parser.rotateLeftCircularRegister();
        ASSERT_TRUE(true);
    });
}


TEST_F(Z80ParserTestFixture, rotateLeftCircularHLPointer) { // NOLINT
    performParse("rlc (hl)", [](Z80Parser& parser) {
        parser.rotateLeftCircularHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftCircularIXOffset) { // NOLINT
    performParse("rlc (ix+1)", [](Z80Parser& parser) {
        parser.rotateLeftCircularIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftCircularIYOffset) { // NOLINT
    performParse("rlc (iy + 0)", [](Z80Parser& parser) {
        parser.rotateLeftCircularIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftThroughCarryRegister) { // NOLINT
    performParse("rl b", [](Z80Parser& parser) {
        parser.rotateLeftThroughCarryRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftThroughCarryHLPointer) { // NOLINT
    performParse("rl (hl)", [](Z80Parser& parser) {
        parser.rotateLeftThroughCarryHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftThroughCarryIXOffset) { // NOLINT
    performParse("rl (ix + 1)", [](Z80Parser& parser) {
        parser.rotateLeftThroughCarryIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateLeftThroughCarryIYOffset) { // NOLINT
    performParse("rl (iy + 1)", [](Z80Parser& parser) {
        parser.rotateLeftThroughCarryIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightCircularRegister) { // NOLINT
    performParse("rrc c", [](Z80Parser& parser) {
        parser.rotateRightCircularRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightCircularHLPointer) { // NOLINT
    performParse("rrc (hl)", [](Z80Parser& parser) {
        parser.rotateRightCircularHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightCircularIXOffset) { // NOLINT
    performParse("rrc (ix  + 1)", [](Z80Parser& parser) {
        parser.rotateRightCircularIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightCircularIYOffset) { // NOLINT
    performParse("rrc (iy + $f) ", [](Z80Parser& parser) {
        parser.rotateRightCircularIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightThroughCarryRegister) { // NOLINT
    performParse("rr l", [](Z80Parser& parser) {
        parser.rotateRightThroughCarryRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightThroughCarryHLPointer) { // NOLINT
    performParse("rr (hl)", [](Z80Parser& parser) {
        parser.rotateRightThroughCarryHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightThroughCarryIXOffset) { // NOLINT
    performParse("rr (ix + 1)", [](Z80Parser& parser) {
        parser.rotateRightThroughCarryIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateRightThroughCarryIYOffset) { // NOLINT
    performParse("rr (iy + $ff00)", [](Z80Parser& parser) {
        parser.rotateRightThroughCarryIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, shiftLeftArithmetic) { // NOLINT
    performParse("sla a", [](Z80Parser& parser) {
        parser.shiftLeftArithmetic();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, shiftLeftLogical) { // NOLINT
    performParse("sll c", [](Z80Parser& parser) {
        parser.shiftLeftLogical();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, shiftRightArithmetic) { // NOLINT
    performParse("sra c", [](Z80Parser& parser) {
        parser.shiftRightArithmetic();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, shiftRightLogical) { // NOLINT
    performParse("srl b", [](Z80Parser& parser) {
        parser.shiftRightLogical();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateDigitLeft) { // NOLINT
    performParse("rld", [](Z80Parser& parser) {
        parser.rotateDigitLeft();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, rotateDigitRight) { // NOLINT
    performParse("rrd", [](Z80Parser& parser) {
        parser.rotateDigitRight();
        ASSERT_TRUE(true);
    });
}
