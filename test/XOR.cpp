#include "Z80CpuTestFixture.h"

//@formatter:off

//
// 8-Bit XOR
//
TEST_F(Z80CpuTestFixture, XOR_IX_OFFSET) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");
    validateSingleInstruction("LD (IX+1), 0xFF");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, (IX+1)");
}
TEST_F(Z80CpuTestFixture, XOR_IY_OFFSET) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");
    validateSingleInstruction("LD (IY+1), 0xFF");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, (IY+1)");
}
TEST_F(Z80CpuTestFixture, XOR_IYL) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");
    validateSingleInstruction("LD IY, 0xFF");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, IYL");
}
TEST_F(Z80CpuTestFixture, XOR_IYH) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");
    validateSingleInstruction("LD IY, 0xFF00");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, IYH");
}
TEST_F(Z80CpuTestFixture, XOR_IXL) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");
    validateSingleInstruction("LD IX, 0xFF");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, IXL");
}
TEST_F(Z80CpuTestFixture, XOR_IXH) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");
    validateSingleInstruction("LD IX, 0xFF00");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, IXH");
}
TEST_F(Z80CpuTestFixture, XOR_A) { // NOLINT

    validateSingleInstruction("LD A, 0xFF");

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.PF(true);
    expectedResults.SF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    validateSingleInstruction("XOR A, A");
}
TEST_F(Z80CpuTestFixture, XOR_B) { // NOLINT
    validateSingleInstruction("LD A, 0x70");
    validateSingleInstruction("LD B, 0xF0");

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    expectedResults.SF(true);
    validateSingleInstruction("XOR A, B");
}
TEST_F(Z80CpuTestFixture, XOR_C) { // NOLINT
    validateSingleInstruction("LD A, 0x80");
    validateSingleInstruction("LD C, 0xF0");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, C");
}
TEST_F(Z80CpuTestFixture, XOR_D) { // NOLINT
    validateSingleInstruction("LD A, 0x80");
    validateSingleInstruction("LD d, 0xF0");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, D");
}
TEST_F(Z80CpuTestFixture, XOR_E) { // NOLINT

    validateSingleInstruction("LD A, 0x80");
    validateSingleInstruction("LD e, 0xF0");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, e");
}
TEST_F(Z80CpuTestFixture, XOR_H) { // NOLINT

    validateSingleInstruction("LD A, 0x80");
    validateSingleInstruction("LD h, 0xF0");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, h");
}
TEST_F(Z80CpuTestFixture, XOR_L) { // NOLINT

    validateSingleInstruction("LD A, 0x80");
    validateSingleInstruction("LD l, 0xF0");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, l");
}
TEST_F(Z80CpuTestFixture, XOR_HL_PTR) { // NOLINT

    validateSingleInstruction("LD A, 0x80");
    validateSingleInstruction("LD (hl), 0xF0");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, (hl)");
}
TEST_F(Z80CpuTestFixture, XOR_N) { // NOLINT

    validateSingleInstruction("LD A, 0x80");

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateSingleInstruction("XOR A, 0xF0");
}


