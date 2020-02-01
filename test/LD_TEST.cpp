#include "Z80CpuTestFixture.h"

using namespace std;

static void validate(Z80CpuTestFixture* fixture, string dest, string src, int value = 0x10) { // NOLINT
    fixture->expectedResults.Set(dest, value);
    fixture->executeSingleInstruction("ld " + src + ", " + to_string(value));
    fixture->validateSingleInstructionAndTestPCOffset("ld " + dest + ", " + src);
}


//@formatter:off
TEST_F(Z80CpuTestFixture, LD_B_N) { // NOLINT
    expectedResults.BC(0x1000);
    validateSingleInstructionAndTestPCOffset("ld b, 0x10");
}
TEST_F(Z80CpuTestFixture, LD_C_N) { // NOLINT
    expectedResults.BC(0x0010);
    validateSingleInstructionAndTestPCOffset("ld c, 0x10");
}

TEST_F(Z80CpuTestFixture, LD_D_N) { // NOLINT
    expectedResults.DE(0x1000);
    validateSingleInstructionAndTestPCOffset("ld d, 0x10");
}
TEST_F(Z80CpuTestFixture, LD_E_N) { // NOLINT
    expectedResults.DE(0x10);
    validateSingleInstructionAndTestPCOffset("ld e, 0x10");
}
TEST_F(Z80CpuTestFixture, LD_H_N) { // NOLINT
    expectedResults.HL(0x1000);
    validateSingleInstructionAndTestPCOffset("ld h, 0x10");
}
TEST_F(Z80CpuTestFixture, LD_L_N) { // NOLINT
    expectedResults.HL(0x0010);
    validateSingleInstructionAndTestPCOffset("ld l, 0x10");
}
TEST_F(Z80CpuTestFixture, LD_A_N) { // NOLINT
    expectedResults.A(0x10);
    validateSingleInstructionAndTestPCOffset("ld A, 0x10");
}

//
// 8-Bit Register Loads
//
TEST_F(Z80CpuTestFixture, LD_IYL_A) { // NOLINT
    expectedResults.IY(0x01);
    executeSingleInstruction("ld a, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYL, a");
}
TEST_F(Z80CpuTestFixture, LD_IYL_B) { // NOLINT
    expectedResults.IY(0x01);
    executeSingleInstruction("ld b, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYL, b");
}
TEST_F(Z80CpuTestFixture, LD_IYL_C) { // NOLINT
    expectedResults.IY(0x01);
    executeSingleInstruction("ld c, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYL, c");
}
TEST_F(Z80CpuTestFixture, LD_IYL_D) { // NOLINT
    expectedResults.IY(0x01);
    executeSingleInstruction("ld d, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYL, d");
}
TEST_F(Z80CpuTestFixture, LD_IYL_E) { // NOLINT
    expectedResults.IY(0x01);
    executeSingleInstruction("ld e, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYL, e");
}
TEST_F(Z80CpuTestFixture, LD_IYL_IYL) { // NOLINT
    expectedResults.IY(0x010);
    cpuSet(WordCpuRegisterSymbol::IY, 0x10);
    validateSingleInstructionAndTestPCOffset("ld IYL, IYL");
}
TEST_F(Z80CpuTestFixture, LD_IYL_IYH) { // NOLINT
    expectedResults.IY(0x1010);
    cpuSet(WordCpuRegisterSymbol::IY, 0x1000);
    validateSingleInstructionAndTestPCOffset("ld IYL, IYH");
}
TEST_F(Z80CpuTestFixture, LD_IYH_A) { // NOLINT
    expectedResults.IY(0x0100);
    executeSingleInstruction("ld a, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYH, a");
}
TEST_F(Z80CpuTestFixture, LD_IYH_B) { // NOLINT
    expectedResults.IY(0x0100);
    executeSingleInstruction("ld b, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYH, b");
}
TEST_F(Z80CpuTestFixture, LD_IYH_C) { // NOLINT
    expectedResults.IY(0x0100);
    executeSingleInstruction("ld c, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYH, c");
}
TEST_F(Z80CpuTestFixture, LD_IYH_D) { // NOLINT
    expectedResults.IY(0x0100);
    executeSingleInstruction("ld d, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYH, d");
}
TEST_F(Z80CpuTestFixture, LD_IYH_E) { // NOLINT
    expectedResults.IY(0x0100);
    executeSingleInstruction("ld e, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IYH, e");
}
TEST_F(Z80CpuTestFixture, LD_IYH_IYH) { // NOLINT
    expectedResults.IY(0x0100);
    cpuSet(WordCpuRegisterSymbol::IY, 0x100);
    validateSingleInstructionAndTestPCOffset("ld IYH, IYH");
}
TEST_F(Z80CpuTestFixture, LD_IYH_IYL) { // NOLINT
    expectedResults.IY(0x0101);
    cpuSet(WordCpuRegisterSymbol::IY, 0x001);
    validateSingleInstructionAndTestPCOffset("ld iyh, iyl");
}

TEST_F(Z80CpuTestFixture, LD_IXL_A) { // NOLINT
    expectedResults.IX(0x01);
    executeSingleInstruction("ld a, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXL, a");
}
TEST_F(Z80CpuTestFixture, LD_IXL_B) { // NOLINT
    expectedResults.IX(0x01);
    executeSingleInstruction("ld b, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXL, b");
}
TEST_F(Z80CpuTestFixture, LD_IXL_C) { // NOLINT
    expectedResults.IX(0x01);
    executeSingleInstruction("ld c, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXL, c");
}
TEST_F(Z80CpuTestFixture, LD_IXL_D) { // NOLINT
    expectedResults.IX(0x01);
    executeSingleInstruction("ld d, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXL, d");
}
TEST_F(Z80CpuTestFixture, LD_IXL_E) { // NOLINT
    expectedResults.IX(0x01);
    executeSingleInstruction("ld e, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXL, e");
}
TEST_F(Z80CpuTestFixture, LD_IXL_IXL) { // NOLINT
    expectedResults.IX(0x010);
    cpuSet(WordCpuRegisterSymbol::IX, 0x10);
    validateSingleInstructionAndTestPCOffset("ld IXL, IXL");
}
TEST_F(Z80CpuTestFixture, LD_IXL_IXH) { // NOLINT
    expectedResults.IX(0x1010);
    cpuSet(WordCpuRegisterSymbol::IX, 0x1000);
    validateSingleInstructionAndTestPCOffset("ld IXL, IXH");
}
TEST_F(Z80CpuTestFixture, LD_IXH_A) { // NOLINT
    expectedResults.IX(0x0100);
    executeSingleInstruction("ld a, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXH, a");
}
TEST_F(Z80CpuTestFixture, LD_IXH_B) { // NOLINT
    expectedResults.IX(0x0100);
    executeSingleInstruction("ld b, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXH, b");
}
TEST_F(Z80CpuTestFixture, LD_IXH_C) { // NOLINT
    expectedResults.IX(0x0100);
    executeSingleInstruction("ld c, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXH, c");
}
TEST_F(Z80CpuTestFixture, LD_IXH_D) { // NOLINT
    expectedResults.IX(0x0100);
    executeSingleInstruction("ld d, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXH, d");
}
TEST_F(Z80CpuTestFixture, LD_IXH_E) { // NOLINT
    expectedResults.IX(0x0100);
    executeSingleInstruction("ld e, 0x01");
    validateSingleInstructionAndTestPCOffset("ld IXH, e");
}
TEST_F(Z80CpuTestFixture, LD_IXH_IXH) { // NOLINT
    expectedResults.IX(0x0100);
    cpuSet(WordCpuRegisterSymbol::IX, 0x100);
    validateSingleInstructionAndTestPCOffset("ld IXH, IXH");
}
TEST_F(Z80CpuTestFixture, LD_IXH_IXL) { // NOLINT
    expectedResults.IX(0x0101);
    cpuSet(WordCpuRegisterSymbol::IX, 0x001);
    validateSingleInstructionAndTestPCOffset("ld ixh, ixl");
}
TEST_F(Z80CpuTestFixture, LD_A_A) { // NOLINT
    expectedResults.A(0x01);
    executeSingleInstruction("ld a, 0x01");
    validateSingleInstructionAndTestPCOffset("ld a, a");

}
TEST_F(Z80CpuTestFixture, LD_A_B) { // NOLINT
    expectedResults.A(0x12);
    executeSingleInstruction("ld b, 0x12");
    validateSingleInstructionAndTestPCOffset("ld a, b");
}
TEST_F(Z80CpuTestFixture, LD_A_C) { // NOLINT
    expectedResults.A(0x11);
    executeSingleInstruction("ld c, 0x11");
    validateSingleInstructionAndTestPCOffset("ld a, c");
}
TEST_F(Z80CpuTestFixture, LD_A_D) { // NOLINT
    expectedResults.A(0x11);
    executeSingleInstruction("ld d, 0x11");
    validateSingleInstructionAndTestPCOffset("ld a, d");
}
TEST_F(Z80CpuTestFixture, LD_A_E) { // NOLINT
    expectedResults.A(0x11);
    executeSingleInstruction("ld e, 0x11");
    validateSingleInstructionAndTestPCOffset("ld a, e");
}
TEST_F(Z80CpuTestFixture, LD_A_H) { // NOLINT
    expectedResults.A(0x11);
    executeSingleInstruction("ld h, 0x11");
    validateSingleInstructionAndTestPCOffset("ld a, h");
}
TEST_F(Z80CpuTestFixture, LD_A_L) { // NOLINT
    expectedResults.A(0x11);
    executeSingleInstruction("ld l, 0x11");
    validateSingleInstructionAndTestPCOffset("ld a, l");
}
TEST_F(Z80CpuTestFixture, LD_B_B) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld b, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, b");
}
TEST_F(Z80CpuTestFixture, LD_B_C) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld c, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, c");
}
TEST_F(Z80CpuTestFixture, LD_B_D) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld d, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, d");
}
TEST_F(Z80CpuTestFixture, LD_B_E) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld e, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, e");
}
TEST_F(Z80CpuTestFixture, LD_B_H) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld h, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, h");
}
TEST_F(Z80CpuTestFixture, LD_B_L) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld l, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, l");
}
TEST_F(Z80CpuTestFixture, LD_B_A) { // NOLINT
    expectedResults.B(0x99);
    executeSingleInstruction("ld a, 0x99");
    validateSingleInstructionAndTestPCOffset("ld b, a");
}
TEST_F(Z80CpuTestFixture, LD_C_B) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld b, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, b");
}
TEST_F(Z80CpuTestFixture, LD_C_C) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld c, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, c");
}
TEST_F(Z80CpuTestFixture, LD_C_D) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld d, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, d");
}
TEST_F(Z80CpuTestFixture, LD_C_E) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld e, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, e");
}
TEST_F(Z80CpuTestFixture, LD_C_H) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld h, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, h");
}
TEST_F(Z80CpuTestFixture, LD_C_L) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld l, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, l");
}
TEST_F(Z80CpuTestFixture, LD_C_A) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld a, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, a");
}
TEST_F(Z80CpuTestFixture, LD_D_B) { // NOLINT
    expectedResults.C(0x99);
    executeSingleInstruction("ld a, 0x99");
    validateSingleInstructionAndTestPCOffset("ld c, a");
}
TEST_F(Z80CpuTestFixture, LD_D_C) { // NOLINT
    expectedResults.D(0x99);
    executeSingleInstruction("ld c, 0x99");
    validateSingleInstructionAndTestPCOffset("ld d, c");
}
TEST_F(Z80CpuTestFixture, LD_D_D) { // NOLINT
    expectedResults.D(0x99);
    executeSingleInstruction("ld d, 0x99");
    validateSingleInstructionAndTestPCOffset("ld d, d");
}
TEST_F(Z80CpuTestFixture, LD_D_E) { // NOLINT
    expectedResults.D(0x99);
    executeSingleInstruction("ld e, 0x99");
    validateSingleInstructionAndTestPCOffset("ld d, e");
}
TEST_F(Z80CpuTestFixture, LD_D_H) { // NOLINT
    expectedResults.D(0x99);
    executeSingleInstruction("ld h, 0x99");
    validateSingleInstructionAndTestPCOffset("ld d, h");
}
TEST_F(Z80CpuTestFixture, LD_D_L) { // NOLINT
    expectedResults.D(0x99);
    executeSingleInstruction("ld l, 0x99");
    validateSingleInstructionAndTestPCOffset("ld d, l");
}
TEST_F(Z80CpuTestFixture, LD_D_A) { // NOLINT
    expectedResults.D(0x99);
    executeSingleInstruction("ld a, 0x99");
    validateSingleInstructionAndTestPCOffset("ld d, a");
}
TEST_F(Z80CpuTestFixture, LD_E_B) { // NOLINT
    expectedResults.E(0x99);
    executeSingleInstruction("ld b, 0x99");
    validateSingleInstructionAndTestPCOffset("ld e, b");
}
TEST_F(Z80CpuTestFixture, LD_E_C) { // NOLINT
    validate(this,"E", "C");
}
TEST_F(Z80CpuTestFixture, LD_E_D) { // NOLINT
    validate(this,"E", "D");
}
TEST_F(Z80CpuTestFixture, LD_E_E) { // NOLINT
    validate(this,"E","E");
}
TEST_F(Z80CpuTestFixture, LD_E_H) { // NOLINT
    validate(this,"E","H");
}
TEST_F(Z80CpuTestFixture, LD_E_L) { // NOLINT
    validate(this,"E","L");
}
TEST_F(Z80CpuTestFixture, LD_E_A) { // NOLINT
    validate(this,"E","A");
}
TEST_F(Z80CpuTestFixture, LD_H_B) { // NOLINT
    validate(this,"H","B");
}
TEST_F(Z80CpuTestFixture, LD_H_C) { // NOLINT
    validate(this,"H","C");
}
TEST_F(Z80CpuTestFixture, LD_H_D) { // NOLINT
    validate(this,"H","D");
}
TEST_F(Z80CpuTestFixture, LD_H_E) { // NOLINT
    validate(this,"H","E");
}
TEST_F(Z80CpuTestFixture, LD_H_H) { // NOLINT
    validate(this,"H","H");
}
TEST_F(Z80CpuTestFixture, LD_H_L) { // NOLINT
    validate(this,"H","L");
}
TEST_F(Z80CpuTestFixture, LD_H_A) { // NOLINT
    validate(this,"H","B");
}
TEST_F(Z80CpuTestFixture, LD_L_B) { // NOLINT
    validate(this,"L","B");
}
TEST_F(Z80CpuTestFixture, LD_L_C) { // NOLINT
    validate(this,"L","C");
}
TEST_F(Z80CpuTestFixture, LD_L_D) { // NOLINT
    validate(this,"L","D");
}
TEST_F(Z80CpuTestFixture, LD_L_E) { // NOLINT
    validate(this,"L","E");
}
TEST_F(Z80CpuTestFixture, LD_L_H) { // NOLINT
    validate(this,"L","H");
}
TEST_F(Z80CpuTestFixture, LD_L_L) { // NOLINT
    validate(this,"L","L");
}
TEST_F(Z80CpuTestFixture, LD_L_A) { // NOLINT
    validate(this,"L","A");
}

//
// Write register to memory
//
TEST_F(Z80CpuTestFixture, LD_HL_PTR_B) { // NOLINT
    validate(this,"(HL)","B");
}
TEST_F(Z80CpuTestFixture, LD_HL_PTR_C) { // NOLINT
    validate(this,"(HL)","C");
}
TEST_F(Z80CpuTestFixture, LD_HL_PTR_D) { // NOLINT
    validate(this,"(HL)","D");
}
TEST_F(Z80CpuTestFixture, LD_HL_PTR_E) { // NOLINT
    validate(this,"(HL)","E");
}
TEST_F(Z80CpuTestFixture, LD_HL_PTR_H) { // NOLINT
    validate(this,"(HL)","H");
}
TEST_F(Z80CpuTestFixture, LD_HL_PTR_L) { // NOLINT
    validate(this,"(HL)","L");
}
TEST_F(Z80CpuTestFixture, LD_HL_PTR_A) { // NOLINT
    validate(this,"(HL)","A");
}
TEST_F(Z80CpuTestFixture, LD_BC_PTR_A) { // NOLINT
    validate(this,"(BC)","A");
}
TEST_F(Z80CpuTestFixture, LD_DE_PTR_A) { // NOLINT
    validate(this,"(DE)","A");
}

//
// Write memory to register
//
TEST_F(Z80CpuTestFixture, LD_A_HL_PTR) { // NOLINT
    validate(this,"A","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_B_HL_PTR) { // NOLINT
    validate(this,"B","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_C_HL_PTR) { // NOLINT
    validate(this,"C","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_D_HL_PTR) { // NOLINT
    validate(this,"D","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_E_HL_PTR) { // NOLINT
    validate(this,"E","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_H_HL_PTR) { // NOLINT
    validate(this,"H","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_L_HL_PTR) { // NOLINT
    validate(this,"L","(HL)");
}
TEST_F(Z80CpuTestFixture, LD_A_BC_PTR) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::BC, 0xFFFF);
    memSet(0xFFFF, 10);
    this->expectedResults.Set("A", 10);

    this->validateSingleInstructionAndTestPCOffset("ld A, (BC)");
}
TEST_F(Z80CpuTestFixture, LD_A_DE_PTR) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::DE, 0xFFFF);
    memSet(0xFFFF, 10);
    this->expectedResults.Set("A", 10);
    this->validateSingleInstructionAndTestPCOffset("ld A, (DE)");
}

//
// 16-bit loads
//
TEST_F(Z80CpuTestFixture, LD_BC_NN) { // NOLINT
    expectedResults.BC(0xf000);
    this->validateSingleInstructionAndTestPCOffset("ld BC, 0xF000");
}
TEST_F(Z80CpuTestFixture, LD_DE_NN) { // NOLINT
    expectedResults.DE(0xf000);
    this->validateSingleInstructionAndTestPCOffset("ld DE, 0xF000");
}
TEST_F(Z80CpuTestFixture, LD_HL_NN) { // NOLINT
    expectedResults.HL(0xf000);
    this->validateSingleInstructionAndTestPCOffset("ld HL, 0xF000");
}
TEST_F(Z80CpuTestFixture, LD_SP_NN) { // NOLINT
    expectedResults.SP(0xf000);
    this->validateSingleInstructionAndTestPCOffset("ld SP, 0xF000");
}
TEST_F(Z80CpuTestFixture, LD_SP_HL) { // NOLINT
    this->validateSingleInstructionAndTestPCOffset("ld HL, 0xF000");
    expectedResults.SP(0xf000);
    this->validateSingleInstructionAndTestPCOffset("ld SP, HL");
}
TEST_F(Z80CpuTestFixture, LD_SP_IX) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld ix, 0xFF00");
    expectedResults.SP(0xFF00);
    validateSingleInstructionAndTestPCOffset("ld sp, ix");
}
TEST_F(Z80CpuTestFixture, LD_SP_IY) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld iy, 0xFF00");
    expectedResults.SP(0xFF00);
    validateSingleInstructionAndTestPCOffset("ld sp, iy");
}

//
// Load  NN pointer into register
//
TEST_F(Z80CpuTestFixture, LD_HL_NN_PTR) { // NOLINT
    memSet(0xff00, 0x00);
    memSet(0xff01, 0xDD);

    expectedResults.HL(0xDD00);
    validateSingleInstructionAndTestPCOffset("ld hl, (0xFF00)");
}
TEST_F(Z80CpuTestFixture, LD_BC_NN_PTR) { // NOLINT
    memSet(0xff00, 0x00);
    memSet(0xff01, 0xDD);

    expectedResults.BC(0xDD00);
    validateSingleInstructionAndTestPCOffset("ld bc, (0xFF00)");
}
TEST_F(Z80CpuTestFixture, LD_DE_NN_PTR) { // NOLINT
    memSet(0xff00, 0x00);
    memSet(0xff01, 0xDD);

    expectedResults.DE(0xDD00);
    validateSingleInstructionAndTestPCOffset("ld DE, (0xFF00)");
}
TEST_F(Z80CpuTestFixture, LD_SP_NN_PTR) { // NOLINT
    memSet(0xff00, 0x00);
    memSet(0xff01, 0xDD);

    expectedResults.SP(0xDD00);
    validateSingleInstructionAndTestPCOffset("ld SP, (0xFF00)");
}
TEST_F(Z80CpuTestFixture, LD_IX_NN_PTR) { // NOLINT
    memSet(0xff00, 0x00);
    memSet(0xff01, 0xDD);

    expectedResults.IX(0xDD00);
    validateSingleInstructionAndTestPCOffset("ld IX, (0xFF00)");
}
TEST_F(Z80CpuTestFixture, LD_IY_NN_PTR) { // NOLINT
    memSet(0xff00, 0x00);
    memSet(0xff01, 0xDD);

    expectedResults.IY(0xDD00);
    validateSingleInstructionAndTestPCOffset("ld IY, (0xFF00)");
}

//
// Load word register into NN pointer
//
TEST_F(Z80CpuTestFixture, LD_NN_PTR_HL) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld hl, 0xDD00");

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xDD);
    validateSingleInstructionAndTestPCOffset("ld (0xFF00), hl");
}
TEST_F(Z80CpuTestFixture, LD_NN_PTR_BC) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld bc, 0xDD00");

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xDD);
    validateSingleInstructionAndTestPCOffset("ld (0xFF00), bc");
}
TEST_F(Z80CpuTestFixture, LD_NN_PTR_DE) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld de, 0xDD00");

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xDD);
    validateSingleInstructionAndTestPCOffset("ld (0xFF00), de");
}
TEST_F(Z80CpuTestFixture, LD_NN_PTR_SP) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld sp, 0xDD00");

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xDD);
    validateSingleInstructionAndTestPCOffset("ld (0xFF00), sp");
}
TEST_F(Z80CpuTestFixture, LD_NN_PTR_IX) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld ix, 0xDD00");

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xDD);
    validateSingleInstructionAndTestPCOffset("ld (0xFF00), ix");
}
TEST_F(Z80CpuTestFixture, LD_NN_PTR_IY) { // NOLINT
    validateSingleInstructionAndTestPCOffset("ld iy, 0xDD00");

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xDD);
    validateSingleInstructionAndTestPCOffset("ld (0xFF00), iy");
}

//
// Push word onto stack
//
//@formatter:off
TEST_F(Z80CpuTestFixture, PUSH_IX) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0xDFFF);
    cpuSet(WordCpuRegisterSymbol::IX, 0x0108);

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateSingleInstructionAndTestPCOffset("push ix");
}
TEST_F(Z80CpuTestFixture, PUSH_IY) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0xDFFF);
    cpuSet(WordCpuRegisterSymbol::IY, 0x0108);

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateSingleInstructionAndTestPCOffset("push iy");
}
TEST_F(Z80CpuTestFixture, PUSH_AF) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0xDFFF);
    cpuSet(ByteCpuRegisterSymbol::A, 0x01);
    cpuSet(ByteCpuRegisterSymbol::F, 0x08);

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateSingleInstructionAndTestPCOffset("push af");
}
TEST_F(Z80CpuTestFixture, PUSH_BC) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0xDFFF);
    cpuSet(WordCpuRegisterSymbol::BC, 0x0108);

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateSingleInstructionAndTestPCOffset("push bc");
}
TEST_F(Z80CpuTestFixture, PUSH_DE) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0xDFFF);
    cpuSet(WordCpuRegisterSymbol::DE, 0x0108);


    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateSingleInstructionAndTestPCOffset("push de");
}
TEST_F(Z80CpuTestFixture, PUSH_HL) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::SP, 0xDFFF);
    cpuSet(WordCpuRegisterSymbol::HL, 0x0108);

    expectedResults.MEM(0xDFFE, 0x01); // Push the High byte
    expectedResults.MEM(0xDFFD, 0x08); // Push the low byte
    expectedResults.SP(0xDFFF - 2);

    validateSingleInstructionAndTestPCOffset("push hl");
}
//@formatter:on

//
// Pop word onto the stack
//
//@formatter:off
TEST_F(Z80CpuTestFixture, POP_IX) { // NOLINT
    auto sp = 0xDFFF;

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    expectedResults.IX(0x0233);

    validateSingleInstructionAndTestPCOffset("pop ix");
}
TEST_F(Z80CpuTestFixture, POP_IY) { // NOLINT
    auto sp = 0xDFFF;

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    expectedResults.IY(0x0233);

    validateSingleInstructionAndTestPCOffset("pop iy");
}
TEST_F(Z80CpuTestFixture, POP_AF) { // NOLINT
    auto sp = 0xDFFF;

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    expectedResults.A(0x02);
    expectedResults.F(0x33);

    validateSingleInstructionAndTestPCOffset("pop af");
}
TEST_F(Z80CpuTestFixture, POP_BC) { // NOLINT
    auto sp = 0xDFFF;

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    expectedResults.SP(0xDFFF);
    expectedResults.BC(0x0233);

    validateSingleInstructionAndTestPCOffset("pop bc");
}
TEST_F(Z80CpuTestFixture, POP_DE) { // NOLINT
    auto sp = 0xDFFF;

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    expectedResults.SP(0xDFFF);
    expectedResults.DE(0x0233);

    validateSingleInstructionAndTestPCOffset("pop de");
}
TEST_F(Z80CpuTestFixture, POP_HL) { // NOLINT
    auto sp = 0xDFFF;

    // Push the bytes
    memSet(--sp, 0x02);
    memSet(--sp, 0x33);
    cpuSet(WordCpuRegisterSymbol::SP, sp);

    expectedResults.SP(0xDFFF);
    expectedResults.HL(0x0233);

    validateSingleInstructionAndTestPCOffset("pop hl");
}



//@formatter:on

