#include "Z80CpuTestFixture.h"
#include "Z80CpuTest.h"

using namespace std;

//@formatter:off
//
// 8-Bit increment
//
TEST_F(Z80CpuTestFixture, INC_A) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld a, 0xff");
    expectedResults.A(0x00);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc a");
}
TEST_F(Z80CpuTestFixture, INC_B) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld b, 0xfe");
    expectedResults.B(0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc b");
}
TEST_F(Z80CpuTestFixture, INC_C) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld c, 0xfe");
    expectedResults.C(0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc c");
}
TEST_F(Z80CpuTestFixture, INC_D) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld d, 0xfe");
    expectedResults.D(0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc d");
}
TEST_F(Z80CpuTestFixture, INC_E) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld e, 0xfe");
    expectedResults.E(0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc e");
}
TEST_F(Z80CpuTestFixture, INC_H) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld h, 0xfe");
    expectedResults.H(0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc h");
}
TEST_F(Z80CpuTestFixture, INC_L) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld l, 0xfe");
    expectedResults.L(0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc l");
}
TEST_F(Z80CpuTestFixture, INC_HL_PTR) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld hl, 0xFF00");
    validateSingleInstructionAndTestPCOffset("ld (hl), 0xfe");
    expectedResults.MEM(0xFF00, 0xFF);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    validateSingleInstructionAndTestPCOffset("inc (hl)");
}

//
// 16-Bit increment register
//
#define CPU_INC_BC 0x03
#define CPU_INC_DE 0x13
#define CPU_INC_HL 0x23
#define CPU_INC_SP 0x33

TEST_F(Z80CpuTest, INC_BC) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(BC, 0x00FF);
    memSet(pc, CPU_INC_BC);

    expectedResults.BC(0x0100);
}
TEST_F(Z80CpuTest, INC_DE) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(DE, 0x00FF);
    memSet(pc, CPU_INC_DE);

    expectedResults.DE(0x0100);
}
TEST_F(Z80CpuTest, INC_HL) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(HL, 0x00FF);
    memSet(pc, CPU_INC_HL);

    expectedResults.HL(0x0100);
}
TEST_F(Z80CpuTest, INC_SP) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(SP, 0x00FF);
    memSet(pc, CPU_INC_SP);

    expectedResults.SP(0x0100);
}

