#include "Z80CpuTest.h"

//@formatter:off

//
// 8-Bit OR
//
#define CPU_XOR_A 0xAF
#define CPU_XOR_B 0xA8
#define CPU_XOR_C 0xA9
#define CPU_XOR_D 0xAA
#define CPU_XOR_E 0xAB
#define CPU_XOR_H 0xAC
#define CPU_XOR_L 0xAD
#define CPU_XOR_HL_PTR 0xAE
#define CPU_XOR_N 0xEE

TEST_F(Z80CpuTest, XOR_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc, CPU_XOR_A);
    cpu.executeNextCommand();

    expectedResults.A(0);
    expectedResults.ZF(true);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(B, 0x80);
    memSet(pc, CPU_XOR_B);
    cpu.executeNextCommand();

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x40);
    cpuSet(C, 0x80);
    memSet(pc, CPU_XOR_C);
    cpu.executeNextCommand();

    expectedResults.A(0xC0);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(D, 0x80);
    memSet(pc, CPU_XOR_D);
    cpu.executeNextCommand();

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(E, 0x80);
    memSet(pc, CPU_XOR_E);
    cpu.executeNextCommand();

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(H, 0x80);
    memSet(pc, CPU_XOR_H);
    cpu.executeNextCommand();

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(L, 0x80);
    memSet(pc, CPU_XOR_L);
    cpu.executeNextCommand();

    expectedResults.A(0x70);
    expectedResults.ZF(false);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, XOR_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x10);
    memSet(pc, CPU_XOR_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    validateExpectedResults();
}

TEST_F(Z80CpuTest, XOR_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x00);
    memSet(pc++, CPU_XOR_N);
    memSet(pc, 0x0);
    cpu.executeNextCommand();

    expectedResults.A(0x0);
    expectedResults.ZF(true);
    validateExpectedResults();
}


