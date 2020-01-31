#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, RES_COMPLETE) { // NOLINT
    string code = R"CODE(
        res n,a
        res n,b
        res n,c
        res n,d
        res n,e
        res n,h
        res n,l
        res n,(hl)
        res n,(ix+n)
        res n,(iy+n)
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, SET_COMPLETE) { // NOLINT
    string code = R"CODE(
        set n,a
        set n,b
        set n,c
        set n,d
        set n,e
        set n,h
        set n,l
        set n,(hl)
        set n,(ix+n)
        set n,(iy+n)
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, BIT_COMPLETE) { // NOLINT
    string code = R"CODE(
        bit n,a
        bit n,b
        bit n,c
        bit n,d
        bit n,e
        bit n,h
        bit n,l
        bit n,(hl)
        bit n,(ix+n)
        bit n,(iy+n)
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, testBitInRegister) { // NOLINT
    performParse("BIT 1, A", [](Z80Parser& parser) {
        parser.testBitInRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, testBitInHLPointer) { // NOLINT
    performParse("BIT 0, (hl)", [](Z80Parser& parser) {
        parser.testBitInHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, testBitInIXOffset) { // NOLINT
    performParse("BIT 0, (ix + 9)", [](Z80Parser& parser) {
        parser.testBitInIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, testBitInIYOffset) { // NOLINT
    performParse("BIT 0, (iy + 9)", [](Z80Parser& parser) {
        parser.testBitInIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, setBitInRegister) { // NOLINT
    performParse("SET 0, A", [](Z80Parser& parser) {
        parser.setBitInRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, setBitInHLPointer) { // NOLINT
    performParse("SET 0, (HL)", [](Z80Parser& parser) {
        parser.setBitInHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, setBitInIXOffset) { // NOLINT
    performParse("SET 0, (ix + 0)", [](Z80Parser& parser) {
        parser.setBitInIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, setBitInIYOffset) { // NOLINT
    performParse("SET 0, (iy + 0)", [](Z80Parser& parser) {
        parser.setBitInIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, resetBitInRegister) { // NOLINT
    performParse("RES 0, B", [](Z80Parser& parser) {
        parser.resetBitInRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, resetBitHLPointer) { // NOLINT
    performParse("RES 0, (hl)", [](Z80Parser& parser) {
        parser.resetBitHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, resetBitIXOffset) { // NOLINT
    performParse("RES 0, (ix + 10)", [](Z80Parser& parser) {
        parser.resetBitIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, resetBitIYOffset) { // NOLINT
    performParse("RES 0, (iy + 10)", [](Z80Parser& parser) {
        parser.resetBitIYOffset();
        ASSERT_TRUE(true);
    });
}
