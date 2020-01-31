#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, exchangeDEWithHL) { // NOLINT
    performParse("EX DE, HL", [](Z80Parser& parser) {
        parser.exchangeDEWithHL();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, exchangeAFWithShadowAF) { // NOLINT
    performParse("EX AF, AF'", [](Z80Parser& parser) {
        parser.exchangeAFWithShadowAF();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, exchangeMultipleWordRegisters) { // NOLINT
    performParse("exx", [](Z80Parser& parser) {
        parser.exchangeMultipleWordRegisters();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, exchangeSPPointerWithHL) { // NOLINT
    performParse("ex (SP), HL", [](Z80Parser& parser) {
        parser.exchangeSPPointerWithHL();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, exchangeSPPointerWithIX) { // NOLINT
    performParse("ex (SP), IX", [](Z80Parser& parser) {
        parser.exchangeSPPointerWithIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, exchangeSPPointerWithIY) { // NOLINT
    performParse("ex (SP), IY", [](Z80Parser& parser) {
        parser.exchangeSPPointerWithIY();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadHLPointerIntoDEWhileDecrementBCAndIncrementHL) { // NOLINT
    performParse("LDI", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadDEPointerWithHLPointerWhileDecrementBCAndIncrementHLRepeat) { // NOLINT
    performParse("LDIR", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadDEPointerWithHLPointerWhileDecrementBCAndHL) { // NOLINT
    performParse("ldd", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadDEPointerWithHLPointerWhileDecrementBCAndHLRepeat) { // NOLINT
    performParse("lddr", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, compareAToHLPointerWhileIncrementHLAndDecrementBC) { // NOLINT
    performParse("cpi", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, compareAToHLPointerWhileIncrementHLAndDecrementBCRepeat) { // NOLINT
    performParse("cpir", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, compareAToHLPointerWhileDecrementHLAndBC) { // NOLINT
    performParse("cpd", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, compareAToHLPointerWhileDecrementHLAndBCRepeat) { // NOLINT
    performParse("cpdr", [](Z80Parser& parser) {
        parser.exchagneAndBlockTransfrerCommand();
        ASSERT_TRUE(true);
    });
}
