#include "Z80CpuTest.h"

//@formatter:off
//
// 8-Bit Subtract
//
#define CPU_SUB_A 0x97
#define CPU_SUB_B 0x90
#define CPU_SUB_C 0x91
#define CPU_SUB_D 0x92
#define CPU_SUB_E 0x93
#define CPU_SUB_H 0x94
#define CPU_SUB_L 0x95
#define CPU_SUB_HL_PTR 0x96
#define CPU_SUB_N 0xD6

TEST_F(Z80CpuTest, SUB_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc, CPU_SUB_A);
    cpu.executeNextCommand();

    expectedResults.A(0);
    expectedResults.ZF(true);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0);
    cpuSet(B, 0xFF);
    memSet(pc, CPU_SUB_B);
    cpu.executeNextCommand();

    expectedResults.A(0x01);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xF0);
    cpuSet(C, 0x0F);
    memSet(pc, CPU_SUB_C);
    cpu.executeNextCommand();

    expectedResults.A(0xE1);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(D, 0x1);
    memSet(pc, CPU_SUB_D);
    cpu.executeNextCommand();

    expectedResults.A(0xFE);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x2);
    cpuSet(E, 0x1);
    memSet(pc, CPU_SUB_E);
    cpu.executeNextCommand();

    expectedResults.A(1);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x02);
    cpuSet(H, 0x1);
    memSet(pc, CPU_SUB_H);
    cpu.executeNextCommand();

    expectedResults.A(1);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(L, 0xFE);
    memSet(pc, CPU_SUB_L);
    cpu.executeNextCommand();

    expectedResults.A(0x1);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x1);
    memSet(pc, CPU_SUB_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0xFE);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SUB_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc++, CPU_SUB_N);
    memSet(pc, 0x0F);

    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    validateExpectedResults();
}

//
// 8-Bit Subtract, with carry
//
#define CPU_SBC_A 0x9F
#define CPU_SBC_B 0x98
#define CPU_SBC_C 0x99
#define CPU_SBC_D 0x9A
#define CPU_SBC_E 0x9B
#define CPU_SBC_H 0x9C
#define CPU_SBC_L 0x9D
#define CPU_SBC_HL_PTR 0x9E
#define CPU_SBC_N 0xDE
TEST_F(Z80CpuTest, SBC_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    memSet(pc, CPU_SBC_A);
    cpu.executeNextCommand();

    expectedResults.A(0);
    expectedResults.ZF(true);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0);
    cpuSet(B, 0xFF);
    memSet(pc, CPU_SBC_B);
    cpu.executeNextCommand();

    expectedResults.A(1);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(C, 0x0F);
    memSet(pc, CPU_SBC_C);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(F, 0x01);
    cpuSet(A, 0x00);
    cpuSet(D, 0xFF);
    memSet(pc, CPU_SBC_D);
    cpu.executeNextCommand();

    expectedResults.A(0);
    expectedResults.CF(true);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x1);
    cpuSet(E, 0x1);
    memSet(pc, CPU_SBC_E);
    cpu.executeNextCommand();

    expectedResults.A(0);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(H, 0xFF);
    memSet(pc, CPU_SBC_H);
    cpu.executeNextCommand();

    expectedResults.A(0);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(L, 0xF);
    memSet(pc, CPU_SBC_L);
    cpu.executeNextCommand();

    expectedResults.A(0xF0);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0xFF);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x1);
    memSet(pc, CPU_SBC_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0xFE);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, SBC_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x2);
    memSet(pc++, CPU_SBC_N);
    memSet(pc, 0x1);
    cpu.executeNextCommand();

    expectedResults.A(1);
    validateExpectedResults();
}


