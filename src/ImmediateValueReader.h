#ifndef Z80_CORE_IMMEDIATEVALUEREADER_H
#define Z80_CORE_IMMEDIATEVALUEREADER_H

#include "Z80Compiler.h"
#include <antlr4-runtime.h>
#include <Z80Parser.h>
#include <Z80BaseListener.h>
#include <regex>

static std::regex RE_HEX_PREFIX("(0x)|(\\$)"); // NOLINT
static std::regex RE_HEX_SUFFIX("(H)|(h)"); // NOLINT

class ImmediateValueReader : public Z80BaseListener {
    public:
        int readNumber(Z80Parser::NumberContext* numberContext) {
            antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, numberContext);
            return value;
        }

        int readNumber(Z80Parser::NumberPointerContext* numberPointerContext) {
            antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, numberPointerContext);
            return value;
        }

    private:
        void exitHexNumber(Z80Parser::HexNumberContext* context) override {
            if (context->HEX_DIGITS_1() != nullptr) {
                auto text = context->HEX_DIGITS_1()->getText();
                text = regex_replace(text, RE_HEX_PREFIX, "");
                value = stoi(text, nullptr, 16);
            } else if (context->HEX_DIGITS_2() != nullptr) {
                auto text = context->HEX_DIGITS_2()->getText();
                text = regex_replace(text, RE_HEX_SUFFIX, "");
                value = stoi(text, nullptr, 16);
            } else if (context->HEX_DIGITS_3() != nullptr) {
                auto text = context->HEX_DIGITS_3()->getText();
                text = regex_replace(text, RE_HEX_PREFIX, "");
                value = stoi(text, nullptr, 16);
            }
        }

        void exitDecimalNumber(Z80Parser::DecimalNumberContext* context) override {
            auto text = context->DECIMAL()->getText();
            value = stoi(text, nullptr, 10);
        }

        void exitCharNumber(Z80Parser::CharNumberContext* context) override {
            auto text = context->CHAR()->getText();
            value = static_cast<int>(text[0]);
        }

    private:
        int value{0x0};
};

#endif //Z80_CORE_IMMEDIATEVALUEREADER_H
