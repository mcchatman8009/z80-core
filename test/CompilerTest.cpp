#include <gtest/gtest.h>
#include "Z80Compiler.h"
#include <string>

using namespace std;

TEST(CompilierTest, LD_R8_R8) { // NOLINT
    Z80Compiler compiler;
    string code = "LD A, B";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x78};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_R8_N) { // NOLINT
    Z80Compiler compiler;
    string code = "LD A, 0x99";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x3E, 0x99};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_R8_HL_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "LD A, (HL)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x7E};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_R8_IX_OFFSET) { // NOLINT
    Z80Compiler compiler;
    string code = "LD A, (ix+0x99)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xDD, 0x7E, 0x99};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_R8_IY_OFFSET) { // NOLINT
    Z80Compiler compiler;
    string code = "LD A, (iy+0x99)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xFD, 0x7E, 0x99};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_HL_PTR_R8) { // NOLINT
    Z80Compiler compiler;
    string code = "LD (HL), A";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x77};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IX_OFFSET_R8) { // NOLINT
    Z80Compiler compiler;
    string code = "LD (IX+0x1), A";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xdd, 0x77, 0x1};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IY_OFFSET_R8) { // NOLINT
    Z80Compiler compiler;
    string code = "LD (IY+0x1), A";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xfd, 0x77, 0x1};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_HL_PTR_N) { // NOLINT
    Z80Compiler compiler;
    string code = "LD (HL), $04";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x36, 0x04};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IX_OFFSET_N) { // NOLINT
    Z80Compiler compiler;
    string code = "LD (ix+01h), $04";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xdd, 0x36, 0x01, 0x04};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IY_OFFSET_N) { // NOLINT
    Z80Compiler compiler;
    string code = "LD (IY+01H), $04";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xfd, 0x36, 0x01, 0x04};

    ASSERT_TRUE(bytes == expect);
}


TEST(CompilierTest, LD_A_BC_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, (bc)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xA};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_DE_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "ld A, (de)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x1A};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_NN_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "ld A, ($FF00)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x3A, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_BC_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (bc), a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x02};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_DE_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (de), a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x12};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_NN_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (0xFF01), a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x32, 0x01, 0xff};

    ASSERT_TRUE(bytes == expect);
}


TEST(CompilierTest, LD_I_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld I, A";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xED, 0x47};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_R_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld r, a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xED, 0x4f};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_I) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, i";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xED, 0x57};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_a_r) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, r";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xED, 0x5f};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IXH_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld ixh, a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xDD, 0x67};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IXL_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld ixl, a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xDD, 0x6F};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IYH_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld iyh, a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xFD, 0x67};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IYL_A) { // NOLINT
    Z80Compiler compiler;
    string code = "ld iyl, a";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xFD, 0x6F};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_IXH) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, ixh";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xDD, 0x7C};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_IXL) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, IXL";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xDD, 0x7D};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_IYH) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, iyh";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xFD, 0x7C};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_A_IYL) { // NOLINT
    Z80Compiler compiler;
    string code = "ld a, IYL";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xFD, 0x7D};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_R16_NN) { // NOLINT
    Z80Compiler compiler;
    string code = "ld HL, 0xFF00";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x21, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IX_NN) { // NOLINT
    Z80Compiler compiler;
    string code = "ld IX, 0xFF00";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xdd, 0x21, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IY_NN) { // NOLINT
    Z80Compiler compiler;
    string code = "ld IY, 0xFF00";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xfd, 0x21, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_HL_NN_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "ld HL, (0xFF00)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x2a, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IX_NN_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "ld IX, (0xFF00)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xdd, 0x2a, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_IY_NN_PTR) { // NOLINT
    Z80Compiler compiler;
    string code = "ld IY, (0xFF00)";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xfd, 0x2a, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_NN_PTR_HL) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (0xFF00), hl";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0x22, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_NN_PTR_IX) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (0xFF00), ix";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xdd, 0x22, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_NN_PTR_IY) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (0xFF00), iy";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xfd, 0x22, 0x00, 0xFF};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_NN_PTR_DE) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (0xFF00), de";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xed, 0x53, 0x00, 0xff};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_NN_PTR_BC) { // NOLINT
    Z80Compiler compiler;
    string code = "ld (0xFF00), bc";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xed, 0x43, 0x00, 0xff};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_SP_HL) { // NOLINT
    Z80Compiler compiler;
    string code = "ld sp, hl";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xf9};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_SP_IX) { // NOLINT
    Z80Compiler compiler;
    string code = "ld sp, ix";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xdd, 0xf9};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, LD_SP_IY) { // NOLINT
    Z80Compiler compiler;
    string code = "ld sp, iy";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xfd, 0xf9};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, PUSH_AF) { // NOLINT
    Z80Compiler compiler;
    string code = "push af";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xf5};

    ASSERT_TRUE(bytes == expect);
}

TEST(CompilierTest, POP_AF) { // NOLINT
    Z80Compiler compiler;
    string code = "pop af";

    auto bytes = compiler.compile(code);
    vector<unsigned char> expect = {0xf1};

    ASSERT_TRUE(bytes == expect);
}
