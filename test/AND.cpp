#include "Z80CpuTestFixture.h"

//@formatter:off

//
// 8-Bit AND
//
TEST_F(Z80CpuTestFixture, AND_IXH) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    cpuSet(WordCpuRegisterSymbol::IX, 0xFF00);

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("AND A, IXH");
}
TEST_F(Z80CpuTestFixture, AND_IXL) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    cpuSet(WordCpuRegisterSymbol::IX, 0x00FF);

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("AND A, IXL");
}
TEST_F(Z80CpuTestFixture, AND_IX_OFFSET) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xF);
    validateSingleInstructionAndTestPCOffset("LD (ix+2), 0xF");

    expectedResults.A(0xF);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, (ix+2)");
}
TEST_F(Z80CpuTestFixture, AND_IY_OFFSET) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xF);
    validateSingleInstructionAndTestPCOffset("LD (iy+2), 0xF");

    expectedResults.A(0xF);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, (iy+2)");
}
TEST_F(Z80CpuTestFixture, AND_A) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");

    expectedResults.A(0x81);
    expectedResults.ZF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("AND A, A");
}
TEST_F(Z80CpuTestFixture, AND_B) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD B, 0x00");

    expectedResults.A(0x00);
    expectedResults.ZF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, B");
}
TEST_F(Z80CpuTestFixture, AND_C) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD C, 0x00");

    expectedResults.A(0x00);
    expectedResults.ZF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, C");
}
TEST_F(Z80CpuTestFixture, AND_D) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD D, 0x01");

    expectedResults.A(0x01);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, d");

}
TEST_F(Z80CpuTestFixture, AND_E) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD e, 0x01");

    expectedResults.A(0x01);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, e");
}
TEST_F(Z80CpuTestFixture, AND_H) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD h, 0x01");

    expectedResults.A(0x01);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, h");
}
TEST_F(Z80CpuTestFixture, AND_L) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD l, 0x01");

    expectedResults.A(0x01);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, l");
}
TEST_F(Z80CpuTestFixture, AND_HL_PTR) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");
    validateSingleInstructionAndTestPCOffset("LD (hl), 0x01");

    expectedResults.A(0x01);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, (hl)");
}
TEST_F(Z80CpuTestFixture, AND_N) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x81");

    expectedResults.A(0x01);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("AND A, 0x1");
}
