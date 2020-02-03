#include "Z80Core.h"
#include <gtest/gtest.h>

Z80_BYTE memory[0x10000];
Z80_BYTE ioMemory[0x100];

static Z80_BYTE memoryRead(Z80CpuChip, Z80_WORD address) {
    return memory[address];
}

static void memoryWrite(Z80CpuChip, Z80_WORD address, Z80_BYTE data) {
    memory[address] = data;
}

static Z80_BYTE ioRead(Z80CpuChip, Z80_BYTE port) {
    return ioMemory[port];
}

static void ioWrite(Z80CpuChip, Z80_BYTE address, Z80_BYTE data) {
    ioMemory[address] = data;
}

static void compiledBytesCallback(Z80CpuChip cpu, const Z80_BYTE* compiledBytes, int compiledBytesSize) {
    auto pc = Z80Core_GetPC(cpu);
    for (int i = 0; i < compiledBytesSize; ++i) {
        memory[i + pc] = compiledBytes[i];
    }
}

TEST(Z80_C_FUNCTIONS, CompileAndRun) { // NOLINT
    auto* cpu = Z80Core_CreateCpu();
    Z80Core_Register_MemRead(cpu, memoryRead);
    Z80Core_Register_MemWrite(cpu, memoryWrite);
    Z80Core_Register_IORead(cpu, ioRead);
    Z80Core_Register_IOWrite(cpu, ioWrite);

    Z80Core_InitializeCpu(cpu);

    Z80Core_CompileAssembly(cpu, "LD A, 0x10", compiledBytesCallback);
    Z80Core_SetPC(cpu, 0x00);
    Z80Core_ExecuteNextInstruction(cpu);
    auto a = ((Z80Core_GetAF(cpu) & 0xFF00) >> 8); // NOLINT

    ASSERT_TRUE(a == 0x10);
    Z80Core_Destroy(cpu);
}


TEST(Z80_C_FUNCTIONS, CompileAndRunForCycles) { // NOLINT
    auto* cpu = Z80Core_CreateCpu();
    Z80Core_Register_MemRead(cpu, memoryRead);
    Z80Core_Register_MemWrite(cpu, memoryWrite);
    Z80Core_Register_IORead(cpu, ioRead);
    Z80Core_Register_IOWrite(cpu, ioWrite);

    Z80Core_InitializeCpu(cpu);

    Z80Core_CompileAssembly(cpu, "LD A, 0x10", compiledBytesCallback);
    Z80Core_SetPC(cpu, 0x00);
    Z80Core_ExecuteForNumberOfCycles(cpu, 10);
    auto a = ((Z80Core_GetAF(cpu) & 0xFF00) >> 8); // NOLINT

    ASSERT_TRUE(a == 0x10);
    Z80Core_Destroy(cpu);
}

TEST(Z80_C_FUNCTIONS, Create) { // NOLINT
    auto* cpu = Z80Core_CreateCpu();

    ASSERT_TRUE(cpu != nullptr);
}

TEST(Z80_C_FUNCTIONS, Initialize) { // NOLINT
    Z80CpuChip cpu = Z80Core_CreateCpu();

    Z80Core_Register_MemRead(cpu, memoryRead);
    Z80Core_Register_MemWrite(cpu, memoryWrite);
    Z80Core_Register_IORead(cpu, ioRead);
    Z80Core_Register_IOWrite(cpu, ioWrite);

    Z80Core_InitializeCpu(cpu);

    ASSERT_TRUE(cpu != nullptr);

    Z80Core_Destroy(cpu);
}

TEST(Z80_C_FUNCTIONS, MemoryWrite) { // NOLINT
    Z80CpuChip cpu = Z80Core_CreateCpu();

    Z80Core_Register_MemRead(cpu, memoryRead);
    Z80Core_Register_MemWrite(cpu, memoryWrite);
    Z80Core_Register_IORead(cpu, ioRead);
    Z80Core_Register_IOWrite(cpu, ioWrite);
    Z80Core_InitializeCpu(cpu);

    Z80Core_WriteMemoryByte(cpu, 0xFF00, 0x88);

    ASSERT_TRUE(Z80Core_ReadMemoryByte(cpu, 0xFF00) == 0x88);

    Z80Core_Destroy(cpu);
}

TEST(Z80_C_FUNCTIONS, IOMemoryWrite) { // NOLINT
    Z80CpuChip cpu = Z80Core_CreateCpu();

    Z80Core_Register_MemRead(cpu, memoryRead);
    Z80Core_Register_MemWrite(cpu, memoryWrite);
    Z80Core_Register_IORead(cpu, ioRead);
    Z80Core_Register_IOWrite(cpu, ioWrite);
    Z80Core_InitializeCpu(cpu);

    Z80Core_WriteIOMemoryByte(cpu, 0x8F, 0x88);

    ASSERT_TRUE(Z80Core_ReadIOMemoryByte(cpu, 0x8F) == 0x88);

    Z80Core_Destroy(cpu);
}

TEST(Z80_C_FUNCTIONS, RegisterWrite) { // NOLINT
    Z80CpuChip cpu = Z80Core_CreateCpu();

    Z80Core_Register_MemRead(cpu, memoryRead);
    Z80Core_Register_MemWrite(cpu, memoryWrite);
    Z80Core_Register_IORead(cpu, ioRead);
    Z80Core_Register_IOWrite(cpu, ioWrite);
    Z80Core_InitializeCpu(cpu);

    Z80Core_WriteMemoryByte(cpu, 0xFF00, 0x88);
    Z80Core_SetAF(cpu, 0xF0F0);
    Z80Core_SetBC(cpu, 0xF0F1);
    Z80Core_SetDE(cpu, 0xF0F2);
    Z80Core_SetHL(cpu, 0xF0F3);
    Z80Core_SetSP(cpu, 0xF0F4);
    Z80Core_SetPC(cpu, 0xF0F5);

    ASSERT_TRUE(Z80Core_GetAF(cpu) == 0xF0F0);
    ASSERT_TRUE(Z80Core_GetBC(cpu) == 0xF0F1);
    ASSERT_TRUE(Z80Core_GetDE(cpu) == 0xF0F2);
    ASSERT_TRUE(Z80Core_GetHL(cpu) == 0xF0F3);
    ASSERT_TRUE(Z80Core_GetSP(cpu) == 0xF0F4);
    ASSERT_TRUE(Z80Core_GetPC(cpu) == 0xF0F5);

    Z80Core_Destroy(cpu);
}
