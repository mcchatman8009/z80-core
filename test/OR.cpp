#include "Z80CpuTestFixture.h"

//@formatter:off

//
// 8-Bit OR
//
TEST_F(Z80CpuTestFixture, OR_A) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld a, 0x2");
    expectedResults.A(0x2);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, b");
}
TEST_F(Z80CpuTestFixture, OR_B) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld b, 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, b");
}
TEST_F(Z80CpuTestFixture, OR_C) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld c, 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, c");
}
TEST_F(Z80CpuTestFixture, OR_D) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld d, 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, d");
}
TEST_F(Z80CpuTestFixture, OR_E) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld e, 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, e");
}
TEST_F(Z80CpuTestFixture, OR_H) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld h, 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, h");
}
TEST_F(Z80CpuTestFixture, OR_L) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld l, 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, l");
}
TEST_F(Z80CpuTestFixture, OR_HL_PTR) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld (hl), 0x2");
    validateSingleInstructionAndTestPCOffset("ld a, 0x1");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, (hl)");
}
TEST_F(Z80CpuTestFixture, OR_N) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld a, 0x2");
    expectedResults.A(0x3);
    expectedResults.ZF(false);
    validateSingleInstructionAndTestPCOffset("or a, 0x1");
}
