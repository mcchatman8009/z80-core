#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, simpleByteRegister) { // NOLINT
    vector<string> registers = {"B", "C", "D", "E", "H", "L", "A", "b", "c", "d", "e", "h", "l", "a"};

    for_each(registers.begin(), registers.end(), [this](auto& reg) {
        performParse(reg, [](Z80Parser& parser) {
            parser.simpleByteRegister();
            ASSERT_TRUE(true);
        });
    });
}

TEST_F(Z80ParserTestFixture, loadByteRegisterWithByteRegister) { // NOLINT
    performParse("LD A, B", [](Z80Parser& parser) {
        parser.loadByteRegisterWithByteRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadByteRegisterWithImmediateByte) { // NOLINT
    performParse("LD A, 0Fh", [](Z80Parser& parser) {
        parser.loadByteRegisterWithImmediateByte();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadByteRegisterWithHLPointer) { // NOLINT
    performParse("LD A, (HL)", [](Z80Parser& parser) {
        parser.loadByteRegisterWithHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadByteRegisterWithIXOffset) { // NOLINT
    performParse("LD A, (IX + 1)", [](Z80Parser& parser) {
        parser.loadByteRegisterWithIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadByteRegisterWithIYOffset) { // NOLINT
    performParse("LD a, (IY + 0Fh)", [](Z80Parser& parser) {
        parser.loadByteRegisterWithIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadHLPointerWithRegister) { // NOLINT
    performParse("LD (hl), c", [](Z80Parser& parser) {
        parser.loadHLPointerWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIXOffsetWithRegister) { // NOLINT
    performParse("LD (ix + $08), c", [](Z80Parser& parser) {
        parser.loadIXOffsetWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIYOffsetWithRegister) { // NOLINT
    performParse("LD (iy + $08), d", [](Z80Parser& parser) {
        parser.loadIYOffsetWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadHLPointerWithImmediateByte) { // NOLINT
    performParse("LD (hl), 080h", [](Z80Parser& parser) {
        parser.loadHLPointerWithImmediateByte();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIXOffsetWithImmediateByte) { // NOLINT
    performParse("LD (ix + 1), 080h", [](Z80Parser& parser) {
        parser.loadIXOffsetWithImmediateByte();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIYOffsetWithImmediateByte) { // NOLINT
    performParse("LD (iy + 01H), 080h", [](Z80Parser& parser) {
        parser.loadIYOffsetWithImmediateByte();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadAWithBCPointer) { // NOLINT
    performParse("LD A,(BC)", [](Z80Parser& parser) {
        parser.loadAWithBCPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadAWithDEPointer) { // NOLINT
    performParse("LD A,(DE)", [](Z80Parser& parser) {
        parser.loadAWithDEPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadAWithNNPointer) { // NOLINT
    performParse("LD A,($ff00)", [](Z80Parser& parser) {
        parser.loadAWithNNPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadBCPointerWithA) { // NOLINT
    performParse("LD (BC), A", [](Z80Parser& parser) {
        parser.loadBCPointerWithA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadDEPointerWithA) { // NOLINT
    performParse("LD (DE), A", [](Z80Parser& parser) {
        parser.loadDEPointerWithA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadNNPointerWithA) { // NOLINT
    performParse("LD (00FFh), A", [](Z80Parser& parser) {
        parser.loadNNPointerWithA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadAWithI) { // NOLINT
    performParse("LD a, I", [](Z80Parser& parser) {
        parser.loadAWithI();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadAWithR) { // NOLINT
    performParse("LD a, r", [](Z80Parser& parser) {
        parser.loadAWithR();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIWithA) { // NOLINT
    performParse("LD i, a", [](Z80Parser& parser) {
        parser.loadIWithA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadRWithA) { // NOLINT
    performParse("LD r, a", [](Z80Parser& parser) {
        parser.loadRWithA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadRegisterWithIXHigh) { // NOLINT
    performParse("LD a, ixh", [](Z80Parser& parser) {
        parser.loadRegisterWithIXHigh();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadRegisterWithIXLow) { // NOLINT
    performParse("LD a, ixl", [](Z80Parser& parser) {
        parser.loadRegisterWithIXLow();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadRegisterWithIYHigh) { // NOLINT
    performParse("LD a, iyh", [](Z80Parser& parser) {
        parser.loadRegisterWithIYHigh();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadRegisterWithIYLow) { // NOLINT
    performParse("LD a, iyl", [](Z80Parser& parser) {
        parser.loadRegisterWithIYLow();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIXHighWithRegister) { // NOLINT
    performParse("LD ixh, a", [](Z80Parser& parser) {
        parser.loadIXHighWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIXLowWithRegister) { // NOLINT
    performParse("LD ixl, a", [](Z80Parser& parser) {
        parser.loadIXLowWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIYHighWithRegister) { // NOLINT
    performParse("LD ixh, a", [](Z80Parser& parser) {
        parser.loadIXHighWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, loadIYLowWithRegister) { // NOLINT
    performParse("LD iyl, a", [](Z80Parser& parser) {
        parser.loadIYLowWithRegister();
        ASSERT_TRUE(true);
    });
}
