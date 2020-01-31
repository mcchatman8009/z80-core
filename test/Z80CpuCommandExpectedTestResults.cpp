#include "Z80CpuCommandExpectedTestResults.h"
#include <bitset>

using namespace std;

//
// Bit :  7 | 6 | 5 | 4 | 3 | 2   | 1 | 0
// Flag:  S | Z | X | H | X | P/V | N | C
//
constexpr auto CARRY_BIT = 0;
const auto NEGATIVE_BIT = 1;
const auto PARITY_BIT = 2;
const auto UNKNOWN_BIT3 = 3;
const auto HALF_CARRY_BIT = 4;
const auto UNKNOWN_BIT5 = 5;
const auto ZERO_BIT = 6;
const auto SIGN_BIT = 7;

static const string CF_KEY = "CF";
static const string ZF_KEY = "ZF";
static const string SF_KEY = "SF";
static const string NF_KEY = "NF";
static const string PF_KEY = "PF";
static const string HF_KEY = "HF";

static const string A_REG = "A";
static const string F_REG = "F";
static const string DE_REG = "DE";
static const string D_REG = "D";
static const string E_REG = "E";
static const string B_REG = "B";
static const string C_REG = "C";
static const string BC_REG = "BC";
static const string HL_REG = "HL";
static const string H_REG = "H";
static const string L_REG = "L";
static const string HL_REG_POINTER = "(HL)";
static const string IX_REG = "IX";
static const string IY_REG = "IY";
static const string PC_REG = "PC";
static const string SP_REG = "SP";
static const string I_REG = "I";
static const string R_REG = "R";

Z80CpuCommandExpectedTestResults::Z80CpuCommandExpectedTestResults(Z80Cpu& cpu, MemoryHandler& memoryHandler,
                                                                   IOMemoryHandler& ioMemoryHandler)
    : memory{memoryHandler}, ioMemory{ioMemoryHandler}, cpu{cpu} {}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::HF(bool flag) {
    expectedCpuParameters[HF_KEY] = flag;

    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::CF(bool flag) {
    expectedCpuParameters[CF_KEY] = flag;

    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::ZF(bool flag) {
    expectedCpuParameters[ZF_KEY] = flag;

    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::PF(bool flag) {
    expectedCpuParameters[PF_KEY] = flag;

    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::SF(bool flag) {
    expectedCpuParameters[SF_KEY] = flag;

    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::NF(bool flag) {
    expectedCpuParameters[NF_KEY] = flag;

    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::MEM(int address, int data) {
    expectedCpuMemory[address] = data;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::IO(int port, int data) {
    expectedCpuIOMemory[port] = data;
    return *this;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isIOMemoryEqual() {
    if (!expectedCpuMemory.empty()) {
        for (auto& pair: expectedCpuIOMemory) {
            auto port = pair.first;
            int cpuReadData = ioMemory.readByte(Z80Byte{port}).getValue();
            int expectedData = pair.second;

            if (expectedData != cpuReadData) {
                return false;
            }
        }

        return true;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isMemoryEqual() {
    if (!expectedCpuMemory.empty()) {
        for (auto& pair: expectedCpuMemory) {
            auto address = pair.first;
            int cpuReadData = memory.readByte(Z80Word{address}).getValue();
            int expectedData = pair.second;

            if (expectedData != cpuReadData) {
                return false;
            }

        }

        return true;
    }

    return nullopt;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::A(int value) {
    expectedCpuParameters[A_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::F(int value) {
    expectedCpuParameters[F_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::BC(int value) {
    expectedCpuParameters[BC_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::DE(int value) {
    expectedCpuParameters[DE_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::HL(int value) {
    expectedCpuParameters[HL_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::HLPointer(int value) {
    expectedCpuParameters[HL_REG_POINTER] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::IX(int value) {
    expectedCpuParameters[IX_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::IY(int value) {
    expectedCpuParameters[IY_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::PC(int value) {
    expectedCpuParameters[PC_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::SP(int value) {
    expectedCpuParameters[SP_REG] = value;
    return *this;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isAEqual() {
    auto key = A_REG;
    auto symbol = ByteCpuRegisterSymbol::A;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isFlagsEqual() {
    auto key = F_REG;
    auto symbol = ByteCpuRegisterSymbol::F;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isBCEqual() {
    auto key = BC_REG;
    auto symbol = WordCpuRegisterSymbol::BC;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isDEEqual() {
    auto key = DE_REG;
    auto symbol = WordCpuRegisterSymbol::DE;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isHLEqual() {
    auto key = HL_REG;
    auto symbol = WordCpuRegisterSymbol::HL;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isIXEqual() {
    auto key = IX_REG;
    auto symbol = WordCpuRegisterSymbol::IX;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isIYEqual() {
    auto key = IY_REG;
    auto symbol = WordCpuRegisterSymbol::IY;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isIEqual() {
    auto key = I_REG;
    auto symbol = ByteCpuRegisterSymbol::I;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isREqual() {
    auto key = R_REG;
    auto symbol = ByteCpuRegisterSymbol::R;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isPCEqual() {
    auto key = PC_REG;
    auto symbol = WordCpuRegisterSymbol::PC;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isSPEqual() {
    auto key = SP_REG;
    auto symbol = WordCpuRegisterSymbol::SP;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isHLPointerContentsEqual() {
    auto key = HL_REG_POINTER;

    if (expectedCpuParameters.count(key) > 0) {
        auto hlValue = cpu.get(WordCpuRegisterSymbol::HL);
        int cpuData = memory.readWord(Z80Word{hlValue}).getValue();

        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return cpuData == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isCF() {
    auto key = CF_KEY;
    auto bit = CARRY_BIT;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<bool>(expectedCpuParameters[key]);
        bitset<8> bits = bitset<8>(cpu.get(ByteCpuRegisterSymbol::F).getValue());

        return expectedResults == bits.test(bit);
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isZF() {
    auto key = ZF_KEY;
    auto bit = ZERO_BIT;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<bool>(expectedCpuParameters[key]);
        bitset<8> bits = bitset<8>(cpu.get(ByteCpuRegisterSymbol::F).getValue());

        return expectedResults == bits.test(bit);
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isPF() {
    auto key = PF_KEY;
    auto bit = PARITY_BIT;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<bool>(expectedCpuParameters[key]);
        bitset<8> bits = bitset<8>(cpu.get(ByteCpuRegisterSymbol::F).getValue());

        return expectedResults == bits.test(bit);
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isSF() {
    auto key = SF_KEY;
    auto bit = SIGN_BIT;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<bool>(expectedCpuParameters[key]);
        bitset<8> bits = bitset<8>(cpu.get(ByteCpuRegisterSymbol::F).getValue());

        return expectedResults == bits.test(bit);
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isNF() {
    auto key = NF_KEY;
    auto bit = NEGATIVE_BIT;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<bool>(expectedCpuParameters[key]);
        bitset<8> bits = bitset<8>(cpu.get(ByteCpuRegisterSymbol::F).getValue());

        return expectedResults == bits.test(bit);
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isHF() {
    auto key = HF_KEY;
    auto bit = HALF_CARRY_BIT;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<bool>(expectedCpuParameters[key]);
        bitset<8> bits = bitset<8>(cpu.get(ByteCpuRegisterSymbol::F).getValue());

        return expectedResults == bits.test(bit);
    }

    return nullopt;
}

bool Z80CpuCommandExpectedTestResults::isEqual(ByteCpuRegisterSymbol byteCpuRegisterSymbol, int value) {
    return cpu.get(byteCpuRegisterSymbol).getValue() == value;
}

bool Z80CpuCommandExpectedTestResults::isEqual(WordCpuRegisterSymbol wordCpuRegisterSymbol, int value) {
    return cpu.get(wordCpuRegisterSymbol).getValue() == value;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::B(int value) {
    expectedCpuParameters[B_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::C(int value) {
    expectedCpuParameters[C_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::D(int value) {
    expectedCpuParameters[D_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::E(int value) {
    expectedCpuParameters[E_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::H(int value) {
    expectedCpuParameters[H_REG] = value;
    return *this;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::L(int value) {
    expectedCpuParameters[L_REG] = value;
    return *this;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isBEqual() {
    auto key = B_REG;
    auto symbol = ByteCpuRegisterSymbol::B;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isCEqual() {
    auto key = C_REG;
    auto symbol = ByteCpuRegisterSymbol::C;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isDEqual() {
    auto key = D_REG;
    auto symbol = ByteCpuRegisterSymbol::D;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isEEqual() {
    auto key = E_REG;
    auto symbol = ByteCpuRegisterSymbol::E;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isHEqual() {
    auto key = H_REG;
    auto symbol = ByteCpuRegisterSymbol::H;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

std::optional<bool> Z80CpuCommandExpectedTestResults::isLEqual() {
    auto key = L_REG;
    auto symbol = ByteCpuRegisterSymbol::L;

    if (expectedCpuParameters.count(key) > 0) {
        auto expectedResults = std::any_cast<int>(expectedCpuParameters[key]);
        return static_cast<int>(cpu.get(symbol).getValue()) == expectedResults;
    }

    return nullopt;
}

Z80CpuCommandExpectedTestResults& Z80CpuCommandExpectedTestResults::Set(std::string name, int value) {
    expectedCpuParameters[name] = value;
    return *this;
}
