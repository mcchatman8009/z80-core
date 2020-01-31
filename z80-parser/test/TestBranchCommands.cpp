#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, jumpToAbsoluteAddress) { // NOLINT
    performParse("JP $0444", [](Z80Parser& parser) {
        parser.jumpToAbsoluteAddress();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpToAbsoluteAddressGivenCondition) { // NOLINT
    performParse("JP Z $0444", [](Z80Parser& parser) {
        parser.jumpToAbsoluteAddressGivenCondition();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpToRelativeAddress) { // NOLINT
    performParse("JR $0444", [](Z80Parser& parser) {
        parser.jumpToRelativeAddress();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpToRelativeAddressGivenCondition) { // NOLINT
    performParse("JR NZ $0444", [](Z80Parser& parser) {
        parser.jumpToRelativeAddressGivenCondition();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpToHL) { // NOLINT
    performParse("JP (HL)", [](Z80Parser& parser) {
        parser.jumpToHL();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpToIX) { // NOLINT
    performParse("JP (IX)", [](Z80Parser& parser) {
        parser.jumpToIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpToIY) { // NOLINT
    performParse("JP (IY)", [](Z80Parser& parser) {
        parser.jumpToIY();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, jumpRelativeAndDecrement) { // NOLINT
    performParse("DJNZ $8000", [](Z80Parser& parser) {
        parser.jumpRelativeAndDecrement();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, callSubroutine) { // NOLINT
    performParse("CALL $8000", [](Z80Parser& parser) {
        parser.callSubroutine();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, callSubroutineWithCondition) { // NOLINT
    performParse("CALL NZ $8000", [](Z80Parser& parser) {
        parser.callSubroutineWithCondition();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, returnFromSubroutine) { // NOLINT
    performParse("RET", [](Z80Parser& parser) {
        parser.returnFromSubroutine();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, returnFromSubroutineGivenCondition) { // NOLINT
    performParse("RET C", [](Z80Parser& parser) {
        parser.returnFromSubroutineGivenCondition();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, returnAndEnableInterrupt) { // NOLINT
    performParse("RETI", [](Z80Parser& parser) {
        parser.returnAndEnableInterrupt();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, returnFromNonMaskableInterrupt) { // NOLINT
    performParse("RETN", [](Z80Parser& parser) {
        parser.returnFromNonMaskableInterrupt();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, restartCommand) { // NOLINT
    performParse("RST $00", [](Z80Parser& parser) {
        parser.restartCommand();
        ASSERT_TRUE(true);
    });
}
