#include <Z80Core.h>
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
                cpu->executeUntilNumberOfCycles(cycles);
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

        cpu = std::make_unique<Z80CpuImplementation>(memoryResource, ioMemoryResource);

    }

    void Z80CpuChip::initialize() {
        cpu->initialize();

    }

    void Z80CpuChip::triggerInterrupt() {
        cpu->triggerInterrupt();

    }

    void Z80CpuChip::triggerNonMaskableInterrupt() {
        cpu->triggerNonMaskableInterrupt();
    }

    void Z80CpuChip::executeUntilNumberOfCycles(int cycles) {
        cpu->executeUntilNumberOfCycles(cycles);
    }

    int Z80CpuChip::getNumberOfCyclesPassed() const {
        return cpu->getNumberOfCyclesPassed();
    }

    Z80CpuChip* createZ80Cpu(Memory& memory, IOMemory& ioMemory) {
        return new Z80CpuChip(memory, ioMemory);
    }

    void destroyZ80Cpu(Z80CpuChip* z80CpuChip) {
        delete z80CpuChip;
    }
}
