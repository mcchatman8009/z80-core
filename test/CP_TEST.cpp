#include "Z80CpuTestFixture.h"

//@formatter:off
//
// 8-Bit Compare
//
TEST_F(Z80CpuTestFixture, CP_IX_OFFSET) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD (ix+1), 0xFF");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, (ix+1)");
}
TEST_F(Z80CpuTestFixture, CP_IY_OFFSET) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD (iy+1), 0xFF");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, (iy+1)");
}
TEST_F(Z80CpuTestFixture, CP_IYL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD IY, 0xFF");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, IYL");
}
TEST_F(Z80CpuTestFixture, CP_IYH) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD IY, 0xFF00");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, IYH");
}
TEST_F(Z80CpuTestFixture, CP_IXL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD IX, 0xFF");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, IXL");
}
TEST_F(Z80CpuTestFixture, CP_IXH) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD IX, 0xFF00");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, IXH");
}
TEST_F(Z80CpuTestFixture, CP_A) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.NF(true);
    expectedResults.ZF(true);
    validateSingleInstructionAndTestPCOffset("CP A, A");
}
TEST_F(Z80CpuTestFixture, CP_B) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0x00");
    validateSingleInstructionAndTestPCOffset("LD B, 0xFF");

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("CP A, B");
}
TEST_F(Z80CpuTestFixture, CP_C) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    validateSingleInstructionAndTestPCOffset("LD C, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    expectedResults.NF(true);
    validateSingleInstructionAndTestPCOffset("CP A, C");
}
TEST_F(Z80CpuTestFixture, CP_D) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    validateSingleInstructionAndTestPCOffset("LD D, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    expectedResults.NF(true);
    validateSingleInstructionAndTestPCOffset("CP A, D");
}
TEST_F(Z80CpuTestFixture, CP_E) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    validateSingleInstructionAndTestPCOffset("LD E, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    expectedResults.NF(true);
    validateSingleInstructionAndTestPCOffset("CP A, E");
}
TEST_F(Z80CpuTestFixture, CP_H) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    validateSingleInstructionAndTestPCOffset("LD H, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    expectedResults.NF(true);
    validateSingleInstructionAndTestPCOffset("CP A, H");
}
TEST_F(Z80CpuTestFixture, CP_L) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    validateSingleInstructionAndTestPCOffset("LD L, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    validateSingleInstructionAndTestPCOffset("CP A, L");
}
TEST_F(Z80CpuTestFixture, CP_HL_PTR) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    validateSingleInstructionAndTestPCOffset("LD (HL), 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    validateSingleInstructionAndTestPCOffset("CP A, (HL)");
}
TEST_F(Z80CpuTestFixture, CP_N) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD A, 0xFF");
    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    validateSingleInstructionAndTestPCOffset("CP A, 0xFF");
}
