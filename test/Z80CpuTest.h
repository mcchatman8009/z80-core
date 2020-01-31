#ifndef SMS_Z80CPUTEST_H
#define SMS_Z80CPUTEST_H

#include "Z80Cpu.h"
#include "Z80Compiler.h"
#include <gtest/gtest.h>
#include <array>
#include <vector>
#include <string>
#include "Z80CpuCommandExpectedTestResults.h"
#include "TestIOMemoryHandler.h"
#include "TestMemoryHandler.h"

using w=Z80Word;
using b=Z80Byte;

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

using w=Z80Word;
using b=Z80Byte;

using namespace std;


class Z80CpuTest : public ::testing::Test {
    public:
        int START_PC{0x100};

        void SetUp() override {
            cpu.initialize();
        }

        void validateSingleInstruction(std::string instruction) {
            executeSingleInstruction(instruction);
            validateExpectedResults();
        }

        void executeSingleInstruction(std::string instruction) {
            auto pc = START_PC;

            cpuSet(PC, pc);
            auto bytes = compiler.compile(instruction);

            for (int i = 0; i < bytes.size(); ++i) {
                memSet(pc +i, bytes[i]);
            }

            cpu.executeNextCommand();
        }

        void validateExpectedResults() {
            auto optValue = expectedResults.isAEqual();
            if (optValue.has_value()) {
                ASSERT_TRUE(optValue.value());
            }

            optValue = expectedResults.isFlagsEqual();
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

        void memSet(int address, int value) {
            memory.writeByte(w{address}, b{value});
        }

        void cpuSet(WordCpuRegisterSymbol reg, int value) {
            cpu.set(reg, w{value});
        }

        void cpuSet(ByteCpuRegisterSymbol reg, int value) {
            cpu.set(reg, b{value});
        }

        void cpuSetPointer(WordCpuRegisterSymbol reg, int value) {
            auto address = cpu.get(reg).getValue();
            memSet(address, value);
        }

        void isEqual(ByteCpuRegisterSymbol byteCpuRegisterSymbol, int value) {
            ASSERT_TRUE(expectedResults.isEqual(byteCpuRegisterSymbol, value));
        }

        void isEqual(WordCpuRegisterSymbol wordCpuRegisterSymbol, int value) {
            ASSERT_TRUE(expectedResults.isEqual(wordCpuRegisterSymbol, value));
        }

        vector<ByteCpuRegisterSymbol> byteRegisters{A, B, C, D, E, H, L};
        TestMemoryHandler memory{};
        TestIOMemoryHandler ioMemory{};
        Z80Cpu cpu{memory, ioMemory};

        Z80CpuCommandExpectedTestResults expectedResults{cpu, memory, ioMemory};

        Z80Compiler compiler;
};

#endif //SMS_Z80CPUTEST_H
