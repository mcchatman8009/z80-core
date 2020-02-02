#include "Z80CpuTestFixture.h"

//@formatter:off


#define START_PC 0x100

#define CPU_CALL_NN 0xCD
#define CPU_CALL_NZ_NN 0xC4
#define CPU_CALL_Z_NN 0xCC
#define CPU_CALL_NC_NN 0xD4
#define CPU_CALL_C_NN 0xDC
#define CPU_CALL_NP_NN 0xE4
#define CPU_CALL_P_NN 0xEC
#define CPU_CALL_NS_NN 0xF4
#define CPU_CALL_S_NN 0xFC


TEST_F(Z80CpuTestFixture, CALL_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,((START_PC+3) & 0xFF00) >> 8); // NOLINT
    expectedResults.MEM(sp-2,(START_PC+3) & 0xFF);          // NOLINT

    expectedResults.SP(sp - 2);
    expectedResults.PC(0x0FFF);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_NC_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_NC_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,((START_PC+3) & 0xFF00) >> 8); // NOLINT
    expectedResults.MEM(sp-2,(START_PC+3) & 0xFF);          // NOLINT

    expectedResults.SP(sp - 2);
    expectedResults.PC(0x0FFF);
    expectedResults.CF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_C_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_C_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,0x0);          // NOLINT
    expectedResults.MEM(sp-2,0x0);          // NOLINT

    expectedResults.SP(sp);
    expectedResults.PC(++pc);
    expectedResults.CF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_NZ_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_NZ_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,((START_PC+3) & 0xFF00) >> 8); // NOLINT
    expectedResults.MEM(sp-2,(START_PC+3) & 0xFF);          // NOLINT

    expectedResults.SP(sp - 2);
    expectedResults.PC(0x0FFF);
    expectedResults.ZF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_Z_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_Z_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,0x0);          // NOLINT
    expectedResults.MEM(sp-2,0x0);          // NOLINT

    expectedResults.SP(sp);
    expectedResults.PC(++pc);
    expectedResults.ZF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_NP_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_NP_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,((START_PC+3) & 0xFF00) >> 8); // NOLINT
    expectedResults.MEM(sp-2,(START_PC+3) & 0xFF);          // NOLINT

    expectedResults.SP(sp - 2);
    expectedResults.PC(0x0FFF);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_P_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_P_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,0x0);          // NOLINT
    expectedResults.MEM(sp-2,0x0);          // NOLINT

    expectedResults.SP(sp);
    expectedResults.PC(++pc);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_NS_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_NS_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,((START_PC+3) & 0xFF00) >> 8); // NOLINT
    expectedResults.MEM(sp-2,(START_PC+3) & 0xFF);          // NOLINT

    expectedResults.SP(sp - 2);
    expectedResults.PC(0x0FFF);
    expectedResults.SF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CALL_S_NN) {  // NOLINT
    auto pc = START_PC;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    memSet(pc++, CPU_CALL_S_NN);
    memSet(pc++, 0xFF); // The low byte.
    memSet(pc, 0x0F);   // The high byte.

    cpu.executeNextCommand();
    expectedResults.MEM(sp-1,0x0);          // NOLINT
    expectedResults.MEM(sp-2,0x0);          // NOLINT

    expectedResults.SP(sp);
    expectedResults.PC(++pc);
    expectedResults.SF(false);

    validateExpectedResults();
}
