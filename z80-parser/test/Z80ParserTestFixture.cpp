#include "Z80ParserTestFixture.h"
#include <iostream>
#include <antlr4-runtime.h>
#include <antlr4-common.h>
#include <Z80Lexer.h>

using namespace std;
using namespace antlr4;

void Z80ParserTestFixture::SetUp() {
}

void Z80ParserTestFixture::performParse(std::string input, std::function<void(Z80Parser&)> parserHandler) {
    stringstream stringStream;
    stringStream << input;

    ANTLRInputStream stream(stringStream);

    Z80Lexer lexer(&stream);
    CommonTokenStream tokens(&lexer);

    auto parser = Z80Parser(&tokens);

    Ref<BailErrorStrategy> bailErrorStrategy(new BailErrorStrategy());
    parser.setErrorHandler(bailErrorStrategy);

    parserHandler(parser);
}
