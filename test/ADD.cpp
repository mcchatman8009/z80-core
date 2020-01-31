#include "Z80CpuTest.h"
#include "Z80CpuTestFixture.h"

//@formatter:off

//
// 8-Bit Add
//
TEST_F(Z80CpuTestFixture, ADD_IX_OFFSET) { // NOLINT
    validateSingleInstruction("LD (ix + 1), 0xF");
    validateSingleInstruction("LD A, 0xF");

    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, (ix + 1)");
}
TEST_F(Z80CpuTestFixture, ADD_IY_OFFSET) { // NOLINT
    string reg = "(iy + 1)";
    validateSingleInstruction("LD (iy + 1), 0xF");
    validateSingleInstruction("LD A, 0xF");

    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, (iy + 1)");
}
TEST_F(Z80CpuTestFixture, ADD_IXH) { // NOLINT
    validateSingleInstruction("LD A, 0xF");
    validateSingleInstruction("LD IXH, A");

    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, IXH");
}
TEST_F(Z80CpuTestFixture, ADD_IXL) { // NOLINT
    validateSingleInstruction("LD A, 0xF");
    validateSingleInstruction("LD IXL, A");

    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, IXL");
}
TEST_F(Z80CpuTestFixture, ADD_IYH) { // NOLINT
    validateSingleInstruction("LD A, 0xF");
    validateSingleInstruction("LD IYH, A");

    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, IYH");
}
TEST_F(Z80CpuTestFixture, ADD_IYL) { // NOLINT
    validateSingleInstruction("LD A, 0xF");
    validateSingleInstruction("LD IYL, A");

    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, IYL");
}
TEST_F(Z80CpuTestFixture, ADD_A) { // NOLINT
    validateSingleInstruction("LD A, 0xF");
    expectedResults.A(30);
    expectedResults.ZF(false);
    expectedResults.CF(false);
    expectedResults.HF(true);
    expectedResults.NF(false);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, A");
}
TEST_F(Z80CpuTestFixture, ADD_B) { // NOLINT
    validateSingleInstruction("LD A, 0x1");
    validateSingleInstruction("LD B, 0xFF");

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);
    validateSingleInstructionAndTestPCOffset("add A, B");
}
TEST_F(Z80CpuTestFixture, ADD_C) { // NOLINT
    validateSingleInstruction("LD A, 0x0");
    validateSingleInstruction("LD C, 0xFF");

    expectedResults.A(0xFF);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    expectedResults.PF(false);
    validateSingleInstructionAndTestPCOffset("add A, C");
}
TEST_F(Z80CpuTestFixture, ADD_D) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::D, 0x01);


    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, D");
}
TEST_F(Z80CpuTestFixture, ADD_E) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::E, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, E");
}
TEST_F(Z80CpuTestFixture, ADD_H) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::H, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, H");
}
TEST_F(Z80CpuTestFixture, ADD_L) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::L, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("add A, L");
}
TEST_F(Z80CpuTestFixture, ADD_HL_PTR) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0x1);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("ADD A, (HL)");
}
TEST_F(Z80CpuTestFixture, ADD_N) { // NOLINT
    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstructionAndTestPCOffset("ADD A, 0x01");
}

//
// 8-Bit Add with carry
//
TEST_F(Z80CpuTestFixture, ADC_IX_OFFSET) { // NOLINT

    validateSingleInstruction("ld (ix+0xF), 0x1");

    cpuSet(ByteCpuRegisterSymbol::F, 0x1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xFE);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, (ix + 0xF)");
}
TEST_F(Z80CpuTestFixture, ADC_IY_OFFSET) { // NOLINT

    validateSingleInstruction("ld (iy+0xF), 0x1");

    cpuSet(ByteCpuRegisterSymbol::F, 0x1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xFE);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, (iy + 0xF)");
}
TEST_F(Z80CpuTestFixture, ADC_IXH) { // NOLINT

    validateSingleInstruction("ld IX, 0x100");

    cpuSet(ByteCpuRegisterSymbol::F, 0x1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xFE);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, ixh");
}
TEST_F(Z80CpuTestFixture, ADC_IXL) { // NOLINT

    validateSingleInstruction("ld IX, 0x1");

    cpuSet(ByteCpuRegisterSymbol::F, 0x1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xFE);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, ixl");
}
TEST_F(Z80CpuTestFixture, ADC_IYH) { // NOLINT

    validateSingleInstruction("ld IY, 0x100");

    cpuSet(ByteCpuRegisterSymbol::F, 0x1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xFE);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, iyh");
}
TEST_F(Z80CpuTestFixture, ADC_IYL) { // NOLINT

    validateSingleInstruction("ld IY, 0x1");

    cpuSet(ByteCpuRegisterSymbol::F, 0x1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xFE);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, iyl");
}
TEST_F(Z80CpuTestFixture, ADC_A) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x01);

    expectedResults.A(0x02);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(false);
    expectedResults.PF(false);

   validateSingleInstruction("adc a, a");
}
TEST_F(Z80CpuTest, ADC_B) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::B, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, b");
}
TEST_F(Z80CpuTest, ADC_C) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::C, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, c");
}
TEST_F(Z80CpuTest, ADC_D) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::D, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, d");
}
TEST_F(Z80CpuTest, ADC_E) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::E, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, e");
}
TEST_F(Z80CpuTest, ADC_H) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::H, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, h");
}
TEST_F(Z80CpuTest, ADC_L) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x0F);
    cpuSet(ByteCpuRegisterSymbol::L, 0x01);

    expectedResults.A(0x10);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, l");
}
TEST_F(Z80CpuTest, ADC_HL_PTR) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 0x00);
    cpuSet(ByteCpuRegisterSymbol::F, 0x01);
    cpuSet(HL, 0x1000);
    memSet(0x1000, 0xFF);

    expectedResults.A(0x00);
    expectedResults.CF(true);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(false);

    validateSingleInstruction("adc a, (hl)");
}
TEST_F(Z80CpuTest, ADC_N) { // NOLINT

    cpuSet(ByteCpuRegisterSymbol::A, 126);
    cpuSet(ByteCpuRegisterSymbol::F, 0x01);

    cpu.executeNextCommand();

    expectedResults.A(128);
    expectedResults.CF(false);
    expectedResults.NF(false);
    expectedResults.HF(true);
    expectedResults.PF(true);

    validateSingleInstruction("adc a, 0x1");
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
