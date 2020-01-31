#ifndef SMS_Z80CPUCOMMANDEXPECTEDTESTRESULTS_H
#define SMS_Z80CPUCOMMANDEXPECTEDTESTRESULTS_H

#include <map>
#include <any>
#include <string>
#include <Z80Cpu.h>
#include <optional>

class Z80CpuCommandExpectedTestResults {
    public:
        explicit Z80CpuCommandExpectedTestResults(Z80Cpu& cpu, MemoryHandler& memoryHandler,
                                                  IOMemoryHandler& ioMemoryHandler);

        Z80CpuCommandExpectedTestResults& Set(std::string, int value);

        Z80CpuCommandExpectedTestResults& CF(bool flag);

        Z80CpuCommandExpectedTestResults& ZF(bool flag);

        Z80CpuCommandExpectedTestResults& PF(bool flag);

        Z80CpuCommandExpectedTestResults& SF(bool flag);

        Z80CpuCommandExpectedTestResults& NF(bool flag);

        Z80CpuCommandExpectedTestResults& HF(bool flag);

        Z80CpuCommandExpectedTestResults& MEM(int address, int data);

        Z80CpuCommandExpectedTestResults& IO(int port, int data);

        Z80CpuCommandExpectedTestResults& A(int value);

        Z80CpuCommandExpectedTestResults& F(int value);

        Z80CpuCommandExpectedTestResults& B(int value);

        Z80CpuCommandExpectedTestResults& C(int value);

        Z80CpuCommandExpectedTestResults& D(int value);

        Z80CpuCommandExpectedTestResults& E(int value);

        Z80CpuCommandExpectedTestResults& H(int value);

        Z80CpuCommandExpectedTestResults& L(int value);

        Z80CpuCommandExpectedTestResults& BC(int value);

        Z80CpuCommandExpectedTestResults& DE(int value);

        Z80CpuCommandExpectedTestResults& HL(int value);

        Z80CpuCommandExpectedTestResults& HLPointer(int value);

        Z80CpuCommandExpectedTestResults& IX(int value);

        Z80CpuCommandExpectedTestResults& IY(int value);

        Z80CpuCommandExpectedTestResults& PC(int value);

        Z80CpuCommandExpectedTestResults& SP(int value);

        std::optional<bool> isCF();

        std::optional<bool> isZF();

        std::optional<bool> isPF();

        std::optional<bool> isSF();

        std::optional<bool> isNF();

        std::optional<bool> isHF();

        std::optional<bool> isIOMemoryEqual();

        std::optional<bool> isMemoryEqual();

        std::optional<bool> isAEqual();

        std::optional<bool> isFlagsEqual();

        std::optional<bool> isBCEqual();

        std::optional<bool> isBEqual();

        std::optional<bool> isCEqual();

        std::optional<bool> isDEqual();

        std::optional<bool> isEEqual();

        std::optional<bool> isHEqual();

        std::optional<bool> isLEqual();

        std::optional<bool> isDEEqual();

        std::optional<bool> isHLEqual();

        std::optional<bool> isIXEqual();

        std::optional<bool> isIYEqual();

        std::optional<bool> isIEqual();

        std::optional<bool> isREqual();

        std::optional<bool> isPCEqual();

        std::optional<bool> isSPEqual();

        std::optional<bool> isHLPointerContentsEqual();

        bool isEqual(ByteCpuRegisterSymbol byteCpuRegisterSymbol, int value);

        bool isEqual(WordCpuRegisterSymbol wordCpuRegisterSymbol, int value);


    private:

        std::map<std::string, std::any> expectedCpuParameters;
        std::map<int, int> expectedCpuMemory;
        std::map<int, int> expectedCpuIOMemory;
        Z80Cpu& cpu;
        IOMemoryHandler& ioMemory;
        MemoryHandler& memory;

};

class UndefinedZ80CpuTestStateException : public std::exception {
    public:
        explicit UndefinedZ80CpuTestStateException(std::string info) : info{std::move(info)} {}

        const char* what() const throw() { // NOLINT
            return info.c_str();
        }

    private:
        std::string info;
};


#endif //SMS_Z80CPUCOMMANDEXPECTEDTESTRESULTS_H
