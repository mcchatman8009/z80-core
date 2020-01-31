grammar Z80;

program:
    (statement EOL)+
;

statement:
   label? (instruction )? comment?
;

instruction:
    byteLoadCommand |
    wordLoadCommand |
    exchagneAndBlockTransfrerCommand |
    arithmeticCommand |
    arithmeticControlCommand |
    wordArithemeticCommand |
    rotateCommamd |
    bitManipulationCommand |
    branchCommand |
    inputAndOutpuCommand
;

aShadowRegister:
    'A\'' |
    'a\''
;
fShadowRegister:
    'f\'' |
    'F\''
;
bShadowRegister:
    'b\'' |
    'B\''
;
cShadowRegister:
    'c\'' |
    'C\''
;
dShadowRegister:
    'd\'' |
    'D\''
;
eShadowRegister:
    'e\'' |
    'E\''
;
hShadowRegister:
    'h\'' |
    'H\''
;
lShadowRegister:
    'l\'' |
    'L\''
;
aRegister:
    'A' |
    'a' |
    aShadowRegister
;
fRegister:
    'F' |
    'f' |
    fShadowRegister
;
afRegister:
    'AF' |
    'af' |
    afShadowRegister
;
afShadowRegister:
    'AF\'' |
    'af\''
;
bcShadowRegister:
    'BC\'' |
    'bc\''
;
deShadowRegister:
    'DE\'' |
    'de\''
;
hlShadowRegister:
    'HL\'' |
    'hl\''
;
bRegister:
    'B' |
    'b' |
    bShadowRegister
;
cRegister:
    'c' |
    'C' |
    cShadowRegister
;
bcRegister:
    'BC' |
    'bc' |
    bcShadowRegister
;
dRegister:
    'D' |
    'd' |
    dShadowRegister
;
eRegister:
    'E' |
    'e' |
    eShadowRegister
;
deRegister:
    'de' |
    'DE' |
    deShadowRegister
;
hRegister:
    'h' |
    'H' |
    hShadowRegister
;
lRegister:
    'L' |
    'l' |
    lShadowRegister
;
hlRegister:
    'hl' |
    'HL' |
    hlShadowRegister
;
iRegister:
    'i' |
    'I'
;
rRegister:
    'r' |
    'R'
;
ixRegister:
    'ix' |
    'IX'
;
iyRegister:
    'iy' |
    'IY'
;
ixHighRegister:
    'ixh' |
    'IXH'
;
ixLowRegister:
    'ixl' |
    'IXL'
;
iyHighRegister:
    'iyh' |
    'IYH'
;
iyLowRegister:
    'iyl' |
    'IYL'
;
spRegister:
    'sp' |
    'SP'
;
pcRegister:
    'PC' |
    'pc'
;
hlPointer:
    '(' hlRegister ')'
;
bcPointer:
    '(' bcRegister ')'
;
dePointer:
    '(' deRegister ')'
;
spPointer:
    '(' spRegister ')'
;
cPointer:
    '(' cRegister ')'
;
ixPointerWithOffset:
    '(' ixRegister '+'  number ')'
;
iyPointerWithOffset:
    '(' iyRegister '+'  number')'
;
numberPointer:
    '(' number')'
;
simpleByteRegister:
    bRegister |
    cRegister |
    dRegister |
    eRegister |
    hRegister |
    lRegister |
    aRegister
;

loadCommandName:
    'LD' |
    'ld'
;
// LD r, r
loadByteRegisterWithByteRegister:
    loadCommandName dest=simpleByteRegister ',' source=simpleByteRegister
;
// LD r, n
loadByteRegisterWithImmediateByte:
    loadCommandName dest=simpleByteRegister ',' source=number
;
// LD r, (HL)
loadByteRegisterWithHLPointer:
    loadCommandName dest=simpleByteRegister ',' source=hlPointer
;
// LD r, (IX + d)
loadByteRegisterWithIXOffset:
    loadCommandName dest=simpleByteRegister ',' source=ixPointerWithOffset
;
// LD r, (IY + d)
loadByteRegisterWithIYOffset:
    loadCommandName dest=simpleByteRegister ',' source=iyPointerWithOffset
;
// LD (HL), r
loadHLPointerWithRegister:
    loadCommandName dest=hlPointer ',' source=simpleByteRegister
;
// LD (IX+d), r
loadIXOffsetWithRegister:
    loadCommandName dest=ixPointerWithOffset ',' source=simpleByteRegister
;
// LD (IY+d), r
loadIYOffsetWithRegister:
    loadCommandName dest=iyPointerWithOffset ',' source=simpleByteRegister
;
// LD (HL), n
loadHLPointerWithImmediateByte:
    loadCommandName dest=hlPointer ',' source=number
;
// LD (IX+d), n
loadIXOffsetWithImmediateByte:
    loadCommandName dest=ixPointerWithOffset ',' source=number
;
// LD (IY+d), n
loadIYOffsetWithImmediateByte:
    loadCommandName dest=iyPointerWithOffset ',' source=number
;
// LD A, (BC)
loadAWithBCPointer:
    loadCommandName dest=aRegister ',' source=bcPointer
;
// LD A, (DE)
loadAWithDEPointer:
    loadCommandName dest=aRegister ',' source=dePointer
;
// LD A, (nn)
loadAWithNNPointer:
    loadCommandName dest=aRegister ',' source=numberPointer
;
// LD (BC), A
loadBCPointerWithA:
    loadCommandName dest=bcPointer ',' source=aRegister
;
// LD (DE), A
loadDEPointerWithA:
    loadCommandName dest=dePointer ',' source=aRegister
;
// LD (NN), A
loadNNPointerWithA:
    loadCommandName dest=numberPointer ',' source=aRegister
;
// LD A, I
loadAWithI:
    loadCommandName dest=aRegister ',' source=iRegister
;
// LD A, R
loadAWithR:
    loadCommandName dest=aRegister ',' source=rRegister
;
// LD I, A
loadIWithA:
    loadCommandName dest=iRegister ',' source=aRegister
;
// LD R, A
loadRWithA:
    loadCommandName dest=rRegister ',' source=aRegister
;

// LD r, IXH
loadRegisterWithIXHigh:
    loadCommandName dest=simpleByteRegister ',' source=ixHighRegister
;
// LD r, IXL
loadRegisterWithIXLow:
    loadCommandName dest=simpleByteRegister ',' source=ixLowRegister
;
// LD r, IYH
loadRegisterWithIYHigh:
    loadCommandName dest=simpleByteRegister ',' source=iyHighRegister
;
// LD r, IYL
loadRegisterWithIYLow:
    loadCommandName dest=simpleByteRegister ',' source=iyLowRegister
;
// LD IXH, r
loadIXHighWithRegister:
    loadCommandName dest=ixHighRegister ',' source=simpleByteRegister
;

ixHighOrLowRegister:
    ixHighRegister |
    ixLowRegister
;
iyHighOrLowRegister:
    iyHighRegister |
    iyLowRegister
;

// LD IX(L|H), IX(L|H)
loadIXNibbles:
    loadCommandName dest=ixHighOrLowRegister ',' source=ixHighOrLowRegister
;

// LD IY(L|H), IY(L|H)
loadIYNibbles:
    loadCommandName dest=iyHighOrLowRegister ',' source=iyHighOrLowRegister
;

// LD IXL, r
loadIXLowWithRegister:
    loadCommandName dest=ixLowRegister ',' source=simpleByteRegister
;
// LD IYH, r
loadIYHighWithRegister:
    loadCommandName dest=iyHighRegister ',' source=simpleByteRegister
;
// LD IYL, r
loadIYLowWithRegister:
    loadCommandName dest=iyLowRegister ',' source=simpleByteRegister
;

byteLoadCommand:
    loadByteRegisterWithByteRegister |
    loadByteRegisterWithImmediateByte |
    loadByteRegisterWithHLPointer |
    loadByteRegisterWithIXOffset |
    loadByteRegisterWithIYOffset |
    loadHLPointerWithRegister |
    loadIXOffsetWithRegister |
    loadIYOffsetWithRegister |
    loadHLPointerWithImmediateByte |
    loadIXOffsetWithImmediateByte |
    loadIYOffsetWithImmediateByte |
    loadAWithBCPointer |
    loadAWithDEPointer |
    loadAWithNNPointer |
    loadBCPointerWithA |
    loadDEPointerWithA |
    loadNNPointerWithA  |
    loadAWithI |
    loadAWithR |
    loadIWithA |
    loadRWithA |
    loadRegisterWithIXHigh |
    loadRegisterWithIXLow |
    loadRegisterWithIYHigh |
    loadRegisterWithIYLow |
    loadIXHighWithRegister |
    loadIXLowWithRegister |
    loadIYHighWithRegister |
    loadIYLowWithRegister |
    loadIYNibbles |
    loadIXNibbles
;

simpleWordRegister:
    bcRegister |
    deRegister |
    hlRegister |
    spRegister
;

// LD r16, nn
loadWordWithImmediateWord:
    loadCommandName dest=simpleWordRegister ',' source=number
;
// LD IX, nn
loadIXWithImmediateWord:
    loadCommandName dest=ixRegister ',' source=number
;
// LD IY, nn
loadIYWithImmediateWord:
    loadCommandName dest=iyRegister ',' source=number
;

// LD r16, (nn)
loadWordRegisterWithNNPointer:
    loadCommandName dest=simpleWordRegister ',' source=numberPointer
;
// LD IX, (nn)
loadIXWithNNPointer:
    loadCommandName dest=ixRegister ',' source=numberPointer
;
// LD IY, (nn)
loadIYWithNNPointer:
    loadCommandName dest=iyRegister ',' source=numberPointer
;
// LD (nn), r16
loadNNPointerWithWordRegister:
    loadCommandName dest=numberPointer ',' source=simpleWordRegister
;
// LD (nn), IX
loadNNPointerWithIX:
    loadCommandName dest=numberPointer ',' source=ixRegister
;
// LD (nn), IX
loadNNPointerWithIY:
    loadCommandName dest=numberPointer ',' source=iyRegister
;
// LD SP, HL
loadSPWithHL:
    loadCommandName dest=spRegister ',' source=hlRegister
;
// LD SP, IX
loadSPWithIX:
    loadCommandName dest=spRegister ',' source=ixRegister
;
// LD SP, IY
loadSPWithIY:
    loadCommandName dest=spRegister ',' source=iyRegister
;
pushCommandName:
    'push' |
    'PUSH'
;
popCommandName:
    'POP' |
    'pop'
;
pushAndPopRegister:
    bcRegister |
    deRegister |
    hlRegister |
    afRegister |
;
// PUSH rr
pushWordRegister:
    pushCommandName  source=pushAndPopRegister
;
// PUSH IX
pushIX:
    pushCommandName  source=ixRegister
;
// PUSH IY
pushIY:
    pushCommandName  source=iyRegister
;

// POP rr
popWordRegister:
    popCommandName source=pushAndPopRegister
;
// POP IX
popIX:
    popCommandName source=ixRegister
;
// POP IY
popIY:
    popCommandName source=iyRegister
;
wordLoadCommand:
    loadWordWithImmediateWord |
    loadIXWithImmediateWord |
    loadIYWithImmediateWord |
    loadWordRegisterWithNNPointer |
    loadIXWithNNPointer |
    loadIYWithNNPointer |
    loadNNPointerWithIX |
    loadNNPointerWithIY |
    loadNNPointerWithWordRegister |
    loadSPWithHL |
    loadSPWithIX |
    loadSPWithIY |
    pushWordRegister |
    pushIX |
    pushIY |
    popWordRegister |
    popIX |
    popIY
;

exchangeCommandName:
    'ex' |
    'EX'
;
// EX DE, HL
exchangeDEWithHL:
    exchangeCommandName deRegister ',' hlRegister
;
// EX AF, AF'
exchangeAFWithShadowAF:
    exchangeCommandName afRegister ',' afRegister
;
// EXX
exchangeMultipleWordRegisters:
    'exx' |
    'EXX'
;
// EX (SP), HL
exchangeSPPointerWithHL:
    exchangeCommandName spPointer ',' hlRegister
;
// EX (SP), IX
exchangeSPPointerWithIX:
    exchangeCommandName spPointer ',' ixRegister
;
// EX (SP), IY
exchangeSPPointerWithIY:
    exchangeCommandName spPointer ',' iyRegister
;

// LDI
loadHLPointerIntoDEThenDecrementBCAndIncrementHL:
    'LDI' |
    'ldi'
;
// LDIR
loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat:
    'LDIR' |
    'ldir' |
;
// LDD
loadDEPointerWithHLPointerThenDecrementBCAndHL:
    'LDD' |
    'ldd' |
;
// LDDR
loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat:
    'LDDR' |
    'lddr' |
;
// CPI
compareAToHLPointerThenIncrementHLAndDecrementBC:
    'cpi' |
    'CPI'
;
// CPIR
compareAToHLPointerThenIncrementHLAndDecrementBCRepeat:
    'cpir' |
    'CPIR'
;
// CPD
compareAToHLPointerThenDecrementHLAndBC:
    'cpd' |
    'CPD'
;
// CPDR
compareAToHLPointerThenDecrementHLAndBCRepeat:
    'cpdr' |
    'CPDR'
;

exchagneAndBlockTransfrerCommand:
    exchangeDEWithHL |
    exchangeAFWithShadowAF |
    exchangeMultipleWordRegisters |
    exchangeSPPointerWithHL |
    exchangeSPPointerWithIX |
    exchangeSPPointerWithIY |
    loadHLPointerIntoDEThenDecrementBCAndIncrementHL |
    loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat |
    loadDEPointerWithHLPointerThenDecrementBCAndHL |
    loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat |
    compareAToHLPointerThenIncrementHLAndDecrementBC |
    compareAToHLPointerThenIncrementHLAndDecrementBCRepeat |
    compareAToHLPointerThenDecrementHLAndBC |
    compareAToHLPointerThenDecrementHLAndBCRepeat
;

addCommandName:
    'add' |
    'ADD'
;
addWithCarryCommandName:
    'adc' |
    'ADC'
;
subtractCommandName:
    'sub' |
    'SUB'
;
subtractWithBorrowCommandName:
    'sbc' |
    'SBC'
;
andCommandName:
    'and' |
    'AND'
;
orCommandName:
    'or' |
    'OR'
;
xorCommandName:
    'xor' |
    'XOR'
;
compareCommandName:
    'cp' |
    'CP'
;
incrementCommandName:
    'INC' |
    'inc'
;
decrementCommandName:
    'DEC' |
    'dec'
;

addAAndRegister:
    addCommandName source=simpleByteRegister |
    addCommandName aRegister ',' source=simpleByteRegister
;
addAAndImmediateByte:
    addCommandName source=number |
    addCommandName aRegister ',' source=number
;
addAAndIXH:
    addCommandName source=ixHighRegister |
    addCommandName aRegister ',' source=ixHighRegister
;
addAAndIXL:
    addCommandName source=ixLowRegister |
    addCommandName aRegister ',' source=ixLowRegister
;
addAAndIYH:
    addCommandName source=iyHighRegister |
    addCommandName aRegister ',' source=iyHighRegister
;
addAAndIYL:
    addCommandName source=iyLowRegister |
    addCommandName aRegister ',' source=iyLowRegister
;
addAAndHLPointer:
    addCommandName source=hlPointer |
    addCommandName aRegister ',' source=hlPointer
;
addAAndIXOffset:
    addCommandName source=ixPointerWithOffset |
    addCommandName aRegister ',' source=ixPointerWithOffset
;
addAAndIYOffset:
    addCommandName source=iyPointerWithOffset |
    addCommandName aRegister ',' source=iyPointerWithOffset
;
addWithCarryAAndRegister:
    addWithCarryCommandName source=simpleByteRegister |
    addWithCarryCommandName aRegister ',' source=simpleByteRegister
;
addWithCarryAAndHLPointer:
    addWithCarryCommandName source=hlPointer |
    addWithCarryCommandName aRegister ',' source=hlPointer
;
addWithCarryAAndImmediate:
    addWithCarryCommandName source=number |
    addWithCarryCommandName aRegister ',' source=number
;
addWithCarryAAndIXOffset:
    addWithCarryCommandName source=ixPointerWithOffset |
    addWithCarryCommandName aRegister ',' source=ixPointerWithOffset
;
addWithCarryAAndIYOffset:
    addWithCarryCommandName source=iyPointerWithOffset |
    addWithCarryCommandName aRegister ',' source=iyPointerWithOffset
;
addWithCarryAAndIXH:
    addWithCarryCommandName source=ixHighRegister |
    addWithCarryCommandName aRegister ',' source=ixHighRegister
;
addWithCarryAAndIXL:
    addWithCarryCommandName source=ixLowRegister |
    addWithCarryCommandName aRegister ',' source=ixLowRegister
;
addWithCarryAAndIYH:
    addWithCarryCommandName source=iyHighRegister |
    addWithCarryCommandName aRegister ',' source=iyHighRegister
;
addWithCarryAAndIYL:
    addWithCarryCommandName source=iyLowRegister |
    addWithCarryCommandName aRegister ',' source=iyLowRegister
;
subtractRegisterFromA:
    subtractCommandName source=simpleByteRegister |
    subtractCommandName aRegister ',' source=simpleByteRegister
;
subtractHLPointerFromA:
    subtractCommandName source=hlPointer |
    subtractCommandName aRegister ',' source=hlPointer
;
subtractImmediateFromA:
    subtractCommandName source=number |
    subtractCommandName aRegister ',' source=number
;
subtractIXOffsetFromA:
    subtractCommandName source=ixPointerWithOffset |
    subtractCommandName aRegister ',' source=ixPointerWithOffset
;
subtractIYOffsetFromA:
    subtractCommandName source=iyPointerWithOffset |
    subtractCommandName aRegister ',' source=iyPointerWithOffset
;
subtractIXHighOrLowFromA:
    subtractCommandName source=ixHighOrLowRegister |
    subtractCommandName aRegister ',' source=ixHighOrLowRegister
;
subtractIYHighOrLowFromA:
    subtractCommandName source=iyHighOrLowRegister |
    subtractCommandName aRegister ',' source=iyHighOrLowRegister
;
subtractWithBorrowRegisterFromA:
    subtractWithBorrowCommandName source=simpleByteRegister |
    subtractWithBorrowCommandName aRegister ',' source=simpleByteRegister
;
subtractWithBorrowHLPointerFromA:
    subtractWithBorrowCommandName source=hlPointer |
    subtractWithBorrowCommandName aRegister ',' source=hlPointer
;
subtractWithBorrowIXOffsetFromA:
    subtractWithBorrowCommandName source=ixPointerWithOffset |
    subtractWithBorrowCommandName aRegister ',' source=ixPointerWithOffset
;
subtractWithBorrowIYOffsetFromA:
    subtractWithBorrowCommandName source=iyPointerWithOffset |
    subtractWithBorrowCommandName aRegister ',' source=iyPointerWithOffset
;
subtractWithBorrowImmediateFromA:
    subtractWithBorrowCommandName source=number |
    subtractWithBorrowCommandName aRegister ',' source=number
;
subtractWithBorrowIXHFromA:
    subtractWithBorrowCommandName source=ixHighRegister |
    subtractWithBorrowCommandName aRegister ',' source=ixHighRegister
;
subtractWithBorrowIXLFromA:
    subtractWithBorrowCommandName source=ixLowRegister |
    subtractWithBorrowCommandName aRegister ',' source=ixLowRegister
;
subtractWithBorrowIYHFromA:
    subtractWithBorrowCommandName source=iyHighRegister |
    subtractWithBorrowCommandName aRegister ',' source=iyHighRegister
;
subtractWithBorrowIYLFromA:
    subtractWithBorrowCommandName source=iyLowRegister |
    subtractWithBorrowCommandName aRegister ',' source=iyLowRegister
;
andAWithRegister:
    andCommandName source=simpleByteRegister |
    andCommandName aRegister ',' source=simpleByteRegister
;
andAWithImmediate:
    andCommandName source=number |
    andCommandName aRegister ',' source=number
;
andAWithHLPointer:
    andCommandName source=hlPointer |
    andCommandName aRegister ',' source=hlPointer
;
andAWithIXOffset:
    andCommandName source=ixPointerWithOffset |
    andCommandName aRegister ',' source=ixPointerWithOffset
;
andAWithIYOffset:
    andCommandName source=iyPointerWithOffset |
    andCommandName aRegister ',' source=iyPointerWithOffset
;
andAWithIXH:
    andCommandName source=ixHighRegister |
    andCommandName aRegister ',' source=ixHighRegister
;
andAWithIXL:
    andCommandName source=ixLowRegister |
    andCommandName aRegister ',' source=ixLowRegister
;
andAWithIYH:
    andCommandName source=iyHighRegister |
    andCommandName aRegister ',' source=iyHighRegister
;
andAWithIYL:
    andCommandName source=iyLowRegister |
    andCommandName aRegister ',' source=iyLowRegister
;
orAWithRegister:
    orCommandName source=simpleByteRegister |
    orCommandName aRegister ',' source=simpleByteRegister
;
orAWithImmediate:
    orCommandName source=number |
    orCommandName aRegister ',' source=number
;
orAWithHLPointer:
    orCommandName source=hlPointer |
    orCommandName aRegister ',' source=hlPointer
;
orAWithIXOffset:
    orCommandName source=ixPointerWithOffset |
    orCommandName aRegister ',' source=ixPointerWithOffset
;
orAWithIYOffset:
    orCommandName source=iyPointerWithOffset |
    orCommandName aRegister ',' source=iyPointerWithOffset
;
orAWithIXH:
    orCommandName source=ixHighRegister |
    orCommandName aRegister ',' source=ixHighRegister
;
orAWithIXL:
    orCommandName source=ixLowRegister |
    orCommandName aRegister ',' source=ixLowRegister
;
orAWithIYH:
    orCommandName source=iyHighRegister |
    orCommandName aRegister ',' source=iyHighRegister
;
orAWithIYL:
    orCommandName source=iyLowRegister |
    orCommandName aRegister ',' source=iyLowRegister
;
xorAWithRegister:
    xorCommandName source=simpleByteRegister |
    xorCommandName aRegister ',' source=simpleByteRegister
;
xorAWithImmediate:
    xorCommandName source=number |
    xorCommandName aRegister ',' source=number
;
xorAWithHLPointer:
    xorCommandName source=hlPointer |
    xorCommandName aRegister ',' source=hlPointer
;
xorAWithIXOffset:
    xorCommandName source=ixPointerWithOffset |
    xorCommandName aRegister ',' source=ixPointerWithOffset
;
xorAWithIYOffset:
    xorCommandName source=iyPointerWithOffset |
    xorCommandName aRegister ',' source=iyPointerWithOffset
;
xorAWithIXH:
    xorCommandName source=ixHighRegister |
    xorCommandName aRegister ',' source=ixHighRegister
;
xorAWithIXL:
    xorCommandName source=ixLowRegister |
    xorCommandName aRegister ',' source=ixLowRegister
;
xorAWithIYH:
    xorCommandName source=iyHighRegister |
    xorCommandName aRegister ',' source=iyHighRegister
;
xorAWithIYL:
    xorCommandName source=iyLowRegister |
    xorCommandName aRegister ',' source=iyLowRegister
;
compareAWithRegister:
    compareCommandName source=simpleByteRegister |
    compareCommandName aRegister ',' source=simpleByteRegister
;
compareAWithHLPointer:
    compareCommandName source=hlPointer |
    compareCommandName aRegister ',' source=hlPointer
;
compareAWithImmediate:
    compareCommandName source=number |
    compareCommandName aRegister ',' source=number
;
compareAWithIXOffset:
    compareCommandName source=ixPointerWithOffset |
    compareCommandName aRegister ',' source=ixPointerWithOffset
;
compareAWithIYOffset:
    compareCommandName source=iyPointerWithOffset |
    compareCommandName aRegister ',' source=iyPointerWithOffset
;
compareAWithIXH:
    compareCommandName source=ixHighRegister |
    compareCommandName aRegister ',' source=ixHighRegister
;
compareAWithIXL:
    compareCommandName source=ixLowRegister |
    compareCommandName aRegister ',' source=ixLowRegister
;
compareAWithIYH:
    compareCommandName source=iyHighRegister |
    compareCommandName aRegister ',' source=iyHighRegister
;
compareAWithIYL:
    compareCommandName source=iyLowRegister |
    compareCommandName aRegister ',' source=iyLowRegister
;
incrementRegister:
    incrementCommandName source=simpleByteRegister
;
incrementIXH:
    incrementCommandName source=ixHighRegister
;
incrementIXL:
    incrementCommandName source=ixLowRegister
;
incrementIYH:
    incrementCommandName source=iyHighRegister
;
incrementIYL:
    incrementCommandName source=iyLowRegister
;
incrementHLPointer:
    incrementCommandName source=hlPointer
;
incrementIXOffset:
    incrementCommandName source=ixPointerWithOffset
;
incrementIYOffset:
    incrementCommandName source=iyPointerWithOffset
;
decrementRegister:
    decrementCommandName source=simpleByteRegister
;
decrementIXH:
    decrementCommandName source=ixHighRegister
;
decrementIXL:
    decrementCommandName source=ixLowRegister
;
decrementIYH:
    decrementCommandName source=iyHighRegister
;
decrementIYL:
    decrementCommandName source=iyLowRegister
;
decrementHLPointer:
    decrementCommandName source=hlPointer
;
decrementIXOffset:
    decrementCommandName source=ixPointerWithOffset
;
decrementIYOffset:
    decrementCommandName source=iyPointerWithOffset
;

arithmeticCommand:
    addAAndRegister |
    addAAndImmediateByte |
    addAAndIXH |
    addAAndIXL |
    addAAndIYH |
    addAAndIYL |
    addAAndHLPointer |
    addAAndIXOffset |
    addAAndIYOffset |
    addWithCarryAAndRegister |
    addWithCarryAAndHLPointer |
    addWithCarryAAndImmediate |
    addWithCarryAAndIXOffset |
    addWithCarryAAndIYOffset |
    addWithCarryAAndIXH |
    addWithCarryAAndIXL |
    addWithCarryAAndIYH |
    addWithCarryAAndIYL |
    subtractRegisterFromA |
    subtractHLPointerFromA |
    subtractImmediateFromA |
    subtractIXOffsetFromA |
    subtractIYOffsetFromA |
    subtractWithBorrowRegisterFromA |
    subtractWithBorrowHLPointerFromA |
    subtractWithBorrowIXOffsetFromA |
    subtractWithBorrowIYOffsetFromA |
    subtractWithBorrowImmediateFromA |
    subtractWithBorrowIXHFromA |
    subtractWithBorrowIXLFromA |
    subtractWithBorrowIYHFromA |
    subtractWithBorrowIYLFromA |
    subtractIXHighOrLowFromA |
    subtractIYHighOrLowFromA |
    andAWithRegister |
    andAWithImmediate |
    andAWithHLPointer |
    andAWithIXOffset |
    andAWithIYOffset |
    andAWithIXH |
    andAWithIXL |
    andAWithIYH |
    andAWithIYL |
    orAWithRegister |
    orAWithImmediate |
    orAWithHLPointer |
    orAWithIXOffset |
    orAWithIYOffset |
    orAWithIXH |
    orAWithIXL |
    orAWithIYH |
    orAWithIYL |
    xorAWithRegister |
    xorAWithImmediate |
    xorAWithHLPointer |
    xorAWithIXOffset |
    xorAWithIYOffset |
    xorAWithIXH |
    xorAWithIXL |
    xorAWithIYH |
    xorAWithIYL |
    compareAWithRegister |
    compareAWithHLPointer |
    compareAWithImmediate |
    compareAWithIXOffset |
    compareAWithIYOffset |
    compareAWithIXH |
    compareAWithIXL |
    compareAWithIYH |
    compareAWithIYL |
    incrementRegister |
    incrementIXH |
    incrementIXL |
    incrementIYH |
    incrementIYL |
    incrementHLPointer |
    incrementIXOffset |
    incrementIYOffset |
    decrementRegister |
    decrementIXH |
    decrementIXL |
    decrementIYH |
    decrementIYL |
    decrementHLPointer |
    decrementIXOffset |
    decrementIYOffset
;

// DAA
decimalAdjustA:
    'daa' |
    'DAA'
;
// CPL
complementA:
    'CPL' |
    'cpl'
;
// NEG
negateA:
    'NEG' |
    'neg'
;
//CCF
completementCarryFlag:
    'CCF' |
    'ccf'
;
// SCF
setCarryFlag:
    'SCF' |
    'scf'
;
// NOP
nop:
    'NOP' |
    'nop'
;
// HALT
halt:
    'halt' |
    'HALT'
;
// DI
disableInterrupts:
    'DI' |
    'di'
;
// DI
enableInterrupts:
    'ei' |
    'EI'
;

// IM
setInterruptMode:
    ('IM' | 'im') source=number
;

arithmeticControlCommand:
    decimalAdjustA |
    complementA |
    negateA |
    completementCarryFlag |
    setCarryFlag |
    nop |
    halt |
    disableInterrupts |
    enableInterrupts |
    setInterruptMode
;

// ADD HL, r
addHLAndWordRegister:
    addCommandName dest=hlRegister ',' source=simpleWordRegister
;
// ADC HL, r
addWithCarryHLAndWordRegister:
    addWithCarryCommandName dest=hlRegister ',' source=simpleWordRegister
;
// SBC HL, r
subtractWithCarryWordRegisterFromHL:
    subtractWithBorrowCommandName dest=hlRegister ',' source=simpleWordRegister
;

simpleIXAdditionRegister:
    bcRegister |
    deRegister |
    ixRegister |
    spRegister |
;

simpleIYAdditionRegister:
    bcRegister |
    deRegister |
    iyRegister |
    spRegister |
;

// ADD IX, rr
addIXWithRegister:
    addCommandName dest=ixRegister ',' source=simpleIXAdditionRegister
;
// ADD IY, rr
addIYWithRegister:
    addCommandName dest=iyRegister ',' source=simpleIYAdditionRegister
;
// INC rr
incrementWordRegister:
    incrementCommandName source=simpleWordRegister
;
// INC IX
incrementIX:
    incrementCommandName source=ixRegister
;
// INC IY
incrementIY:
    incrementCommandName source=iyRegister
;
// DEC rr
decrementWordRegister:
    decrementCommandName source=simpleWordRegister
;
// DEC IX
decrementIX:
    decrementCommandName source=ixRegister
;
// DEC IY
decrementIY:
    decrementCommandName source=iyRegister
;

wordArithemeticCommand:
    addHLAndWordRegister |
    addWithCarryHLAndWordRegister |
    subtractWithCarryWordRegisterFromHL |
    addIXWithRegister |
    addIYWithRegister |
    addIYWithRegister |
    incrementWordRegister |
    incrementIX |
    incrementIY |
    decrementWordRegister |
    decrementIX |
    decrementIY
;

// RLCA
rotateLeftCircularA:
    ('RLCA' | 'rlca')
;
// RLA
rotateLeftThroughCarryA:
    ('RLA' | 'rla')
;
// RRCA
rotateRightCircularA:
    ('RRCA' | 'rrca')
;
// RRA
rotateRightThroughtCarryA:
    ('RRA' | 'rra')
;
rotateLeftCircularCommandName:
    ('RLC' | 'rlc')
;
rotateLeftThroughCarryCommandName:
    ('RL' | 'rl')
;
rotateRightCircularCommandName:
    ('RRC' | 'rrc')
;
rotateRightThroughCarryCommandName:
    ('RR' | 'rr')
;
shiftLeftArithmeticCommandName:
    ('sla' | 'SLA')
;
shiftLeftLogicialCommandName:
    ('sll' | 'SLL')
;
shiftRightArithmeticCommandName:
    ('sra' | 'SRA')
;
shiftRightLogicalCommandName:
    ('srl' | 'SRL')
;
rotateDigitLeftCommandName:
    ('RLD' | 'rld')
;
rotateDigitRightCommandName:
    ('RRD' | 'rrd')
;


// RLC r
rotateLeftCircularRegister:
    rotateLeftCircularCommandName source=simpleByteRegister
;
// RLC (HL)
rotateLeftCircularHLPointer:
    rotateLeftCircularCommandName source=hlPointer
;
// RLC (ix+d)
rotateLeftCircularIXOffset:
    rotateLeftCircularCommandName source=ixPointerWithOffset
;
// RLC (iy+d)
rotateLeftCircularIYOffset:
    rotateLeftCircularCommandName source=iyPointerWithOffset
;
// RL r
rotateLeftThroughCarryRegister:
    rotateLeftThroughCarryCommandName source=simpleByteRegister
;
// RL (HL)
rotateLeftThroughCarryHLPointer:
    rotateLeftThroughCarryCommandName source=hlPointer
;
// RL (ix+d)
rotateLeftThroughCarryIXOffset:
    rotateLeftThroughCarryCommandName source=ixPointerWithOffset
;
// RL (iy+d)
rotateLeftThroughCarryIYOffset:
    rotateLeftThroughCarryCommandName source=iyPointerWithOffset
;

// RRC r
rotateRightCircularRegister:
    rotateRightCircularCommandName source=simpleByteRegister
;
// RRC (HL)
rotateRightCircularHLPointer:
    rotateRightCircularCommandName source=hlPointer
;
// RRC (ix+d)
rotateRightCircularIXOffset:
    rotateRightCircularCommandName source=ixPointerWithOffset
;
// RRC (iy+d)
rotateRightCircularIYOffset:
    rotateRightCircularCommandName source=iyPointerWithOffset
;
// RR r
rotateRightThroughCarryRegister:
    rotateRightThroughCarryCommandName source=simpleByteRegister
;
// RR (HL)
rotateRightThroughCarryHLPointer:
    rotateRightThroughCarryCommandName source=hlPointer
;
// RR (ix+d)
rotateRightThroughCarryIXOffset:
    rotateRightThroughCarryCommandName source=ixPointerWithOffset
;
// RR (iy+d)
rotateRightThroughCarryIYOffset:
    rotateRightThroughCarryCommandName source=iyPointerWithOffset
;

// SLA
shiftLeftArithmetic:
    shiftLeftArithmeticCommandName source=simpleByteRegister
;
// SLL
shiftLeftLogical:
    shiftLeftLogicialCommandName source=simpleByteRegister
;
// SRA
shiftRightArithmetic:
    shiftRightArithmeticCommandName source=simpleByteRegister
;
// SRL
shiftRightLogical:
    shiftRightLogicalCommandName source=simpleByteRegister
;

//RLD
rotateDigitLeft:
    rotateDigitLeftCommandName
;
//RRD
rotateDigitRight:
    rotateDigitRightCommandName
;

rotateCommamd:
    rotateLeftCircularA |
    rotateLeftThroughCarryA |
    rotateRightCircularA |
    rotateRightThroughtCarryA |
    rotateLeftCircularRegister |
    rotateLeftCircularHLPointer |
    rotateLeftCircularIXOffset  |
    rotateLeftCircularIYOffset |
    rotateLeftThroughCarryRegister |
    rotateLeftThroughCarryHLPointer |
    rotateLeftThroughCarryIXOffset |
    rotateLeftThroughCarryIYOffset |
    rotateRightCircularRegister |
    rotateRightCircularHLPointer |
    rotateRightCircularIXOffset |
    rotateRightCircularIYOffset |
    rotateRightThroughCarryRegister |
    rotateRightThroughCarryHLPointer |
    rotateRightThroughCarryIXOffset |
    rotateRightThroughCarryIYOffset |
    shiftLeftArithmetic |
    shiftLeftLogical |
    shiftRightArithmetic |
    shiftRightLogical |
    rotateDigitLeft |
    rotateDigitRight
;

bitCommandName:
    'BIT' | 'bit'
;

setCommandName:
    'SET' | 'set'
;

resetBitCommandName:
    'RES' | 'res'
;

testBitInRegister:
    bitCommandName bit=number ',' source=simpleByteRegister
;
testBitInHLPointer:
    bitCommandName bit=number ',' source=hlPointer
;
testBitInIXOffset:
    bitCommandName bit=number ',' source=ixPointerWithOffset
;
testBitInIYOffset:
    bitCommandName bit=number ',' source=iyPointerWithOffset
;
setBitInRegister:
    setCommandName bit=number ',' source=simpleByteRegister
;
setBitInHLPointer:
    setCommandName bit=number ',' source=hlPointer
;
setBitInIXOffset:
    setCommandName bit=number ',' source=ixPointerWithOffset
;
setBitInIYOffset:
    setCommandName bit=number ',' source=iyPointerWithOffset
;
resetBitInRegister:
    resetBitCommandName bit=number ',' source=simpleByteRegister
;
resetBitHLPointer:
    resetBitCommandName bit=number ',' source=hlPointer
;
resetBitIXOffset:
    resetBitCommandName bit=number ',' source=ixPointerWithOffset
;
resetBitIYOffset:
    resetBitCommandName bit=number ',' source=iyPointerWithOffset
;

bitManipulationCommand:
    testBitInRegister |
    testBitInHLPointer |
    testBitInIXOffset |
    testBitInIYOffset |
    setBitInRegister |
    setBitInHLPointer |
    setBitInIXOffset |
    setBitInIYOffset |
    resetBitInRegister |
    resetBitHLPointer |
    resetBitIXOffset |
    resetBitIYOffset
;

jumpCondition:
    zero=('Z' | 'z') |
    notZero=('NZ' | 'nz') |
    carry=('C' | 'c') |
    notCarry=('NC' | 'nc') |
    parityOdd=('PO' | 'po') |
    parityEven=('PE' | 'pe') |
    positive=('P' | 'p') |
    negative=('M' | 'm')
;

jumpCommandName:
    'JP' | 'jp'
;
jumpRelativeCommandName:
    'JR' | 'jr'
;
jumpRelativeAndDecrementCommandName:
    'DJNZ' | 'djnz'
;
callCommandName:
    'CALL' | 'call'
;
returnCommandName:
    'RET' | 'ret'
;
returnAndEnableInterruptCommandName:
    'RETI' | 'reti'
;
returnFromNonMaskableInterruptCommandName:
    'RETN' | 'retn'
;
restartCommandName:
    'RST' | 'rst'
;
jumpToAbsoluteAddress:
    jumpCommandName address=number
;
jumpToAbsoluteAddressGivenCondition:
    jumpCommandName condition=jumpCondition address=number
;
jumpToRelativeAddress:
    jumpRelativeCommandName address=number
;
jumpToRelativeAddressGivenCondition:
    jumpRelativeCommandName condition=jumpCondition address=number
;
jumpToHL:
    jumpCommandName hlRegister |
    jumpCommandName hlPointer
;
jumpToIX:
    jumpCommandName '(' ixRegister ')'|
    jumpCommandName ixRegister
;
jumpToIY:
    jumpCommandName '(' iyRegister ')' |
    jumpCommandName iyRegister
;
jumpRelativeAndDecrement:
    jumpRelativeAndDecrementCommandName address=number
;
callSubroutine:
    callCommandName address=number
;
callSubroutineWithCondition:
    callCommandName condition=jumpCondition address=number
;
returnFromSubroutine:
   returnCommandName
;
returnFromSubroutineGivenCondition:
   returnCommandName condition=jumpCondition
;
returnAndEnableInterrupt:
   returnAndEnableInterruptCommandName
;
returnFromNonMaskableInterrupt:
   returnFromNonMaskableInterruptCommandName
;
restartCommand:
    restartCommandName number
;

branchCommand:
    jumpToAbsoluteAddress |
    jumpToAbsoluteAddressGivenCondition |
    jumpToRelativeAddress |
    jumpToRelativeAddressGivenCondition |
    jumpToHL |
    jumpToIX |
    jumpToIY |
    jumpRelativeAndDecrement |
    callSubroutine |
    callSubroutineWithCondition |
    returnFromSubroutine |
    returnFromSubroutineGivenCondition |
    returnAndEnableInterrupt |
    returnFromNonMaskableInterrupt |
    restartCommand
;

inputCommandName:
    'in' | 'IN'
;

outCommandName:
    'out' | 'OUT'
;

inputDataIntoA:
    inputCommandName dest=aRegister ',' source=numberPointer
;
inputDataIntoRegister:
    inputCommandName dest=simpleByteRegister ',' source=cPointer
;
ini:
   'INI'  | 'ini'
;
inir:
   'INIR'  | 'inir'
;
ind:
   'IND'  | 'ind'
;
indr:
   'INDR'  | 'indr'
;
outputAIntoDataPointer:
    outCommandName dest=numberPointer ',' source=aRegister
;
outputRegisterIntoCPointer:
    outCommandName dest=cPointer ',' source=simpleByteRegister
;
outi:
    'OUTI' | 'outi'
;
otir:
    'otir' | 'OTIR'
;
outd:
    'outd' | 'OUTD'
;
otdr:
    'otdr' | 'OTDR'
;

inputAndOutpuCommand:
    inputDataIntoA |
    inputDataIntoRegister |
    ini |
    inir |
    ind |
    indr |
    outputAIntoDataPointer |
    outputRegisterIntoCPointer |
    outi |
    otir |
    outd |
    otdr
;

label:
    name ':'?
;

orgDirective:
    ('.org' | '.ORG') number
;


charNumber:
    CHAR
;

name:
    NAME
;

number:
    hexNumber |
    decimalNumber |
    charNumber |
    name
;

decimalNumber:
    DECIMAL
;
hexNumber:
     HEX_DIGITS_1 |
     HEX_DIGITS_2 |
     HEX_DIGITS_3
;

comment:
    COMMENT
;

DECIMAL:
    [0-9]+
;

HEX_DIGITS_1:
    '$' [0-9a-fA-F]+
;

HEX_DIGITS_2:
    [0-9a-fA-F]+ ('H' | 'h')
;

HEX_DIGITS_3:
    '0x' [0-9a-fA-F]+
;

NAME:
    [a-zA-Z] [a-zA-Z0-9."]*
;

CHAR:
    '\u0027' ~'\u0027'? '\u0027'
;

STRING:
    '\u0022' ~'\u0027'* '\u0022'
;

COMMENT:
    ';' ~ [\r\n]* -> skip
;

EOL:
    [\r\n]+
;

WS: [ \t] -> skip
;
