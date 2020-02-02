#include "Z80CpuTestFixture.h"

//@formatter:off

#define START_PC 0x100

#define CPU_DJNZ 0x10
#define CPU_JR_N 0x18
#define CPU_JR_NZ_N 0x20
#define CPU_JR_Z_N 0x28
#define CPU_JR_NC_N 0x30
#define CPU_JR_C_N 0x38

TEST_F(Z80CpuTestFixture, DJNZ) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(ByteCpuRegisterSymbol::B, 0x2);
    memSet(pc++, CPU_DJNZ);
    memSet(pc, -2);
    cpu.executeNextCommand();

    //  B should be 0, so the JR should occur.
    expectedResults.PC(START_PC);
    expectedResults.B(0x01);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JR_N) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JR_N);
    memSet(pc, -2);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JR_NZ_N) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JR_NZ_N);
    memSet(pc, -2);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC);
    expectedResults.ZF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JR_Z_N) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JR_Z_N);
    memSet(pc, -2);
    cpu.executeNextCommand();

    expectedResults.PC(pc + 1);
    expectedResults.ZF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JR_NC_N) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JR_NC_N);
    memSet(pc, -2);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC);
    expectedResults.CF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JR_C_N) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JR_C_N);
    memSet(pc, -2);
    cpu.executeNextCommand();

    expectedResults.PC(pc + 1);
    expectedResults.CF(false);

    validateExpectedResults();
}

