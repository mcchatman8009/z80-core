#include "Z80CpuTest.h"

//@formatter:off

//
// 8-Bit OR
//
#define CPU_OR_A 0xB7
#define CPU_OR_B 0xB0
#define CPU_OR_C 0xB1
#define CPU_OR_D 0xB2
#define CPU_OR_E 0xB3
#define CPU_OR_H 0xB4
#define CPU_OR_L 0xB5
#define CPU_OR_HL_PTR 0xB6
#define CPU_OR_N 0xF6

TEST_F(Z80CpuTest, OR_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc, CPU_OR_A);
    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(B, 0x80);
    memSet(pc, CPU_OR_B);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x40);
    cpuSet(C, 0x80);
    memSet(pc, CPU_OR_C);
    cpu.executeNextCommand();

    expectedResults.A(0xC0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(D, 0x80);
    memSet(pc, CPU_OR_D);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(E, 0x80);
    memSet(pc, CPU_OR_E);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(H, 0x80);
    memSet(pc, CPU_OR_H);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(L, 0x80);
    memSet(pc, CPU_OR_L);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x10);
    memSet(pc, CPU_OR_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, OR_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x00);
    memSet(pc++, CPU_OR_N);
    memSet(pc, 0x0);
    cpu.executeNextCommand();

    expectedResults.A(0x0);
    expectedResults.ZF(true);
    validateExpectedResults();
}
