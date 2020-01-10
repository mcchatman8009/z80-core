#include "Z80CpuTest.h"

//@formatter:off
//
// 8-Bit Compare
//
#define CPU_CP_A 0xBF
#define CPU_CP_B 0xB8
#define CPU_CP_C 0xB9
#define CPU_CP_D 0xBA
#define CPU_CP_E 0xBB
#define CPU_CP_H 0xBC
#define CPU_CP_L 0xBD
#define CPU_CP_HL_PTR 0xBE
#define CPU_CP_N 0xFE

TEST_F(Z80CpuTest, CP_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc, CPU_CP_A);
    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    expectedResults.ZF(true);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0);
    cpuSet(B, 0xFF);
    memSet(pc, CPU_CP_B);
    cpu.executeNextCommand();

    expectedResults.A(0x00);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(C, 0x0F);
    memSet(pc, CPU_CP_C);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(D, 0x1);
    memSet(pc, CPU_CP_D);
    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x2);
    cpuSet(E, 0x1);
    memSet(pc, CPU_CP_E);
    cpu.executeNextCommand();

    expectedResults.A(2);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x02);
    cpuSet(H, 0x1);
    memSet(pc, CPU_CP_H);
    cpu.executeNextCommand();

    expectedResults.A(2);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(L, 0xFE);
    memSet(pc, CPU_CP_L);
    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x1);
    memSet(pc, CPU_CP_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, CP_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc++, CPU_CP_N);
    memSet(pc, 0x0F);

    cpu.executeNextCommand();

    expectedResults.A(0xFF);
    validateExpectedResults();
}
