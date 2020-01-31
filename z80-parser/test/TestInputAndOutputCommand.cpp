#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, inputDataIntoA) { // NOLINT
    performParse("IN A, ($10)", [](Z80Parser& parser) {
        parser.inputDataIntoA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, inputDataIntoRegister) { // NOLINT
    performParse("IN B, (C)", [](Z80Parser& parser) {
        parser.inputDataIntoRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, ini) { // NOLINT
    performParse("INI", [](Z80Parser& parser) {
        parser.ini();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, inir) { // NOLINT
    performParse("inir", [](Z80Parser& parser) {
        parser.inir();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, ind) { // NOLINT
    performParse("ind", [](Z80Parser& parser) {
        parser.ind();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, indr) { // NOLINT
    performParse("indr", [](Z80Parser& parser) {
        parser.indr();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, outputAIntoDataPointer) { // NOLINT
    performParse("OUT ($B4), A", [](Z80Parser& parser) {
        parser.outputAIntoDataPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, outputRegisterIntoCPointer) { // NOLINT
    performParse("OUT (C), B", [](Z80Parser& parser) {
        parser.outputRegisterIntoCPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, outi) { // NOLINT
    performParse("OUTI", [](Z80Parser& parser) {
        parser.outi();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, otir) { // NOLINT
    performParse("otir", [](Z80Parser& parser) {
        parser.otir();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, outd) { // NOLINT
    performParse("outd", [](Z80Parser& parser) {
        parser.outd();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, otdr) { // NOLINT
    performParse("otdr", [](Z80Parser& parser) {
        parser.otdr();
        ASSERT_TRUE(true);
    });
}
