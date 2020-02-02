#include "Z80CpuTestFixture.h"

//@formatter:off

#define START_PC 0x100

#define CPU_JP_HL 0xE9
#define CPU_JP_NNNN 0xC3
#define CPU_JP_NZ_NNNN 0xC2
#define CPU_JP_Z_NNNN 0xCA
#define CPU_JP_NC_NNNN 0xD2
#define CPU_JP_C_NNNN 0xDA
#define CPU_JP_S_NNNN 0xFA
#define CPU_JP_NS_NNNN 0xF2
#define CPU_JP_NP_NNNN 0xE2
#define CPU_JP_P_NNNN 0xEA

TEST_F(Z80CpuTestFixture, JP_HL) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::HL, 0x1000);
    memSet(pc, CPU_JP_HL);
    cpu.executeNextCommand();

    expectedResults.PC(0x1000);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(0x1110);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_NZ_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_NZ_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(0x1110);
    expectedResults.ZF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_Z_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_Z_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC + 3); // No jump performed;
    expectedResults.ZF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_NC_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_NC_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(0x1110);
    expectedResults.CF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_C_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_C_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC + 3); // No jump performed;
    expectedResults.CF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_NS_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_NS_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(0x1110);
    expectedResults.SF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_S_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_S_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC + 3); // No jump performed;
    expectedResults.SF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_NP_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_NP_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(0x1110);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, JP_P_NNN) {  // NOLINT
    auto pc = START_PC;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    memSet(pc++, CPU_JP_P_NNNN);
    memSet(pc++, 0x10);
    memSet(pc, 0x11);
    cpu.executeNextCommand();

    expectedResults.PC(START_PC + 3); // No jump performed;
    expectedResults.PF(false);

    validateExpectedResults();
}

