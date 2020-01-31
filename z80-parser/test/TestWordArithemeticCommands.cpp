#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, addHLAndWordRegister) { // NOLINT
    performParse("add hl, BC", [](Z80Parser& parser) {
        parser.addHLAndWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addWithCarryHLAndWordRegister) { // NOLINT
    performParse("adc hl, de", [](Z80Parser& parser) {
        parser.addWithCarryHLAndWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, subtractWithCarryWordRegisterFromHL) { // NOLINT
    performParse("sbc hl, de", [](Z80Parser& parser) {
        parser.subtractWithCarryWordRegisterFromHL();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addIXWithRegister) { // NOLINT
    performParse("add ix, de", [](Z80Parser& parser) {
        parser.addIXWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addIYWithRegister) { // NOLINT
    performParse("add iy, bc", [](Z80Parser& parser) {
        parser.addIYWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementWordRegister) { // NOLINT
    performParse("inc hl", [](Z80Parser& parser) {
        parser.incrementWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementIX) { // NOLINT
    performParse("inc ix", [](Z80Parser& parser) {
        parser.incrementIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementIY) { // NOLINT
    performParse("inc iy", [](Z80Parser& parser) {
        parser.incrementIY();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementWordRegister) { // NOLINT
    performParse("dec sp", [](Z80Parser& parser) {
        parser.decrementWordRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementIX) { // NOLINT
    performParse("dec ix", [](Z80Parser& parser) {
        parser.decrementIX();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementIY) { // NOLINT
    performParse("dec iy", [](Z80Parser& parser) {
        parser.decrementIY();
        ASSERT_TRUE(true);
    });
}
