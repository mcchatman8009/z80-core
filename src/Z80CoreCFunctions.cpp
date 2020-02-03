#include "Z80Core.h"
#include <Z80Cpu.h>

#include <vector>
#include <memory>

using namespace std;

class Z80CpuImpl {
    public:
        Z80_BYTE (* memoryRead)(Z80CpuChip, Z80_WORD){};

        void (* memoryWrite)(Z80CpuChip, Z80_WORD, Z80_BYTE){};

        Z80_BYTE (* ioRead)(Z80CpuChip, Z80_BYTE){};

        void (* ioWrite)(Z80CpuChip, Z80_BYTE, Z80_BYTE){};

        unique_ptr<Z80Cpu> cpu;
        unique_ptr<MemoryHandler> memory;
        unique_ptr<IOMemoryHandler> ioMemory;
};

class BasicMemoryHandlerDelegate : public MemoryHandler {
    public:
        explicit BasicMemoryHandlerDelegate(Z80CpuImpl* cpuImpl) : cpuImpl{cpuImpl} {}

        void writeByte(Z80Word address, Z80Byte data) override {
            auto memoryWrite = cpuImpl->memoryWrite;
            memoryWrite(cpuImpl, address.getValue(), data.getValue());
        }

        Z80Byte readByte(Z80Word address) override {
            auto memoryRead = cpuImpl->memoryRead;
            return Z80Byte{memoryRead(cpuImpl, address.getValue())};
        }

        char readSignedByte(Z80Word address) override {
            char res = readByte(address).getValue();
            return res;
        }

        Z80Word readWord(Z80Word address) override {
            auto l = readByte(address).getValue();
            auto h = readByte(Z80Word{address.getValue() + 1}).getValue();

            return Z80Word(((h << 8) & 0xFF00) | (l & 0xFF)); // NOLINT
        }

    private:
        Z80CpuImpl* cpuImpl;
};

class BasicIOMemoryHandlerDelegate : public IOMemoryHandler {
    public:
        explicit BasicIOMemoryHandlerDelegate(Z80CpuImpl* z80CpuImpl) : z80CpuImpl{z80CpuImpl} {}

        void writeByte(Z80Byte port, Z80Byte data) override {
            auto write = z80CpuImpl->ioWrite;
            write(z80CpuImpl, port.getValue(), data.getValue());
        }

        Z80Byte readByte(Z80Byte port) override {
            auto read = z80CpuImpl->ioRead;
            return Z80Byte{read(z80CpuImpl, port.getValue())};
        }

    private:
        Z80CpuImpl* z80CpuImpl;
};


Z80CpuChip Z80Core_CreateCpu() {
    return (Z80CpuChip) new Z80CpuImpl();
}

void Z80Core_InitializeCpu(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->memory = std::make_unique<BasicMemoryHandlerDelegate>(impl);
    impl->ioMemory = std::make_unique<BasicIOMemoryHandlerDelegate>(impl);

    impl->cpu = std::make_unique<Z80Cpu>(*impl->memory, *impl->ioMemory);
    impl->cpu->initialize();
}

void Z80Core_Destroy(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    delete impl;
}

void Z80Core_ExecuteForNumberOfCycles(Z80CpuChip cpu, int numberOfCycles) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->executeForNumberOfCycles(numberOfCycles);
}

void Z80Core_ExecuteNextInstruction(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->executeNextCommand();
}

void Z80Core_TriggerInterrupt(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->triggerInterrupt();
}

void Z80Core_TriggerNonMaskableInterrupt(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->triggerNonMaskableInterrupt();
}

void Z80Core_Register_MemRead(Z80CpuChip cpu, Z80_BYTE(* memory)(Z80CpuChip, Z80_WORD)) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->memoryRead = memory;
}

void Z80Core_Register_MemWrite(Z80CpuChip cpu, void(* memoryWrite)(Z80CpuChip, Z80_WORD, Z80_BYTE)) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->memoryWrite = memoryWrite;
}

void Z80Core_Register_IORead(Z80CpuChip cpu, Z80_BYTE(* ioRead)(Z80CpuChip, Z80_BYTE)) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->ioRead = ioRead;
}

void Z80Core_Register_IOWrite(Z80CpuChip cpu, void(* ioWrite)(Z80CpuChip, Z80_BYTE, Z80_BYTE)) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->ioWrite = ioWrite;
}

Z80_BYTE Z80Core_ReadMemoryByte(Z80CpuChip cpu, Z80_WORD address) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->memoryRead(impl, address);
}

void Z80Core_WriteMemoryByte(Z80CpuChip cpu, Z80_WORD address, Z80_BYTE data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->memoryWrite(impl, address, data);
}

Z80_BYTE Z80Core_ReadIOMemoryByte(Z80CpuChip cpu, Z80_BYTE port) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->ioRead(impl, port);
}

void Z80Core_WriteIOMemoryByte(Z80CpuChip cpu, Z80_BYTE port, Z80_BYTE data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->ioWrite(impl, port, data);
}


Z80_WORD Z80Core_GetAF(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(WordCpuRegisterSymbol::AF).getValue();
}

void Z80Core_SetAF(Z80CpuChip cpu, Z80_WORD data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->set(WordCpuRegisterSymbol::AF, Z80Word{data});
}

Z80_WORD Z80Core_GetBC(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(WordCpuRegisterSymbol::BC).getValue();
}

void Z80Core_SetBC(Z80CpuChip cpu, Z80_WORD data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->set(WordCpuRegisterSymbol::BC, Z80Word{data});
}

Z80_WORD Z80Core_GetDE(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(WordCpuRegisterSymbol::DE).getValue();
}

void Z80Core_SetDE(Z80CpuChip cpu, Z80_WORD data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->set(WordCpuRegisterSymbol::DE, Z80Word{data});
}

Z80_WORD Z80Core_GetHL(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(WordCpuRegisterSymbol::HL).getValue();
}

void Z80Core_SetHL(Z80CpuChip cpu, Z80_WORD data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->set(WordCpuRegisterSymbol::HL, Z80Word{data});
}

Z80_WORD Z80Core_GetPC(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(WordCpuRegisterSymbol::PC).getValue();
}

Z80_WORD Z80Core_GetSP(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(WordCpuRegisterSymbol::SP).getValue();
}

int Z80Core_GetInterruptMode(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->getInterruptMode();
}

Z80_BYTE Z80Core_GetRefreshRegister(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(ByteCpuRegisterSymbol::R).getValue();
}

Z80_BYTE Z80Core_GetInterruptRegister(Z80CpuChip cpu) {
    auto* impl = (Z80CpuImpl*) cpu;
    return impl->cpu->get(ByteCpuRegisterSymbol::I).getValue();
}

void Z80Core_SetPC(Z80CpuChip cpu, Z80_WORD data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->set(WordCpuRegisterSymbol::PC, Z80Word{data});
}

void Z80Core_SetSP(Z80CpuChip cpu, Z80_WORD data) {
    auto* impl = (Z80CpuImpl*) cpu;
    impl->cpu->set(WordCpuRegisterSymbol::SP, Z80Word{data});
}

void Z80Core_CompileAssembly(Z80CpuChip cpu, const char* assembly, void(compiledBytesCallback)(Z80CpuChip, const Z80_BYTE*, int)) {
    auto* impl = (Z80CpuImpl*) cpu;
    std::vector<Z80_BYTE> vectorBytes;
    impl->cpu->compileAssembly(assembly, vectorBytes);

    compiledBytesCallback(cpu, vectorBytes.data(), vectorBytes.size());
}
