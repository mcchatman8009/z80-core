#include "Z80CpuTestFixture.h"


TEST_F(Z80CpuTestFixture, EXX) { // NOLINT
    cpu.set(WordCpuRegisterSymbol::SHADOW_BC, Z80Word{0xF8});
    cpu.set(WordCpuRegisterSymbol::BC, Z80Word{0x03});

    cpu.set(WordCpuRegisterSymbol::SHADOW_DE, Z80Word{0xF9});
    cpu.set(WordCpuRegisterSymbol::DE, Z80Word{0x03});

    cpu.set(WordCpuRegisterSymbol::SHADOW_HL, Z80Word{0xF0});
    cpu.set(WordCpuRegisterSymbol::HL, Z80Word{0x03});


    expectedResults.HL(0xF0);
    expectedResults.DE(0xF9);
    expectedResults.BC(0xF8);
    validateSingleInstructionAndTestPCOffset("exx");
}

TEST_F(Z80CpuTestFixture, EX_AF_AF) { // NOLINT
    cpu.set(WordCpuRegisterSymbol::SHADOW_AF, Z80Word{0x89FF});
    cpu.set(ByteCpuRegisterSymbol::A, Z80Byte{0xFF});
    cpu.set(ByteCpuRegisterSymbol::F, Z80Byte{0x01});


    expectedResults.A(0x89);
    expectedResults.F(0xFF);
    validateSingleInstructionAndTestPCOffset("ex af, af'");
}

TEST_F(Z80CpuTestFixture, EX_DE_HL) { // NOLINT
    cpu.set(WordCpuRegisterSymbol::DE, Z80Word{0x89FF});
    cpu.set(WordCpuRegisterSymbol::HL, Z80Word{0xFF00});


    expectedResults.HL(0x89FF);
    expectedResults.DE(0xFF00);
    validateSingleInstructionAndTestPCOffset("ex de, hl");
}

TEST_F(Z80CpuTestFixture, EX_SP_PTR_HL) { // NOLINT
    memSet(0xFF00, 0x1);
    memSet(0xFF01, 0x1);

    cpuSet(WordCpuRegisterSymbol::SP, 0xFF00);
    cpuSet(WordCpuRegisterSymbol::HL, 0xA000);

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xA0);

    validateSingleInstructionAndTestPCOffset("ex (sp), hl");
}

TEST_F(Z80CpuTestFixture, EX_SP_PTR_IX) { // NOLINT
    memSet(0xFF00, 0x1);
    memSet(0xFF01, 0x1);

    cpuSet(WordCpuRegisterSymbol::SP, 0xFF00);
    cpuSet(WordCpuRegisterSymbol::IX, 0xA000);

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xA0);

    validateSingleInstructionAndTestPCOffset("ex (sp), ix");
}

TEST_F(Z80CpuTestFixture, EX_SP_PTR_IY) { // NOLINT
    memSet(0xFF00, 0x1);
    memSet(0xFF01, 0x1);

    cpuSet(WordCpuRegisterSymbol::SP, 0xFF00);
    cpuSet(WordCpuRegisterSymbol::IY, 0xA000);

    expectedResults.MEM(0xFF00, 0x00);
    expectedResults.MEM(0xFF01, 0xA0);

    validateSingleInstructionAndTestPCOffset("ex (sp), iy");
}

TEST_F(Z80CpuTestFixture, LDI) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::DE, 0xF000);
    cpuSet(WordCpuRegisterSymbol::BC, 1);

    memSet(0xD000, 0xF8);

    expectedResults.BC(0);
    expectedResults.HL(0xD001);
    expectedResults.DE(0xF001);
    expectedResults.PF(false);
    expectedResults.MEM(0xF000, 0xF8);
    // (DE):=(HL);
    // INC DE;
    // INC HL;
    // DEC BC;

    validateSingleInstructionAndTestPCOffset("LDI");
}

TEST_F(Z80CpuTestFixture, LDIR) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::DE, 0xF000);
    cpuSet(WordCpuRegisterSymbol::BC, 1);

    memSet(0xD000, 0xF8);

    expectedResults.BC(0);
    expectedResults.HL(0xD001);
    expectedResults.DE(0xF001);
    expectedResults.PF(false);
    expectedResults.MEM(0xF000, 0xF8);
    //
    // Repeat:
    //
    // (DE):=(HL);
    // INC DE;
    // INC HL;
    // DEC BC;

    validateSingleInstructionAndTestPCOffset("LDIR");
}

TEST_F(Z80CpuTestFixture, LDD) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::DE, 0xF000);
    cpuSet(WordCpuRegisterSymbol::BC, 2);

    memSet(0xD000, 0xF8);
    //
    // (DE):=(HL);
    // DEC DE;
    // DEC HL;
    // DEC BC;
    //
    expectedResults.BC(1);
    expectedResults.HL(0xCFFF);
    expectedResults.DE(0xEFFF);
    expectedResults.PF(true);

    expectedResults.MEM(0xF000, 0xF8);

    validateSingleInstructionAndTestPCOffset("LDD");
}

TEST_F(Z80CpuTestFixture, LDDR) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::DE, 0xF000);
    cpuSet(WordCpuRegisterSymbol::BC, 1);

    memSet(0xD000, 0xF8);
    //
    // Repeat
    // (DE):=(HL);
    // DEC DE;
    // DEC HL;
    // DEC BC;
    //
    expectedResults.BC(0);
    expectedResults.HL(0xCFFF);
    expectedResults.DE(0xEFFF);
    expectedResults.PF(false);

    expectedResults.MEM(0xF000, 0xF8);

    validateSingleInstructionAndTestPCOffset("LDD");
}

TEST_F(Z80CpuTestFixture, CPI) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::BC, 2);
    cpuSet(ByteCpuRegisterSymbol::A, 0xf8);

    memSet(0xD000, 0xF8);

    //
    // A-(HL);
    // INC HL;
    // DEC BC
    //

    expectedResults.PF(true);
    expectedResults.HL(0xD001);
    expectedResults.BC(1);
    expectedResults.ZF(true);

    validateSingleInstructionAndTestPCOffset("CPI");
}

TEST_F(Z80CpuTestFixture, CPIR) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::BC, 1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xf8);

    memSet(0xD000, 0xF8);

    // Repeat:
    //
    // A-(HL);
    // INC HL;
    // DEC BC
    //

    expectedResults.PF(false);
    expectedResults.HL(0xD001);
    expectedResults.BC(0);
    expectedResults.ZF(true);

    validateSingleInstructionAndTestPCOffset("CPIR");
}

TEST_F(Z80CpuTestFixture, CPD) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::BC, 2);
    cpuSet(ByteCpuRegisterSymbol::A, 0xf8);

    memSet(0xD000, 0xF8);

    //
    // A-(HL);
    // DEC HL;
    // DEC BC
    //

    expectedResults.PF(true);
    expectedResults.HL(0xCFFF);
    expectedResults.BC(1);
    expectedResults.ZF(true);

    validateSingleInstructionAndTestPCOffset("CPD");
}
TEST_F(Z80CpuTestFixture, CPDR) { // NOLINT
    cpuSet(WordCpuRegisterSymbol::HL, 0xD000);
    cpuSet(WordCpuRegisterSymbol::BC, 1);
    cpuSet(ByteCpuRegisterSymbol::A, 0xf8);

    memSet(0xD000, 0xF8);

    //
    // Repeat:
    // A-(HL);
    // DEC HL;
    // DEC BC
    //

    expectedResults.PF(false);
    expectedResults.HL(0xCFFF);
    expectedResults.BC(0);
    expectedResults.ZF(true);

    validateSingleInstructionAndTestPCOffset("CPDR");
}
