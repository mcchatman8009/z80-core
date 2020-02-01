#ifndef Z80_PARSER_Z80PARSERTESTFIXTURE_H
#define Z80_PARSER_Z80PARSERTESTFIXTURE_H

#include <gtest/gtest.h>
#include <functional>
#include <string_view>
#include <Z80Parser.h>

class Z80ParserTestFixture : public ::testing::Test {

    protected:
        void SetUp() override;

        void performParse(std::string_view input, std::function<void(Z80Parser&)> parserHandler);
};


#endif //Z80_PARSER_Z80PARSERTESTFIXTURE_H
