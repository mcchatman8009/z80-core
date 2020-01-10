#include "Z80CpuTest.h"

using namespace std;

//@formatter:off
//
// 8-Bit increment
//
#define CPU_INC_A 0x3C
#define CPU_INC_B 0x04
#define CPU_INC_C 0x0C
#define CPU_INC_D 0x14
#define CPU_INC_E 0x1C
#define CPU_INC_H 0x24
#define CPU_INC_L 0x2C
#define CPU_INC_HL_PTR 0x34

template<ByteCpuRegisterSymbol registerSymbol, int command>
static void perform8BitIncrement(int pc, Z80CpuTest& cpuTest) {
    cpuTest.cpuSet(registerSymbol, 0xFF);

    cpuTest.memSet(pc, command);
    cpuTest.cpu.executeNextCommand();

    cpuTest.isEqual(registerSymbol, 0x0);
}

TEST_F(Z80CpuTest, INC_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<A, CPU_INC_A>(pc, *this);
}
TEST_F(Z80CpuTest, INC_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<B, CPU_INC_B>(pc, *this);
}
TEST_F(Z80CpuTest, INC_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<C, CPU_INC_C>(pc, *this);
}
TEST_F(Z80CpuTest, INC_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<D, CPU_INC_D>(pc, *this);
}
TEST_F(Z80CpuTest, INC_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<E, CPU_INC_E>(pc, *this);
}
TEST_F(Z80CpuTest, INC_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<H, CPU_INC_H>(pc, *this);
}
TEST_F(Z80CpuTest, INC_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<L, CPU_INC_L>(pc, *this);
}
TEST_F(Z80CpuTest, INC_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    perform8BitIncrement<HL_PTR, CPU_INC_HL_PTR>(pc, *this);
}

//
// 16-Bit increment register
//
#define CPU_INC_BC 0x03
#define CPU_INC_DE 0x13
#define CPU_INC_HL 0x23
#define CPU_INC_SP 0x33

TEST_F(Z80CpuTest, INC_BC) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(BC, 0x00FF);
    memSet(pc, CPU_INC_BC);

    expectedResults.BC(0x0100);
}
TEST_F(Z80CpuTest, INC_DE) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(DE, 0x00FF);
    memSet(pc, CPU_INC_DE);

    expectedResults.DE(0x0100);
}
TEST_F(Z80CpuTest, INC_HL) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(HL, 0x00FF);
    memSet(pc, CPU_INC_HL);

    expectedResults.HL(0x0100);
}
TEST_F(Z80CpuTest, INC_SP) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(SP, 0x00FF);
    memSet(pc, CPU_INC_SP);

    expectedResults.SP(0x0100);
}

