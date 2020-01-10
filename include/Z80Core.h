#ifndef Z80_CORE_Z80CORE_H
#define Z80_CORE_Z80CORE_H

#include <memory>

namespace Z80Core {
    using byte = unsigned char;
    using word = unsigned short;

    class Memory {
        public:
            virtual void writeByte(word address, byte data) = 0;

            virtual byte readByte(word address) = 0;

            virtual char readSignedByte(word address) = 0;

            virtual word readWord(word address) = 0;

            virtual ~Memory() = default;
    };

    class IOMemory {
        public:
            virtual void writeByte(byte port, byte data) = 0;

            virtual byte readByte(byte port) = 0;

            virtual ~IOMemory() = default;
    };

    class Z80CpuChip {
        public:
            explicit Z80CpuChip(Memory& memory, IOMemory& ioMemory);

            void initialize();

            void triggerInterrupt();

            void triggerNonMaskableInterrupt();

            void executeUntilNumberOfCycles(int cycles);

            int getNumberOfCyclesPassed() const;//NOLINT
        protected:
            class Z80CpuImplementation;

            std::unique_ptr<Z80CpuImplementation> cpu;
    };

    extern Z80CpuChip* createZ80Cpu(Memory& memory, IOMemory& ioMemory);

    extern void destroyZ80Cpu(Z80CpuChip* z80CpuChip);
}

#endif //Z80_CORE_Z80CORE_H
