#include "Z80CpuTest.h"

//@formatter:off

//
// 8-Bit Add
//
#define CPU_ADD_A 0x87
#define CPU_ADD_B 0x80
#define CPU_ADD_C 0x81
#define CPU_ADD_D 0x82
#define CPU_ADD_E 0x83
#define CPU_ADD_H 0x84
#define CPU_ADD_L 0x85
#define CPU_ADD_HL_PTR 0x86
#define CPU_ADD_N 0xC6

TEST_F(Z80CpuTest, ADD_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x20);
    memSet(pc, CPU_ADD_A);

    cpu.executeNextCommand();

    expectedResults.A(0x40);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x01);
    cpuSet(B, 0xFF);
    memSet(pc, CPU_ADD_B);

    cpu.executeNextCommand();

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(C, 0x01);
    memSet(pc, CPU_ADD_C);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(D, 0x01);
    memSet(pc, CPU_ADD_D);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(E, 0x01);
    memSet(pc, CPU_ADD_E);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(H, 0x01);
    memSet(pc, CPU_ADD_H);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(L, 0x01);
    memSet(pc, CPU_ADD_L);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x1);
    memSet(pc, CPU_ADD_HL_PTR);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    memSet(pc++, CPU_ADD_N);
    memSet(pc, 0x01);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}

//
// 8-Bit Add with carry
//
#define CPU_ADC_A 0x8F
#define CPU_ADC_B 0x88
#define CPU_ADC_C 0x89
#define CPU_ADC_D 0x8A
#define CPU_ADC_E 0x8B
#define CPU_ADC_H 0x8C
#define CPU_ADC_L 0x8D
#define CPU_ADC_HL_PTR 0x8E
#define CPU_ADC_N 0xCE

TEST_F(Z80CpuTest, ADC_A) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x01);
    memSet(pc, CPU_ADC_A);

    cpu.executeNextCommand();

    expectedResults.A(0x02);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_B) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(B, 0x01);
    memSet(pc, CPU_ADC_B);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_C) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(C, 0x01);
    memSet(pc, CPU_ADC_C);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_D) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(D, 0x01);
    memSet(pc, CPU_ADC_D);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_E) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(E, 0x01);
    memSet(pc, CPU_ADC_E);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_H) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(H, 0x01);
    memSet(pc, CPU_ADC_H);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_L) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x0F);
    cpuSet(L, 0x01);
    memSet(pc, CPU_ADC_L);

    cpu.executeNextCommand();

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_HL_PTR) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 0x00);
    cpuSet(F, 0x01);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0xFF);
    memSet(pc, CPU_ADC_HL_PTR);

    cpu.executeNextCommand();

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADC_N) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(A, 126);
    cpuSet(F, 0x01);
    memSet(pc++, CPU_ADC_N);
    memSet(pc, 0x1);


    cpu.executeNextCommand();

    expectedResults.A(128);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(true);

    validateExpectedResults();
}

//
// 16 Bit Additions
//
#define CPU_ADD_HL_BC 0x09
#define CPU_ADD_HL_DE 0x19
#define CPU_ADD_HL_HL 0x29
#define CPU_ADD_HL_SP 0x39

TEST_F(Z80CpuTest, ADD_HL_BC) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(BC, 100);
    cpuSet(HL, 100);
    memSet(pc, CPU_ADD_HL_BC);


    expectedResults.HL(200);
    expectedResults.BC(100); // Should remain unchanged.
    cpu.executeNextCommand();

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_HL_DE) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(DE, 100);
    cpuSet(HL, 100);
    memSet(pc, CPU_ADD_HL_DE);


    expectedResults.HL(200);
    expectedResults.DE(100); // Should remain unchanged.
    cpu.executeNextCommand();

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_HL_HL) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(HL, 100);
    memSet(pc, CPU_ADD_HL_HL);


    expectedResults.HL(200);
    cpu.executeNextCommand();

    validateExpectedResults();
}
TEST_F(Z80CpuTest, ADD_HL_SP) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(HL, 100);
    cpuSet(SP, 300);
    memSet(pc, CPU_ADD_HL_SP);


    expectedResults.HL(400);
    expectedResults.SP(300);
    cpu.executeNextCommand();

    validateExpectedResults();
}
