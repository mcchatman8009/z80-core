#include "Z80CpuTest.h"

using namespace std;
#define CPU_DEC_A 0x3D
#define CPU_DEC_B 0x05
#define CPU_DEC_C 0x0D
#define CPU_DEC_D 0x15
#define CPU_DEC_E 0x1D
#define CPU_DEC_H 0x25
#define CPU_DEC_L 0x2D
#define CPU_DEC_HL_PTR 0x35

//@formatter:off
//
// 8-Bit decrement
//
template<ByteCpuRegisterSymbol registerSymbol, int command>
static void performDecrement(int pc, Z80CpuTest& cpuTest) {
    cpuTest.cpuSet(registerSymbol, 0xFF);

    cpuTest.memSet(pc, command);
    cpuTest.cpu.executeNextCommand();

    cpuTest.isEqual(registerSymbol, 0xFE);
}

TEST_F(Z80CpuTest, DEC_A) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<A, CPU_DEC_A>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_B) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<B, CPU_DEC_B>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_C) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<C, CPU_DEC_C>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_D) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<D, CPU_DEC_D>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_E) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<E, CPU_DEC_E>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_H) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<H, CPU_DEC_H>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_L) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<L, CPU_DEC_L>(pc, *this);
}
TEST_F(Z80CpuTest, DEC_HL_PTR) { // NOLINT
    auto pc = START_PC;
    cpuSet(PC, pc);

    performDecrement<HL_PTR, CPU_DEC_HL_PTR>(pc, *this);
}

//
// 16-Bit decrement  register
//
#define CPU_DEC_BC 0x0B
#define CPU_DEC_DE 0x1B
#define CPU_DEC_HL 0x2B
#define CPU_DEC_SP 0x3B

TEST_F(Z80CpuTest, DEC_BC) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(BC, 0x0100);
    memSet(pc, CPU_DEC_BC);

    expectedResults.BC(0x00FF);
}
TEST_F(Z80CpuTest, DEC_DE) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(DE, 0x0100);
    memSet(pc, CPU_DEC_DE);

    expectedResults.DE(0x00FF);
}
TEST_F(Z80CpuTest, DEC_HL) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(HL, 0x0100);
    memSet(pc, CPU_DEC_HL);

    expectedResults.HL(0x00FF);
}
TEST_F(Z80CpuTest, DEC_SP) { // NOLINT
    auto pc = START_PC;

    cpuSet(PC, pc);
    cpuSet(SP, 0x0100);
    memSet(pc, CPU_DEC_SP);

    expectedResults.SP(0x00FF);
}