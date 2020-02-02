#include "Z80CpuTestFixture.h"

//@formatter:off

#define CPU_RET 0xC9
#define CPU_RET_NZ 0xC0
#define CPU_RET_Z 0xC8
#define CPU_RET_NC 0xD0
#define CPU_RET_C 0xD8
#define CPU_RET_NS 0xF0
#define CPU_RET_S 0xF8
#define CPU_RET_NP 0xE0
#define CPU_RET_P 0xE8
#define START_PC 0x100

TEST_F(Z80CpuTestFixture, CPU_RET) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET);

    cpu.executeNextCommand();


    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_NZ) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET);

    cpu.executeNextCommand();


    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_Z) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(ByteCpuRegisterSymbol::F, 0x40);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_Z);

    cpu.executeNextCommand();


    expectedResults.ZF(true);
    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_NC) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_NC);

    cpu.executeNextCommand();


    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);
    expectedResults.CF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_C) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(ByteCpuRegisterSymbol::F, 0x01);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_C);

    cpu.executeNextCommand();


    expectedResults.CF(true);
    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_NP) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_NP);

    cpu.executeNextCommand();


    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);
    expectedResults.PF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_P) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(ByteCpuRegisterSymbol::F, 0x04);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_P);

    cpu.executeNextCommand();


    expectedResults.PF(true);
    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_NS) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_NS);

    cpu.executeNextCommand();


    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);
    expectedResults.SF(false);

    validateExpectedResults();
}
TEST_F(Z80CpuTestFixture, CPU_RET_S) {  // NOLINT
    auto pc = START_PC;
    auto pushedPC = START_PC+3;
    auto sp = 0xDFFF;

    cpuSet(WordCpuRegisterSymbol::PC, pc);
    cpuSet(ByteCpuRegisterSymbol::F, 0x80);
    cpuSet(WordCpuRegisterSymbol::SP, sp-2);

    memSet(sp-1,((pushedPC) & 0xFF00) >> 8); // NOLINT
    memSet(sp-2,(pushedPC) & 0xFF);          // NOLINT

    memSet(pc, CPU_RET_S);

    cpu.executeNextCommand();


    expectedResults.SF(true);
    expectedResults.SP(sp);
    expectedResults.PC(pushedPC);

    validateExpectedResults();
}
