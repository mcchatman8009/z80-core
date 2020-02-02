#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, decimalAdjustA) { // NOLINT
    performParse("DAA", [](Z80Parser& parser) {
        parser.decimalAdjustA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, complementA) { // NOLINT
    performParse("cpl", [](Z80Parser& parser) {
        parser.complementA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, negateA) { // NOLINT
    performParse("NEG", [](Z80Parser& parser) {
        parser.negateA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, completementCarryFlag) { // NOLINT
    performParse("CCF", [](Z80Parser& parser) {
        parser.complementCarryFlag();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, setCarryFlag) { // NOLINT
    performParse("SCF", [](Z80Parser& parser) {
        parser.setCarryFlag();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, nop) { // NOLINT
    performParse("nop", [](Z80Parser& parser) {
        parser.nop();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, halt) { // NOLINT
    performParse("halt", [](Z80Parser& parser) {
        parser.halt();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, disableInterrupts) { // NOLINT
    performParse("di", [](Z80Parser& parser) {
        parser.disableInterrupts();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, enableInterrupts) { // NOLINT
    performParse("ei", [](Z80Parser& parser) {
        parser.enableInterrupts();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, setInterruptMode) { // NOLINT
    performParse("im 0", [](Z80Parser& parser) {
        parser.setInterruptMode();
        ASSERT_TRUE(true);
    });
}
