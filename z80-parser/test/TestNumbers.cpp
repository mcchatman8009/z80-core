#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;

TEST_F(Z80ParserTestFixture, testHexNumber) { // NOLINT
    performParse("$9000", [](Z80Parser& parser) {
        parser.number();
        ASSERT_TRUE(true);
    });

    performParse("ffh", [](Z80Parser& parser) {
        parser.number();
        ASSERT_TRUE(true);
    });

    performParse("00ffH", [](Z80Parser& parser) {
        parser.number();
        ASSERT_TRUE(true);
    });
    performParse("$00ff", [](Z80Parser& parser) {
        parser.number();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, testDecimalNumber) { // NOLINT
    performParse("909", [](Z80Parser& parser) {
        parser.number();
        ASSERT_TRUE(true);
    });
    performParse("80", [](Z80Parser& parser) {
        parser.number();
        ASSERT_TRUE(true);
    });
}
