#include "Z80CpuTest.h"


//@formatter:off
#define CPU_LD_B_N 0x06
#define CPU_LD_C_N 0x0E
#define CPU_LD_D_N 0x16
#define CPU_LD_E_N 0x1E
#define CPU_LD_H_N 0x26
#define CPU_LD_L_N 0x2E
#define CPU_LD_A_N 0x3E

TEST_F(Z80CpuTest, LD_B_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_B_N);
    memSet(pc, 0x10);
    cpu.executeNextCommand();

    expectedResults.BC(0x1000);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_C_N);
    memSet(pc, 0x10);
    cpu.executeNextCommand();

    expectedResults.BC(0x0010);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_D_N);
    memSet(pc++, 0x10);
    cpu.executeNextCommand();

    expectedResults.DE(0x1000);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_E_N);
    memSet(pc++, 0x10);
    cpu.executeNextCommand();

    expectedResults.DE(0x10);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_H_N);
    memSet(pc++, 0x10);
    cpu.executeNextCommand();

    expectedResults.HL(0x1000);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_L_N);
    memSet(pc, 0x10);
    cpu.executeNextCommand();

    expectedResults.HL(0x0010);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_N) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_A_N);
    memSet(pc++, 0x10);
    cpu.executeNextCommand();

    expectedResults.A(0x10);
    validateExpectedResults();
}

//
// 8-Bit Register Loads
//
#define CPU_LD_A_A 0x7F
#define CPU_LD_A_B 0x78
#define CPU_LD_A_C 0x79
#define CPU_LD_A_D 0x7A
#define CPU_LD_A_E 0x7B
#define CPU_LD_A_H 0x7C
#define CPU_LD_A_L 0x7D
#define CPU_LD_B_B 0x40
#define CPU_LD_B_C 0x41
#define CPU_LD_B_D 0x42
#define CPU_LD_B_E 0x43
#define CPU_LD_B_H 0x44
#define CPU_LD_B_L 0x45
#define CPU_LD_B_A 0x47
#define CPU_LD_C_B 0x48
#define CPU_LD_C_C 0x49
#define CPU_LD_C_D 0x4A
#define CPU_LD_C_E 0x4B
#define CPU_LD_C_H 0x4C
#define CPU_LD_C_L 0x4D
#define CPU_LD_C_A 0x4F
#define CPU_LD_D_B 0x50
#define CPU_LD_D_C 0x51
#define CPU_LD_D_D 0x52
#define CPU_LD_D_E 0x53
#define CPU_LD_D_H 0x54
#define CPU_LD_D_L 0x55
#define CPU_LD_D_A 0x57
#define CPU_LD_E_B 0x58
#define CPU_LD_E_C 0x59
#define CPU_LD_E_D 0x5A
#define CPU_LD_E_E 0x5B
#define CPU_LD_E_H 0x5C
#define CPU_LD_E_L 0x5D
#define CPU_LD_E_A 0x5F
#define CPU_LD_H_B 0x60
#define CPU_LD_H_C 0x61
#define CPU_LD_H_D 0x62
#define CPU_LD_H_E 0x63
#define CPU_LD_H_H 0x64
#define CPU_LD_H_L 0x65
#define CPU_LD_H_A 0x67
#define CPU_LD_L_B 0x68
#define CPU_LD_L_C 0x69
#define CPU_LD_L_D 0x6A
#define CPU_LD_L_E 0x6B
#define CPU_LD_L_H 0x6C
#define CPU_LD_L_L 0x6D
#define CPU_LD_L_A 0x6F

TEST_F(Z80CpuTest, LD_A_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x1);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_A);
    cpu.executeNextCommand();

    expectedResults.A(0x01);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x12);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_B);
    cpu.executeNextCommand();

    expectedResults.A(0x12);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x12);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_C);
    cpu.executeNextCommand();

    expectedResults.A(0x12);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x12);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_D);
    cpu.executeNextCommand();

    expectedResults.DE(0x1200);
    expectedResults.A(0x12);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x12);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_E);
    cpu.executeNextCommand();

    expectedResults.DE(0x0012);
    expectedResults.A(0x12);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x12);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x1200);
    expectedResults.A(0x12);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x12);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x0012);
    expectedResults.A(0x12);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_B);
    cpu.executeNextCommand();

    expectedResults.BC(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_C);
    cpu.executeNextCommand();

    expectedResults.BC(0x9999);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_D);
    cpu.executeNextCommand();

    expectedResults.DE(0x9900);
    expectedResults.BC(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_E);
    cpu.executeNextCommand();

    expectedResults.DE(0x99);
    expectedResults.BC(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    expectedResults.BC(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    expectedResults.BC(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_A);
    cpu.executeNextCommand();

    expectedResults.A(0x99);
    expectedResults.BC(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_B);
    cpu.executeNextCommand();

    expectedResults.BC(0x9999);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_C);
    cpu.executeNextCommand();

    expectedResults.BC(0x0099);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_D);
    cpu.executeNextCommand();

    expectedResults.DE(0x9900);
    expectedResults.BC(0x0099);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_E);
    cpu.executeNextCommand();

    expectedResults.DE(0x99);
    expectedResults.BC(0x0099);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    expectedResults.BC(0x0099);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    expectedResults.BC(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_A);
    cpu.executeNextCommand();

    expectedResults.A(0x99);
    expectedResults.BC(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_B);
    cpu.executeNextCommand();

    expectedResults.BC(0x9900);
    expectedResults.DE(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_C);
    cpu.executeNextCommand();

    expectedResults.BC(0x0099);
    expectedResults.DE(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_D);
    cpu.executeNextCommand();

    expectedResults.DE(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_E);
    cpu.executeNextCommand();

    expectedResults.DE(0x9999);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    expectedResults.DE(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    expectedResults.DE(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_A);
    cpu.executeNextCommand();

    expectedResults.A(0x99);
    expectedResults.DE(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_B);
    cpu.executeNextCommand();

    expectedResults.BC(0x9900);
    expectedResults.DE(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_C);
    cpu.executeNextCommand();

    expectedResults.BC(0x0099);
    expectedResults.DE(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_D);
    cpu.executeNextCommand();

    expectedResults.DE(0x9999);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_E);
    cpu.executeNextCommand();

    expectedResults.DE(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    expectedResults.DE(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    expectedResults.DE(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_A);
    cpu.executeNextCommand();

    expectedResults.A(0x99);
    expectedResults.DE(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_B);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_C);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_D);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_E);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x9999);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_A);
    cpu.executeNextCommand();

    expectedResults.A(0x99);
    expectedResults.HL(0x9900);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(B, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_B);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(C, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_C);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(D, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_D);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(E, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_E);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(H, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_H);
    cpu.executeNextCommand();

    expectedResults.HL(0x9999);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(L, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_L);
    cpu.executeNextCommand();

    expectedResults.HL(0x99);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(A, 0x99);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_A);
    cpu.executeNextCommand();

    expectedResults.A(0x99);
    expectedResults.HL(0x99);
    validateExpectedResults();
}

//
// Write register to memory
//
#define CPU_LD_HL_PTR_B 0x70
#define CPU_LD_HL_PTR_C 0x71
#define CPU_LD_HL_PTR_D 0x72
#define CPU_LD_HL_PTR_E 0x73
#define CPU_LD_HL_PTR_H 0x74
#define CPU_LD_HL_PTR_L 0x75
#define CPU_LD_HL_PTR_A 0x77
#define CPU_LD_BC_PTR_A 0x02
#define CPU_LD_DE_PTR_A 0x12

TEST_F(Z80CpuTest, LD_HL_PTR_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(B, 0x03);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_B);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x03);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_PTR_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(C, 0x03);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_C);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x03);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_PTR_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(D, 0x03);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_D);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x03);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_PTR_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(E, 0x03);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_E);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x03);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_PTR_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_H);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x10);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_PTR_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_L);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x00);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_PTR_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSet(A, 0x01);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_HL_PTR_A);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x01);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_BC_PTR_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(BC, 0x1000);
    cpuSet(A, 0x01);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_BC_PTR_A);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x01);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_DE_PTR_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(DE, 0x1000);
    cpuSet(A, 0x01);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_DE_PTR_A);
    cpu.executeNextCommand();

    expectedResults.MEM(0x1000, 0x01);
    validateExpectedResults();
}

//
// Write memory to register
//
#define CPU_LD_A_HL_PTR 0x7E
#define CPU_LD_B_HL_PTR 0x46
#define CPU_LD_C_HL_PTR 0x4E
#define CPU_LD_D_HL_PTR 0x56
#define CPU_LD_E_HL_PTR 0x5E
#define CPU_LD_H_HL_PTR 0x66
#define CPU_LD_L_HL_PTR 0x6E
#define CPU_LD_A_BC_PTR 0x0A
#define CPU_LD_A_DE_PTR 0x1A

TEST_F(Z80CpuTest, LD_A_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x10);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0x10);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_B_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x10);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_B_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.BC(0x1000);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_C_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x10);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_C_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.BC(0x0010);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_D_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x10);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_D_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.DE(0x1000);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_E_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x10);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_E_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.DE(0x0010);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_H_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x02);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_H_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.HL(0x0200);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_L_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(HL, 0x1000);
    cpuSetPointer(HL, 0x02);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_L_HL_PTR);
    cpu.executeNextCommand();

    expectedResults.HL(0x1002);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_BC_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(BC, 0x1000);
    cpuSetPointer(BC, 0x02);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_BC_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0x02);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_A_DE_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(DE, 0x1000);
    cpuSetPointer(DE, 0x02);
    cpuSet(PC, pc);
    memSet(pc, CPU_LD_A_DE_PTR);
    cpu.executeNextCommand();

    expectedResults.A(0x02);
    validateExpectedResults();
}

//
// 16-bit loads
//
#define CPU_LD_BC_NN 0x01
#define CPU_LD_DE_NN 0x11
#define CPU_LD_HL_NN 0x21
#define CPU_LD_SP_NN 0x31
#define CPU_LD_SP_HL 0xF9

TEST_F(Z80CpuTest, LD_BC_NN) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_BC_NN);
    memSet(pc++, 0x02);
    memSet(pc, 0x21);
    cpu.executeNextCommand();

    expectedResults.BC(0x2102);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_DE_NN) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_DE_NN);
    memSet(pc++, 0x02);
    memSet(pc, 0x21);
    cpu.executeNextCommand();

    expectedResults.DE(0x2102);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_HL_NN) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_HL_NN);
    memSet(pc++, 0x02);
    memSet(pc, 0x21);
    cpu.executeNextCommand();

    expectedResults.HL(0x2102);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_SP_NN) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    memSet(pc++, CPU_LD_SP_NN);
    memSet(pc++, 0x02);
    memSet(pc, 0x21);
    cpu.executeNextCommand();

    expectedResults.SP(0x2102);
    validateExpectedResults();
}
TEST_F(Z80CpuTest, LD_SP_HL) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);
    cpuSet(HL, 0x2102);
    memSet(pc, CPU_LD_SP_HL);
    cpu.executeNextCommand();

    expectedResults.SP(0x2102);
    validateExpectedResults();
}

//
// Push word onto stack
//
#define CPU_PUSH_AF 0xF5
#define CPU_PUSH_BC 0xC5
#define CPU_PUSH_DE 0xD5
#define CPU_PUSH_HL 0xE5

//@formatter:off
TEST_F(Z80CpuTest, PUSH_AF) { // NOLINT
    auto pc = START_PC;
    cpuSet(SP, 0xDFFF);
    cpuSet(PC, pc);
    cpuSet(A, 0x01);
    cpuSet(F, 0x08);

    memSet(pc, CPU_PUSH_AF);
    cpu.executeNextCommand();

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, PUSH_BC) { // NOLINT
    auto pc = START_PC;
    cpuSet(SP, 0xDFFF);
    cpuSet(PC, pc);
    cpuSet(BC, 0x0108);

    memSet(pc, CPU_PUSH_BC);
    cpu.executeNextCommand();

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, PUSH_DE) { // NOLINT
    auto pc = START_PC;
    cpuSet(SP, 0xDFFF);
    cpuSet(PC, pc);
    cpuSet(DE, 0x0108);

    memSet(pc, CPU_PUSH_DE);
    cpu.executeNextCommand();

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, PUSH_HL) { // NOLINT
    auto pc = START_PC;
    cpuSet(SP, 0xDFFF);
    cpuSet(PC, pc);
    cpuSet(HL, 0x0108);

    memSet(pc, CPU_PUSH_HL);
    cpu.executeNextCommand();

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateExpectedResults();
}
//@formatter:on

//
// Pop word onto the stack
//
#define CPU_POP_AF 0xF1
#define CPU_POP_BC 0xC1
#define CPU_POP_DE 0xD1
#define CPU_POP_HL 0xE1

//@formatter:off
TEST_F(Z80CpuTest, POP_AF) { // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(PC, pc);
    memSet(pc, CPU_POP_AF);

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(SP, sp);

    cpu.executeNextCommand();

    expectedResults.A(0x02);
    expectedResults.F(0x33);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, POP_BC) { // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(PC, pc);
    memSet(pc, CPU_POP_BC);

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(SP, sp);

    cpu.executeNextCommand();

    expectedResults.SP(0xDFFF);
    expectedResults.BC(0x0233);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, POP_DE) { // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(PC, pc);
    memSet(pc, CPU_POP_DE);

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(SP, sp);

    cpu.executeNextCommand();

    expectedResults.SP(0xDFFF);
    expectedResults.DE(0x0233);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, POP_HL) { // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(PC, pc);
    memSet(pc, CPU_POP_HL);

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(SP, sp);

    cpu.executeNextCommand();

    expectedResults.SP(0xDFFF);
    expectedResults.HL(0x0233);

    validateExpectedResults();
}


//@formatter:on

