#include "Z80CpuTestFixture.h"
#include "Z80Compiler.h"

int START_PC{0x100};

using namespace std;


constexpr auto A = ByteCpuRegisterSymbol::A;
constexpr auto F = ByteCpuRegisterSymbol::F;
constexpr auto B = ByteCpuRegisterSymbol::B;
constexpr auto C = ByteCpuRegisterSymbol::C;
constexpr auto D = ByteCpuRegisterSymbol::D;
constexpr auto E = ByteCpuRegisterSymbol::E;
constexpr auto H = ByteCpuRegisterSymbol::H;
constexpr auto L = ByteCpuRegisterSymbol::L;
constexpr auto PC = WordCpuRegisterSymbol::PC;
constexpr auto HL = WordCpuRegisterSymbol::HL;
constexpr auto HL_PTR = ByteCpuRegisterSymbol::HL_PTR;
constexpr auto N = ByteCpuRegisterSymbol::N;
constexpr auto BC = WordCpuRegisterSymbol::BC;
constexpr auto DE = WordCpuRegisterSymbol::DE;
constexpr auto SP = WordCpuRegisterSymbol::SP;
constexpr auto IX = WordCpuRegisterSymbol::IX;

using w=Z80Word;
using b=Z80Byte;


void Z80CpuTestFixture::validateSingleInstructionAndTestPCOffset(std::string instruction) { // NOLINT
    int byteCount = validateSingleInstruction(move(instruction));
    auto pc = cpu.get(PC).getValue();
    auto expectedPC = byteCount + START_PC;

    ASSERT_EQ(pc, expectedPC);
}


int Z80CpuTestFixture::validateSingleInstruction(std::string instruction) {
    int byteCount = executeSingleInstruction(move(instruction));
    validateExpectedResults();

    return byteCount;
}

void Z80CpuTestFixture::SetUp() {
    cpu.initialize();
}

int Z80CpuTestFixture::executeSingleInstruction(std::string instruction) {
    Z80Compiler compiler;
    auto pc = START_PC;

    cpuSet(PC, pc);
    auto bytes = compiler.compile(instruction);

    for (int i = 0; i < bytes.size(); ++i) {
        memSet(pc + i, bytes[i]);
    }

    cpu.executeNextCommand();

    return bytes.size();
}

void Z80CpuTestFixture::validateExpectedResults() {
    auto optValue = expectedResults.isAEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isFlagsEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isBEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isCEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isDEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isEEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isHEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isLEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }


    optValue = expectedResults.isBCEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isDEEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isHLEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isHLPointerContentsEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isPCEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isSPEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isIEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isREqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isIXEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isIYEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isMemoryEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isIOMemoryEqual();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isCF();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isZF();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isNF();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }

    optValue = expectedResults.isPF();
    if (optValue.has_value()) {
        ASSERT_TRUE(optValue.value());
    }
}

void Z80CpuTestFixture::memSet(int address, int value) {
    memory.writeByte(w{address}, b{value});
}

void Z80CpuTestFixture::cpuSet(WordCpuRegisterSymbol reg, int value) {
    cpu.set(reg, w{value});
}

void Z80CpuTestFixture::cpuSet(ByteCpuRegisterSymbol reg, int value) {
    cpu.set(reg, b{value});
}

void Z80CpuTestFixture::cpuSetPointer(WordCpuRegisterSymbol reg, int value) {
    auto address = cpu.get(reg).getValue();
    memSet(address, value);
}

void Z80CpuTestFixture::isEqual(ByteCpuRegisterSymbol byteCpuRegisterSymbol, int value) {
    ASSERT_TRUE(expectedResults.isEqual(byteCpuRegisterSymbol, value));
}

void Z80CpuTestFixture::isEqual(WordCpuRegisterSymbol wordCpuRegisterSymbol, int value) {
    ASSERT_TRUE(expectedResults.isEqual(wordCpuRegisterSymbol, value));
}

