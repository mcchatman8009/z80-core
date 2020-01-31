#ifndef Z80_CORE_Z80CPUTESTFIXTURE_H
#define Z80_CORE_Z80CPUTESTFIXTURE_H

#include "Z80Cpu.h"
#include <gtest/gtest.h>
#include <array>
#include <vector>
#include <string>
#include "Z80CpuCommandExpectedTestResults.h"
#include "TestMemoryHandler.h"
#include "TestIOMemoryHandler.h"

class Z80CpuTestFixture : public testing::Test {
    public:
        TestMemoryHandler memory{};
        TestIOMemoryHandler ioMemory{};
        Z80Cpu cpu{memory, ioMemory};

        Z80CpuCommandExpectedTestResults expectedResults{cpu, memory, ioMemory};

        int validateSingleInstruction(std::string instruction);
        void validateSingleInstructionAndTestPCOffset(std::string instruction);

        void SetUp() override;

        int executeSingleInstruction(std::string instruction);

        void validateExpectedResults();

        void memSet(int address, int value);

        void cpuSet(WordCpuRegisterSymbol reg, int value);

        void cpuSet(ByteCpuRegisterSymbol reg, int value);

        void cpuSetPointer(WordCpuRegisterSymbol reg, int value);

        void isEqual(ByteCpuRegisterSymbol byteCpuRegisterSymbol, int value);

        void isEqual(WordCpuRegisterSymbol wordCpuRegisterSymbol, int value);
};

#endif //Z80_CORE_Z80CPUTESTFIXTURE_H
