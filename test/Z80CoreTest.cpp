#include <gtest/gtest.h>
#include <array>
#include "Z80Core.hpp"

using namespace Z80Core;

class DefaultMemory : public Memory {
    public:
        void writeByte(word address, byte data) override {
            memory[address] = data;
        }

        byte readByte(word address) override {
            return memory[address];
        }

        char readSignedByte(word address) override {
            return memory[address];
        }

        word readWord(word address) override {
            auto l = readByte(address);
            auto h = readByte(address + 1);

            return ((h << 8) & 0xFF00) | (l & 0xFF); // NOLINT
        }

    private:
        std::array<byte, 0x10000> memory;
};

class DefaultIOMemory : public IOMemory {
    public:
        void writeByte(byte port, byte data) override {
            memory[port] = data;
        }

        byte readByte(byte port) override {
            return memory[port];
        }

    public:

    private:
        std::array<byte, 0x100> memory;
};

TEST(Z80Core, Initialize) { // NOLINT
    DefaultIOMemory ioMemory;
    DefaultMemory memory;
    auto cpu = createZ80Cpu(memory, ioMemory);
    cpu->initialize();

    ASSERT_TRUE(cpu != nullptr);

    destroyZ80Cpu(cpu);
}

TEST(Z80Core, ExecuteNextCommand) { // NOLINT
    DefaultIOMemory ioMemory;
    DefaultMemory memory;
    auto cpu = createZ80Cpu(memory, ioMemory);
    cpu->initialize();
    std::vector<byte> compiledBytes;

    cpu->compileAssembly("LD A, 0x90",compiledBytes);

    for (int i = 0; i < compiledBytes.size(); ++i) {
        cpu->writeMemoryByte(i, compiledBytes[i]);
    }

    cpu->executeNextInstruction();

    ASSERT_TRUE(cpu != nullptr);
    ASSERT_TRUE(cpu->getAF() == 0x9000);

    destroyZ80Cpu(cpu);
}

TEST(Z80Core, ExecuteNextCommandForCycles) { // NOLINT
    DefaultIOMemory ioMemory;
    DefaultMemory memory;
    auto cpu = createZ80Cpu(memory, ioMemory);
    cpu->initialize();
    std::vector<byte> compiledBytes;

    const char* code = R"ASM(
        LD A, 0x90
        NOP
        LD H, 0x10
        NOP
        ADD A, H
        LD B, A
    )ASM";

    cpu->compileAssembly(code,compiledBytes);

    for (int i = 0; i < compiledBytes.size(); ++i) {
        cpu->writeMemoryByte(i, compiledBytes[i]);
    }

    cpu->executeForNumberOfCycles(30);

    ASSERT_TRUE(cpu != nullptr);
    ASSERT_TRUE(cpu->getBC() == 0xA000);

    destroyZ80Cpu(cpu);
}
