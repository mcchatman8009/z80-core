#include "Z80CpuTest.h"

//@formatter:off

//
// 8-Bit AND
//

#define CPU_AND_A 0xA7
#define CPU_AND_B 0xA0
#define CPU_AND_C 0xA1
#define CPU_AND_D 0xA2
#define CPU_AND_E 0xA3
#define CPU_AND_H 0xA4
#define CPU_AND_L 0xA5
#define CPU_AND_HL_PTR 0xA6
#define CPU_AND_N 0xA6

TEST_F(Z80CpuTest, AND_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc, CPU_AND_A);
    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(B, 0x80);
    memSet(pc, CPU_AND_B);
    cpu.executeNextCommand();

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(C, 0x80);
    memSet(pc, CPU_AND_C);
    cpu.executeNextCommand();

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(D, 0x80);
    memSet(pc, CPU_AND_D);
    cpu.executeNextCommand();

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(E, 0x80);
    memSet(pc, CPU_AND_E);
    cpu.executeNextCommand();

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(H, 0x80);
    memSet(pc, CPU_AND_H);
    cpu.executeNextCommand();

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(L, 0x80);
    memSet(pc, CPU_AND_L);
    cpu.executeNextCommand();

    expectedResults.A(0x80);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x10);
    memSet(pc, CPU_AND_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, AND_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    memSet(pc++, CPU_AND_N);
    memSet(pc, 0x0);
    cpu.executeNextCommand();

    expectedResults.A(0x0);
    expectedResults.ZF(true);
    validateExpectedResults();
}
