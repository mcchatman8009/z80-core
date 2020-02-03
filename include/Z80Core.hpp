#ifndef Z80_CORE_Z80CORE_HPP
#define Z80_CORE_Z80CORE_HPP

#include <memory>
#include <vector>

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

            void executeForNumberOfCycles(int cycles);

            void executeNextInstruction();

            void compileAssembly(const char* assembly, std::vector<byte>& compiledBytes);

            int getNumberOfCyclesPassed() const;//NOLINT

            void enableDebuggingLogging(bool enable);

            word getAF();

            void setAF(word value);

            word getBC();

            void setBC(word value);

            word getDE();

            void setDE(word value);

            word getHL();

            void setHL(word value);

            word getSP();

            void setSP(word value);

            word getPC();

            void setPC(word value);

            byte getRefreshRegister();

            byte getInterruptRegister();

            int getInterruptMode();

            byte readMemoryByte(word address);

            void writeMemoryByte(word address, byte data);

            byte readIOMemoryByte(word port);

            void writeIOMemoryByte(word port, byte data);

        protected:
            class Z80CpuImplementation;

            std::unique_ptr<Z80CpuImplementation> cpuImpl;
    };

    extern Z80CpuChip* createZ80Cpu(Memory& memory, IOMemory& ioMemory);

    extern void destroyZ80Cpu(Z80CpuChip* z80CpuChip);
}

#endif //Z80_CORE_Z80CORE_HPP
