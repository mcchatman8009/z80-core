#include "Z80CpuTestFixture.h"
#include <bitset>

using namespace std;

//
// Bit :  7 | 6 | 5 | 4 | 3 | 2   | 1 | 0
// Flag:  S | Z | X | H | X | P/V | N | C
//
constexpr auto CARRY_BIT = 0;
constexpr auto NEGATIVE_BIT = 1;
constexpr auto PARITY_BIT = 2;
constexpr auto UNKNOWN_BIT3 = 3;
constexpr auto HALF_CARRY_BIT = 4;
constexpr auto UNKNOWN_BIT5 = 5;
constexpr auto ZERO_BIT = 6;
constexpr auto SIGN_BIT = 7;

TEST_F(Z80CpuTestFixture, DAA_CASE_0) { // NOLINT
    //
    // When the DAA instruction is executed, the A register
    // is BCD corrected using the contents of the flags.
    // The exact process is the following:
    //
    // * If the least significant four bits of A contain a non-BCD digit
    // (i. e. it is greater than 9) or the H flag is set,
    // then $06 is added to the register.
    //
    //
    // * Then the four most significant bits are checked. If this
    // is more significant digit also happens to be greater than
    // 9 or the C flag is set, then $60 is added.
    //
    // If the second addition was needed, the C flag is set after
    // execution, otherwise it is reset. The N flag is preserved,
    // P/V is parity and the others are altered by definition.
    //
    validateSingleInstruction("ld a, 0x0A");
    expectedResults.A(0x10);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_1) { // NOLINT
    //
    // When the DAA instruction is executed, the A register
    // is BCD corrected using the contents of the flags.
    // The exact process is the following:
    //
    // * If the least significant four bits of A contain a non-BCD digit
    // (i. e. it is greater than 9) or the H flag is set,
    // then $06 is added to the register.
    //
    //
    // * Then the four most significant bits are checked. If this
    // is more significant digit also happens to be greater than
    // 9 or the C flag is set, then $60 is added.
    //
    // If the second addition was needed, the C flag is set after
    // execution, otherwise it is reset. The N flag is preserved,
    // P/V is parity and the others are altered by definition.
    //
    validateSingleInstruction("ld a, 0x0F");
    expectedResults.A(0x15);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_2) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(HALF_CARRY_BIT, true);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    validateSingleInstruction("ld a, 0x10");
    expectedResults.A(0x16);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_3) { // NOLINT
    validateSingleInstruction("ld a, 0x1F");
    expectedResults.A(0x25);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_4) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(HALF_CARRY_BIT, true);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    validateSingleInstruction("ld a, 0x1F");
    expectedResults.A(0x25);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_5) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(HALF_CARRY_BIT, true);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    validateSingleInstruction("ld a, 0x1A");
    expectedResults.A(0x20);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_6) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(CARRY_BIT, true);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    validateSingleInstruction("ld a, 0xA1");
    expectedResults.A(0x01);
    expectedResults.CF(true);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_7) { // NOLINT
    validateSingleInstruction("ld a, 0xF1");
    expectedResults.A(0x51);
    expectedResults.CF(true);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_8) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(CARRY_BIT, true);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    validateSingleInstruction("ld a, 0xA1");
    expectedResults.A(0x01);
    expectedResults.CF(true);
    expectedResults.PF(false);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, DAA_CASE_9) { // NOLINT
    validateSingleInstruction("ld a, 0x80");
    expectedResults.A(0x80);
    expectedResults.CF(false);
    expectedResults.PF(false);
    expectedResults.SF(true);
    validateSingleInstruction("DAA");
}

TEST_F(Z80CpuTestFixture, CPL) { // NOLINT
    validateSingleInstruction("ld a, 0xFF");
    expectedResults.A(0x00);
    expectedResults.HF(true);
    expectedResults.NF(true);
    expectedResults.CF(false);
    expectedResults.SF(false);
    expectedResults.PF(false);
    validateSingleInstruction("CPL");
}

TEST_F(Z80CpuTestFixture, NEG_CASE_1) { // NOLINT
    validateSingleInstruction("ld a, 0x1");
    expectedResults.A(0xFF);
    validateSingleInstruction("NEG");
}

TEST_F(Z80CpuTestFixture, NEG_CASE_2) { // NOLINT
    validateSingleInstruction("ld a, 0xF");
    expectedResults.A(0xF1);
    validateSingleInstruction("NEG");
}

TEST_F(Z80CpuTestFixture, CCF_CASE_1) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(CARRY_BIT, true);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    expectedResults.CF(false);
    expectedResults.HF(false);
    expectedResults.NF(false);
    expectedResults.NF(false);
    expectedResults.PF(false);
    validateSingleInstruction("CCF");
}

TEST_F(Z80CpuTestFixture, CCF_CASE_2) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(CARRY_BIT, false);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    expectedResults.CF(true);
    expectedResults.HF(false);
    expectedResults.NF(false);
    expectedResults.NF(false);
    expectedResults.PF(false);
    validateSingleInstruction("CCF");
}


TEST_F(Z80CpuTestFixture, SCF_CASE_1) { // NOLINT
    auto flags = bitset<8>(0);
    flags.set(CARRY_BIT, false);
    cpuSet(ByteCpuRegisterSymbol::F, (int) flags.to_ulong());

    expectedResults.CF(true);
    expectedResults.HF(false);
    expectedResults.NF(false);
    expectedResults.NF(false);
    expectedResults.PF(false);
    validateSingleInstruction("SCF");
}

TEST_F(Z80CpuTestFixture, NOP) { // NOLINT
    validateSingleInstruction("NOP");
}

TEST_F(Z80CpuTestFixture, HALT) { // NOLINT
    validateSingleInstruction("HALT");
}

TEST_F(Z80CpuTestFixture, DI) { // NOLINT
    validateSingleInstruction("DI");
}

TEST_F(Z80CpuTestFixture, EI) { // NOLINT
    validateSingleInstruction("EI");
}

TEST_F(Z80CpuTestFixture, IM_1) { // NOLINT
    validateSingleInstruction("IM 1");
}

TEST_F(Z80CpuTestFixture, IM_2) { // NOLINT
    validateSingleInstruction("IM 2");
}

TEST_F(Z80CpuTestFixture, IM_3) { // NOLINT
    validateSingleInstruction("IM 2");
}
