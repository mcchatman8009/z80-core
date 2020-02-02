#include "Z80CpuTestFixture.h"

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
TEST_F(Z80CpuTestFixture, INC_BC) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::BC, 0x00FF);

    expectedResults.BC(0x0100);
    validateSingleInstructionAndTestPCOffset("INC BC");
}
TEST_F(Z80CpuTestFixture, INC_DE) { // NOLINT

    cpuSet(WordCpuRegisterSymbol::DE, 0x00FF);

    expectedResults.DE(0x0100);
    validateSingleInstructionAndTestPCOffset("INC DE");
}
TEST_F(Z80CpuTestFixture, INC_HL) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0x00FF);

    expectedResults.HL(0x0100);
    validateSingleInstructionAndTestPCOffset("INC HL");
}
TEST_F(Z80CpuTestFixture, INC_SP) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0x00FF);

    expectedResults.SP(0x0100);
    validateSingleInstructionAndTestPCOffset("INC SP");
}

