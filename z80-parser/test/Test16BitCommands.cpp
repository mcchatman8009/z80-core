#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, testSimpleWordRegisters) { // NOLINT
    vector<string> regs = {"BC", "DE", "HL", "SP", "bc", "de", "hl", "sp"};

    for (auto& reg : regs) {

        performParse(reg, [](Z80Parser& parser) {
            parser.simpleWordRegister();
            ASSERT_TRUE(true);
        });
    }
}

TEST_F(Z80ParserTestFixture, testPushAndPopRegisters) { // NOLINT
    vector<string> regs = {"BC", "DE", "HL", "AF", "bc", "de", "hl", "af"};

    for (auto& reg : regs) {

        performParse(reg, [](Z80Parser& parser) {
            parser.pushAndPopRegister();
            ASSERT_TRUE(true);
        });
    }
}

TEST_F(Z80ParserTestFixture, loadWordWithImmediateWord) { // NOLINT
    performParse("LD HL, $FFFF", [](Z80Parser& parser) {
        parser.loadWordWithImmediateWord();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIXWithImmediateWord) { // NOLINT
    performParse("LD IX, $FFFF", [](Z80Parser& parser) {
        parser.loadIXWithImmediateWord();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIYWithImmediateWord) { // NOLINT
    performParse("LD IY, $FFFF", [](Z80Parser& parser) {
        parser.loadIYWithImmediateWord();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadHLWithNNPointer) { // NOLINT
    performParse("LD HL, ($FFF0)", [](Z80Parser& parser) {
        parser.loadWordRegisterWithNNPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIXWithNNPointer) { // NOLINT
    performParse("LD IX, ($FFF0)", [](Z80Parser& parser) {
        parser.loadIXWithNNPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIYWithNNPointer) { // NOLINT
    performParse("LD IY, ($FFF0)", [](Z80Parser& parser) {
        parser.loadIYWithNNPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadNNPointerWithHL) { // NOLINT
    performParse("LD ($DFFF), HL", [](Z80Parser& parser) {
        parser.loadNNPointerWithWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadNNPointerWithIX) { // NOLINT
    performParse("LD ($FF00), IX", [](Z80Parser& parser) {
        parser.loadNNPointerWithIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadNNPointerWithIY) { // NOLINT
    performParse("LD ($FF88), IY", [](Z80Parser& parser) {
        parser.loadNNPointerWithIY();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadSPWithHL) { // NOLINT
    performParse("LD SP, HL", [](Z80Parser& parser) {
        parser.loadSPWithHL();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadSPWithIX) { // NOLINT
    performParse("LD SP, IX", [](Z80Parser& parser) {
        parser.loadSPWithIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadSPWithIY) { // NOLINT
    performParse("LD SP, IY", [](Z80Parser& parser) {
        parser.loadSPWithIY();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, pushWordRegister) { // NOLINT
    performParse("PUSH AF", [](Z80Parser& parser) {
        parser.pushWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, pushIX) { // NOLINT
    performParse("PUSH IX", [](Z80Parser& parser) {
        parser.pushIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, pushIY) { // NOLINT
    performParse("PUSH IY", [](Z80Parser& parser) {
        parser.pushIY();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, popWordRegister) { // NOLINT
    performParse("POP DE", [](Z80Parser& parser) {
        parser.popWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, popIX) { // NOLINT
    performParse("POP IX", [](Z80Parser& parser) {
        parser.popIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, popIY) { // NOLINT
    performParse("pop IY", [](Z80Parser& parser) {
        parser.popIY();
        ASSERT_TRUE(true);
    });
}
