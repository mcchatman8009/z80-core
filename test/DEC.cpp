#include "Z80CpuTestFixture.h"
#include "Z80CpuTest.h"

using namespace std;

//@formatter:off
//
// 8-Bit decrement
//
TEST_F(Z80CpuTestFixture, DEC_IY_OFFSET) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::IY, 0xFF00);
    validateSingleInstructionAndTestPCOffset("ld (iy+1), 0x00");
    expectedResults.MEM(0xFF01, 0xFF);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec (iy+1)");
}
TEST_F(Z80CpuTestFixture, DEC_IX_OFFSET) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::IX, 0xFF00);
    validateSingleInstructionAndTestPCOffset("ld (ix+1), 0x00");
    expectedResults.MEM(0xFF01, 0xFF);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec (ix+1)");
}
TEST_F(Z80CpuTestFixture, DEC_IYH) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld IY, 0x0000");
    expectedResults.IY(0xFF00);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec iyh");
}
TEST_F(Z80CpuTestFixture, DEC_IYL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld IY, 0x0000");
    expectedResults.IY(0xFF);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec iyl");
}
TEST_F(Z80CpuTestFixture, DEC_IXH) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld IX, 0x0000");
    expectedResults.IX(0xFF00);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec ixh");
}
TEST_F(Z80CpuTestFixture, DEC_IXL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld IX, 0x0000");
    expectedResults.IX(0xFF);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec ixl");
}
TEST_F(Z80CpuTestFixture, DEC_A) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld a, 0x0");
    expectedResults.A(0xFF);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec a");
}
TEST_F(Z80CpuTestFixture, DEC_B) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld b, 0x10");
    expectedResults.B(0x0F);
    validateSingleInstructionAndTestPCOffset("dec b");
}
TEST_F(Z80CpuTestFixture, DEC_C) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld c, 0x0");
    expectedResults.C(0xFF);
    expectedResults.NF(true);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(true);
    validateSingleInstructionAndTestPCOffset("dec c");
}
TEST_F(Z80CpuTestFixture, DEC_D) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld d, 0x10");
    expectedResults.D(0x0F);
    validateSingleInstructionAndTestPCOffset("dec d");
}
TEST_F(Z80CpuTestFixture, DEC_E) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld e, 0x10");
    expectedResults.E(0x0F);
    validateSingleInstructionAndTestPCOffset("dec e");
}
TEST_F(Z80CpuTestFixture, DEC_H) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld h, 0x10");
    expectedResults.H(0x0F);
    validateSingleInstructionAndTestPCOffset("dec h");
}
TEST_F(Z80CpuTestFixture, DEC_L) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld l, 0x10");
    expectedResults.L(0x0F);
    validateSingleInstructionAndTestPCOffset("dec l");
}
TEST_F(Z80CpuTestFixture, DEC_HL_PTR) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld hl, 0xff00");
    validateSingleInstructionAndTestPCOffset("ld (hl), 0x10");
    expectedResults.MEM(0xff00, 0x0F);
    validateSingleInstructionAndTestPCOffset("dec (hl)");
}

//
// 16-Bit decrement  register
//
#define CPU_DEC_BC 0x0B
#define CPU_DEC_DE 0x1B
#define CPU_DEC_HL 0x2B
#define CPU_DEC_SP 0x3B

TEST_F(Z80CpuTest, DEC_BC) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(BC, 0x0100);
    memSet(pc, CPU_DEC_BC);

    expectedResults.BC(0x00FF);
}
TEST_F(Z80CpuTest, DEC_DE) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(DE, 0x0100);
    memSet(pc, CPU_DEC_DE);

    expectedResults.DE(0x00FF);
}
TEST_F(Z80CpuTest, DEC_HL) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(HL, 0x0100);
    memSet(pc, CPU_DEC_HL);

    expectedResults.HL(0x00FF);
}
TEST_F(Z80CpuTest, DEC_SP) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(SP, 0x0100);
    memSet(pc, CPU_DEC_SP);

    expectedResults.SP(0x00FF);
}