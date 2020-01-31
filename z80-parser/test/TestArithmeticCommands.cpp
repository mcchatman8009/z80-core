#include "Z80ParserTestFixture.h"
#include <vector>

using namespace std;


TEST_F(Z80ParserTestFixture, ADD_COMPLETE) { // NOLINT
    string code = R"CODE(
        add a,a
        add a,b
        add a,c
        add a,d
        add a,e
        add a,h
        add a,l
        add a,ixh
        add a,ixl
        add a,iyh
        add a,ixl
        add a,(hl)
        add a,(ix+n)
        add a,(iy+n)
        add a,$FF        ;8-bit constant

        add hl,bc
        add hl,de
        add hl,hl
        add hl,sp

        add ix,bc
        add ix,de
        add ix,ix
        add ix,sp

        add iy,bc
        add iy,de
        add iy,iy
        add iy,sp
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, ADC_COMPLETE) { // NOLINT
    string code = R"CODE(
        adc a,a
        adc a,b
        adc a,c
        adc a,d
        adc a,e
        adc a,h
        adc a,l
        adc a,ixh
        adc a,ixl
        adc a,iyh
        adc a,iyl
        adc a,(hl)
        adc a,(ix+n)
        adc a,(iy+n)
        adc a,n        ;(8-bit number)

        adc hl,bc
        adc hl,de
        adc hl,hl
        adc hl,sp
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, SUB_COMPLETE) { // NOLINT
    string code = R"CODE(
        sub a
        sub b
        sub c
        sub d
        sub e
        sub h
        sub l
        sub n        ;8 bit constant

        sub (hl)
        sub (ix+n)
        sub (iy+n)
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, SBC_COMPLETE) { // NOLINT
    string code = R"CODE(
        sbc a,a
        sbc a,b
        sbc a,c
        sbc a,d
        sbc a,e
        sbc a,h
        sbc a,l
        sbc a,ixh
        sbc a,ixl
        sbc a,iyh
        sbc a,iyl
        sbc a,(hl)
        sbc a,(ix+n)
        sbc a,(iy+n)

        sbc a,n        ;8 bits

        sbc hl,bc
        sbc hl,de
        sbc hl,hl
        sbc hl,sp
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}


TEST_F(Z80ParserTestFixture, AND_COMPLETE) { // NOLINT
    string code = R"CODE(
        and a
        and b
        and c
        and d
        and e
        and h
        and l
        and ixh
        and ixl
        and iyh
        and iyl
        and (hl)
        and (ix+n)
        and (iy+n)
        and n        ;8 bit constant
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, OR_COMPLETE) { // NOLINT
    string code = R"CODE(
        or a
        or b
        or c
        or d
        or e
        or h
        or l
        or ixh
        or ixl
        or iyh
        or iyl
        or (hl)
        or (ix+n)
        or (iy+n)
        or n        ;8 bit constant
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, XOR_COMPLETE) { // NOLINT
    string code = R"CODE(
        xor a
        xor b
        xor c
        xor d
        xor e
        xor h
        xor l
        xor ixh
        xor ixl
        xor iyh
        xor iyl
        xor (hl)
        xor (ix+n)
        xor (iy+n)
        xor n        ;8 bit constant
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, CP_COMPLETE) { // NOLINT
    string code = R"CODE(
        cp a
        cp b
        cp c
        cp d
        cp e
        cp h
        cp l
        cp ixh
        cp ixl
        cp iyh
        cp iyl
        cp (ix+n)
        cp (iy+n)
        cp n        ;8 bit constant
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, INC_COMPLETE) { // NOLINT
    string code = R"CODE(
        inc a
        inc b
        inc c
        inc d
        inc e
        inc h
        inc l
        inc ixh
        inc ixl
        inc iyh
        inc iyl
        inc (hl)
        inc (ix+n)
        inc (iy+n)

        inc bc
        inc de
        inc hl
        inc ix
        inc iy
        inc sp
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, DEC_COMPLETE) { // NOLINT
    string code = R"CODE(
        dec a
        dec b
        dec c
        dec d
        dec e
        dec h
        dec l
        dec ixh
        dec ixl
        dec iyh
        dec iyl
        dec (hl)
        dec (ix+n)
        dec (iy+n)

        dec bc
        dec de
        dec hl
        dec ix
        dec iy
        dec sp
    )CODE";

    performParse(code, [](Z80Parser& parser) {
        parser.program();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addAAndRegister) { // NOLINT
    performParse("add B", [](Z80Parser& parser) {
        parser.addAAndRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addAAndImmediateByte) { // NOLINT
    performParse("add $F2", [](Z80Parser& parser) {
        parser.addAAndImmediateByte();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addAAndHLPointer) { // NOLINT
    performParse("add (hl)", [](Z80Parser& parser) {
        parser.addAAndHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addAAndIXOffset) { // NOLINT
    performParse("add (ix + $f4)", [](Z80Parser& parser) {
        parser.addAAndIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addAAndIYOffset) { // NOLINT
    performParse("add (iy + $f4)", [](Z80Parser& parser) {
        parser.addAAndIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, addWithCarryAAndRegister) { // NOLINT
    performParse("adc d", [](Z80Parser& parser) {
        parser.addWithCarryAAndRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, subtractRegisterFromA) { // NOLINT
    performParse("sub d", [](Z80Parser& parser) {
        parser.subtractRegisterFromA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, subtractWithBorrowRegisterFromA) { // NOLINT
    performParse("sbc d", [](Z80Parser& parser) {
        parser.subtractWithBorrowRegisterFromA();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, andAWithRegister) { // NOLINT
    performParse("and a", [](Z80Parser& parser) {
        parser.andAWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, orAWithRegister) { // NOLINT
    performParse("or c", [](Z80Parser& parser) {
        parser.orAWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, xorAWithRegister) { // NOLINT
    performParse("XOR c", [](Z80Parser& parser) {
        parser.xorAWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, compareAWithRegister) { // NOLINT
    performParse("CP c", [](Z80Parser& parser) {
        parser.compareAWithRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementRegister) { // NOLINT
    performParse("INC c", [](Z80Parser& parser) {
        parser.incrementRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementHLPointer) { // NOLINT
    performParse("INC (HL)", [](Z80Parser& parser) {
        parser.incrementHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementIXOffset) { // NOLINT
    performParse("INC (IX + 20)", [](Z80Parser& parser) {
        parser.incrementIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, incrementIYOffset) { // NOLINT
    performParse("INC (iy + 20)", [](Z80Parser& parser) {
        parser.incrementIYOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementRegister) { // NOLINT
    performParse("DEC a", [](Z80Parser& parser) {
        parser.decrementRegister();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementHLPointer) { // NOLINT
    performParse("DEC (HL)", [](Z80Parser& parser) {
        parser.decrementHLPointer();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementIXOffset) { // NOLINT
    performParse("DEC (ix + 30)", [](Z80Parser& parser) {
        parser.decrementIXOffset();
        ASSERT_TRUE(true);
    });
}

TEST_F(Z80ParserTestFixture, decrementIYOffset) { // NOLINT
    performParse("DEC (iy + 30)", [](Z80Parser& parser) {
        parser.decrementIYOffset();
        ASSERT_TRUE(true);
    });
}
