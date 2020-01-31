#include "Z80CpuTestFixture.h"

//@formatter:off
//
// 8-Bit Subtract
//
TEST_F(Z80CpuTestFixture, SUB_A) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);

    expectedResults.A(0);
    expectedResults.ZF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, A");

}
TEST_F(Z80CpuTestFixture, SUB_B) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0);
    cpuSet(ByteCpuRegisterSymbol::B, 0xFF);

    expectedResults.A(0x01);
    expectedResults.NF(true);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("SUB A, B");
}
TEST_F(Z80CpuTestFixture, SUB_C) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    cpuSet(ByteCpuRegisterSymbol::C, 0x0F);

    expectedResults.A(0xE1);
    validateSingleInstructionAndTestPCOffset("SUB A, C");
}
TEST_F(Z80CpuTestFixture, SUB_D) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(ByteCpuRegisterSymbol::D, 0x1);

    expectedResults.A(0xFE);
    validateSingleInstructionAndTestPCOffset("SUB A, D");
}
TEST_F(Z80CpuTestFixture, SUB_E) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x2);
    cpuSet(ByteCpuRegisterSymbol::E, 0x1);

    expectedResults.A(1);
    validateSingleInstructionAndTestPCOffset("SUB A, E");
}
TEST_F(Z80CpuTestFixture, SUB_H) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x02);
    cpuSet(ByteCpuRegisterSymbol::H, 0x1);

    expectedResults.A(1);
    validateSingleInstructionAndTestPCOffset("SUB A, H");
}
TEST_F(Z80CpuTestFixture, SUB_L) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(ByteCpuRegisterSymbol::L, 0xFE);

    expectedResults.A(0x1);
    validateSingleInstructionAndTestPCOffset("SUB A, L");
}
TEST_F(Z80CpuTestFixture, SUB_HL_PTR) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(WordCpuRegisterSymbol::HL, 0x1000);
    memSet(0x1000, 0x1);

    expectedResults.A(0xFE);
    validateSingleInstructionAndTestPCOffset("SUB A, (HL)");
}
TEST_F(Z80CpuTestFixture, SUB_N) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);

    expectedResults.A(0xF0);
    expectedResults.HF(true);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, 0x0F");
}
TEST_F(Z80CpuTestFixture, SUB_N_2) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);

    expectedResults.A(0x00);
    expectedResults.ZF(true);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, 0xF0");
}
TEST_F(Z80CpuTestFixture, SUB_IX_OFFSET) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    validateSingleInstructionAndTestPCOffset("LD (ix+0xF0), $10");

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, (ix+0xF0)");
}
TEST_F(Z80CpuTestFixture, SUB_IY_OFFSET) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    validateSingleInstructionAndTestPCOffset("LD (iy+0xF0), $10");

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, (iy+0xF0)");
}
TEST_F(Z80CpuTestFixture, SUB_IXH) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    validateSingleInstructionAndTestPCOffset("LD IX, $1000");

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, IXH");
}
TEST_F(Z80CpuTestFixture, SUB_IXL) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    validateSingleInstructionAndTestPCOffset("LD IX, $10");

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, IXL");
}
TEST_F(Z80CpuTestFixture, SUB_IYH) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    validateSingleInstructionAndTestPCOffset("LD IY, $1000");

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, IYH");
}
TEST_F(Z80CpuTestFixture, SUB_IYL) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xF0);
    validateSingleInstructionAndTestPCOffset("LD IY, $10");

    expectedResults.A(0xE0);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(true);

    validateSingleInstructionAndTestPCOffset("SUB A, IYL");
}

//
// 8-Bit Subtract, with carry
//
TEST_F(Z80CpuTestFixture, SBC_A) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);

    expectedResults.A(0);
    expectedResults.ZF(true);

    validateSingleInstructionAndTestPCOffset("SBC A, A");
}
TEST_F(Z80CpuTestFixture, SBC_B) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0);
    cpuSet(ByteCpuRegisterSymbol::B, 0xFF);

    expectedResults.A(1);
    expectedResults.ZF(false);
    expectedResults.HF(true);
    expectedResults.CF(true);

    validateSingleInstructionAndTestPCOffset("SBC A, B");
}
TEST_F(Z80CpuTestFixture, SBC_C) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(ByteCpuRegisterSymbol::C, 0x0F);

    expectedResults.A(0xF0);
    validateSingleInstructionAndTestPCOffset("SBC A, C");
}
TEST_F(Z80CpuTestFixture, SBC_D) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::F, 0x01);
    cpuSet(ByteCpuRegisterSymbol::A, 0x00);
    cpuSet(ByteCpuRegisterSymbol::D, 0xFF);

    expectedResults.A(0);
    expectedResults.CF(true);
    validateSingleInstructionAndTestPCOffset("SBC A, D");
}
TEST_F(Z80CpuTestFixture, SBC_E) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x1);
    cpuSet(ByteCpuRegisterSymbol::E, 0x1);

    expectedResults.A(0);
    expectedResults.ZF(true);
    validateSingleInstructionAndTestPCOffset("SBC A, E");
}
TEST_F(Z80CpuTestFixture, SBC_H) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(ByteCpuRegisterSymbol::H, 0xFF);

    expectedResults.A(0);
    expectedResults.ZF(true);
    validateSingleInstructionAndTestPCOffset("SBC A, H");
}
TEST_F(Z80CpuTestFixture, SBC_L) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(ByteCpuRegisterSymbol::L, 0xF);

    expectedResults.A(0xF0);
    validateSingleInstructionAndTestPCOffset("SBC A, l");
}
TEST_F(Z80CpuTestFixture, SBC_HL_PTR) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0xFF);
    cpuSet(WordCpuRegisterSymbol::HL, 0x1000);
    memSet(0x1000, 0x1);

    expectedResults.A(0xFE);
    validateSingleInstructionAndTestPCOffset("SBC A, (hl)");
}
TEST_F(Z80CpuTestFixture, SBC_N) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x2);

    expectedResults.A(1);
    validateSingleInstructionAndTestPCOffset("SBC A, 0x1");
}
TEST_F(Z80CpuTestFixture, SBC_IXH) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD IX, 0x0100");
    cpuSet(ByteCpuRegisterSymbol::A, 0x2);

    expectedResults.A(1);

    validateSingleInstructionAndTestPCOffset("SBC A, IXH");
}
TEST_F(Z80CpuTestFixture, SBC_IXL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD IX, 0x01");
    cpuSet(ByteCpuRegisterSymbol::A, 0x2);

    expectedResults.A(1);

    validateSingleInstructionAndTestPCOffset("SBC A, IXL");
}
TEST_F(Z80CpuTestFixture, SBC_IYH) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD IY, 0x0100");
    cpuSet(ByteCpuRegisterSymbol::A, 0x2);

    expectedResults.A(1);

    validateSingleInstructionAndTestPCOffset("SBC A, IYH");
}
TEST_F(Z80CpuTestFixture, SBC_IYL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD IY, 0x01");
    cpuSet(ByteCpuRegisterSymbol::A, 0x2);

    expectedResults.A(1);

    validateSingleInstructionAndTestPCOffset("SBC A, IYL");
}
TEST_F(Z80CpuTestFixture, SBC_IX_OFFSET) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD (ix+99), 0x2");
    cpuSet(ByteCpuRegisterSymbol::A, 0x2);

    expectedResults.A(0);
    expectedResults.ZF(true);
    expectedResults.HF(false);
    expectedResults.CF(false);

    validateSingleInstructionAndTestPCOffset("SBC A, (ix+99)");
}
TEST_F(Z80CpuTestFixture, SBC_IY_OFFSET) { // NOLINT
    validateSingleInstructionAndTestPCOffset("LD (iy+99), 0x2");
    cpuSet(ByteCpuRegisterSymbol::A, 0x1);

    expectedResults.ZF(false);
    expectedResults.CF(true);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("SBC A, (iy+99)");
}
