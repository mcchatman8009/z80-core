#include <Z80Core.hpp>
#include <Z80Cpu.h>

#include <memory>

using namespace std;

class MemoryHandlerDelegate : public MemoryHandler {
    public:
        explicit MemoryHandlerDelegate(Z80Core::Memory& memory) : memoryDelegate{memory} {}

        void writeByte(Z80Word address, Z80Byte data) override {
            memoryDelegate.writeByte(address.getValue(), data.getValue());
        }

        Z80Byte readByte(Z80Word address) override {
            return Z80Byte{memoryDelegate.readByte(address.getValue())};
        }

        char readSignedByte(Z80Word address) override {
            auto res = memoryDelegate.readSignedByte(address.getValue());
            return res;
        }

        Z80Word readWord(Z80Word address) override {
            return Z80Word(memoryDelegate.readWord(address.getValue()));
        }

    private:
        Z80Core::Memory& memoryDelegate;
};

class IOMemoryHandlerDelegate : public IOMemoryHandler {
    public:
        explicit IOMemoryHandlerDelegate(Z80Core::IOMemory& ioMemory) : memoryDelegate{ioMemory} {}

        void writeByte(Z80Byte port, Z80Byte data) override {
            memoryDelegate.writeByte(port.getValue(), data.getValue());
        }

        Z80Byte readByte(Z80Byte port) override {
            return Z80Byte{memoryDelegate.readByte(port.getValue())};
        }

    private:
        Z80Core::IOMemory& memoryDelegate;
};

namespace Z80Core {
    class Z80CpuChip::Z80CpuImplementation {
        public:
            explicit Z80CpuImplementation(unique_ptr<MemoryHandler>& memoryResource,
                                          unique_ptr<IOMemoryHandler>& ioMemoryResource) {
                this->memory = std::move(memoryResource);
                this->ioMemory = std::move(ioMemoryResource);
                this->cpu = std::make_unique<Z80Cpu>(*this->memory, *this->ioMemory);
            }

            void initialize() {
                cpu->initialize();
            }

            void triggerInterrupt() {
                cpu->triggerInterrupt();
            }

            void triggerNonMaskableInterrupt() {
                cpu->triggerNonMaskableInterrupt();
            }

            void executeUntilNumberOfCycles(int cycles) {
                cpu->executeForNumberOfCycles(cycles);
            }

            void enableDebugLogging(bool enable) {
                cpu->enableDebugLogging(enable);

            }

            int getNumberOfCyclesPassed() const { // NOLINT
                return cpu->getNumberOfCyclesPassed();
            }

            unique_ptr<Z80Cpu> cpu;
            unique_ptr<MemoryHandler> memory;
            unique_ptr<IOMemoryHandler> ioMemory;
    };

    Z80CpuChip::Z80CpuChip(Memory& memory, IOMemory& ioMemory) {

        std::unique_ptr<MemoryHandler> memoryResource = std::make_unique<MemoryHandlerDelegate>(memory);
        std::unique_ptr<IOMemoryHandler> ioMemoryResource = std::unique_ptr<IOMemoryHandler>(
            new IOMemoryHandlerDelegate(ioMemory));

        cpuImpl = std::make_unique<Z80CpuImplementation>(memoryResource, ioMemoryResource);

    }

    void Z80CpuChip::initialize() {
        cpuImpl->cpu->initialize();

    }

    void Z80CpuChip::triggerInterrupt() {
        cpuImpl->cpu->triggerInterrupt();

    }

    void Z80CpuChip::triggerNonMaskableInterrupt() {
        cpuImpl->cpu->triggerNonMaskableInterrupt();
    }

    void Z80CpuChip::executeForNumberOfCycles(int cycles) {
        cpuImpl->cpu->executeForNumberOfCycles(cycles);
    }

    int Z80CpuChip::getNumberOfCyclesPassed() const {
        return cpuImpl->cpu->getNumberOfCyclesPassed();
    }

    void Z80CpuChip::enableDebuggingLogging(bool enable) {
        cpuImpl->cpu->enableDebugLogging(enable);
    }

    void Z80CpuChip::executeNextInstruction() {
        cpuImpl->cpu->executeNextCommand();
    }

    void Z80CpuChip::compileAssembly(const char* assembly, std::vector<byte>& compiledBytes) {
        cpuImpl->cpu->compileAssembly(assembly, compiledBytes);
    }

    word Z80CpuChip::getAF() {
        return cpuImpl->cpu->get(WordCpuRegisterSymbol::AF).getValue();
    }

    void Z80CpuChip::setAF(word value) {
        cpuImpl->cpu->set(WordCpuRegisterSymbol::AF, Z80Word{value});
    }

    word Z80CpuChip::getBC() {
        return cpuImpl->cpu->get(WordCpuRegisterSymbol::BC).getValue();
    }

    void Z80CpuChip::setBC(word value) {
        cpuImpl->cpu->set(WordCpuRegisterSymbol::BC, Z80Word{value});
    }

    word Z80CpuChip::getDE() {
        return cpuImpl->cpu->get(WordCpuRegisterSymbol::DE).getValue();
    }

    void Z80CpuChip::setDE(word value) {
        cpuImpl->cpu->set(WordCpuRegisterSymbol::DE, Z80Word{value});
    }

    word Z80CpuChip::getHL() {
        return cpuImpl->cpu->get(WordCpuRegisterSymbol::HL).getValue();
    }

    void Z80CpuChip::setHL(word value) {
        cpuImpl->cpu->set(WordCpuRegisterSymbol::HL, Z80Word{value});
    }

    word Z80CpuChip::getSP() {
        return cpuImpl->cpu->get(WordCpuRegisterSymbol::SP).getValue();
    }

    void Z80CpuChip::setSP(word value) {
        cpuImpl->cpu->set(WordCpuRegisterSymbol::SP, Z80Word{value});
    }

    word Z80CpuChip::getPC() {
        return cpuImpl->cpu->get(WordCpuRegisterSymbol::PC).getValue();
    }

    void Z80CpuChip::setPC(word value) {
        cpuImpl->cpu->set(WordCpuRegisterSymbol::PC, Z80Word{value});
    }

    byte Z80CpuChip::getRefreshRegister() {
        return cpuImpl->cpu->get(ByteCpuRegisterSymbol::R).getValue();
    }

    byte Z80CpuChip::getInterruptRegister() {
        return cpuImpl->cpu->get(ByteCpuRegisterSymbol::I).getValue();
    }

    int Z80CpuChip::getInterruptMode() {
        return cpuImpl->cpu->getInterruptMode();
    }

    byte Z80CpuChip::readMemoryByte(word address) {
        return cpuImpl->memory->readByte(Z80Word{address}).getValue();
    }

    void Z80CpuChip::writeMemoryByte(word address, byte data) {
        cpuImpl->memory->writeByte(Z80Word{address}, Z80Byte{data});
    }

    byte Z80CpuChip::readIOMemoryByte(word port) {
        return cpuImpl->ioMemory->readByte(Z80Byte{port}).getValue();
    }

    void Z80CpuChip::writeIOMemoryByte(word port, byte data) {
        cpuImpl->ioMemory->writeByte(Z80Byte{port}, Z80Byte{data});
    }

    Z80CpuChip* createZ80Cpu(Memory& memory, IOMemory& ioMemory) {
        return new Z80CpuChip(memory, ioMemory);
    }

    void destroyZ80Cpu(Z80CpuChip* z80CpuChip) {
        delete z80CpuChip;
    }
}
