#ifndef Z80_CORE_Z80CORE_H
#define Z80_CORE_Z80CORE_H

typedef unsigned char Z80_BYTE;
typedef unsigned short Z80_WORD;
typedef void* Z80CpuChip;

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  Create the handle for the Z80CpuChip model.
 * @return
 */
Z80CpuChip Z80Core_CreateCpu();

/**
 * Read byte from the given address.
 *
 * @param cpu
 * @param address
 * @return
 */
Z80_BYTE Z80Core_ReadMemoryByte(Z80CpuChip cpu, Z80_WORD address);

/**
 * Write a byte at the given address.
 *
 * @param cpu
 * @param address
 * @param data
 */
void Z80Core_WriteMemoryByte(Z80CpuChip cpu, Z80_WORD address, Z80_BYTE data);

/**
 * Read a byte from the specified IO port.
 *
 * @param cpu
 * @param port
 * @return
 */
Z80_BYTE Z80Core_ReadIOMemoryByte(Z80CpuChip cpu, Z80_BYTE port);

/**
 * Write a byte of data at an IO port.
 *
 * @param cpu
 * @param port
 * @param data
 */
void Z80Core_WriteIOMemoryByte(Z80CpuChip cpu, Z80_BYTE port, Z80_BYTE data);

/**
 * Get the AF register.
 *
 * @param cpu
 * @return
 */
Z80_WORD Z80Core_GetAF(Z80CpuChip cpu);

/**
 * Set the AF register value.
 *
 * @param cpu
 * @param data
 */
void Z80Core_SetAF(Z80CpuChip cpu, Z80_WORD data);

/**
 * Get the BC register value.
 *
 * @param cpu
 * @return
 */
Z80_WORD Z80Core_GetBC(Z80CpuChip cpu);

/**
 * Set the BC register value.
 *
 * @param cpu
 * @param data
 */
void Z80Core_SetBC(Z80CpuChip cpu, Z80_WORD data);

/**
 * Get the DE register value.
 *
 */
Z80_WORD Z80Core_GetDE(Z80CpuChip cpu);

/**
 * Set the DE register value.
 *
 * @param cpu
 * @param data
 */
void Z80Core_SetDE(Z80CpuChip cpu, Z80_WORD data);

/**
 * Get the HL register value.
 *
 * @param cpu
 * @return
 */
Z80_WORD Z80Core_GetHL(Z80CpuChip cpu);

/**
 * Set the HL register value.
 *
 * @param cpu
 * @param data
 */
void Z80Core_SetHL(Z80CpuChip cpu, Z80_WORD data);

/**
 * Get the PC register value.
 */
Z80_WORD Z80Core_GetPC(Z80CpuChip cpu);

/**
 * Set the PC register value.
 *
 */
void Z80Core_SetPC(Z80CpuChip cpu, Z80_WORD data);

/**
 * Get the SP register value.
 */
Z80_WORD Z80Core_GetSP(Z80CpuChip cpu);

/**
 * Set the SP register value.
 *
 * @param cpu
 * @param data
 */
void Z80Core_SetSP(Z80CpuChip cpu, Z80_WORD data);

/**
 * Compile the provided Assembly code string, and pass the bytes to the callback function.
 *
 *  TODO: Right now only Assembly commands work, move advance directives and labels are not yet supported.
 *
 * @param cpu
 * @param assembly
 * @param compiledBytesCallback
 */
void Z80Core_CompileAssembly(Z80CpuChip cpu, const char* assembly, void(compiledBytesCallback)(Z80CpuChip, const Z80_BYTE*, int));

/**
 * Get the current CPU interrupt mode.
 *
 * @param cpu
 * @return
 */
int Z80Core_GetInterruptMode(Z80CpuChip cpu);

/**
 * Get the R/Refresh register value.
 * @param cpu
 * @return
 */
Z80_BYTE Z80Core_GetRefreshRegister(Z80CpuChip cpu);

/**
 * Get the I/Interrupt register value.
 */
Z80_BYTE Z80Core_GetInterruptRegister(Z80CpuChip cpu);

/**
 * Initialize th Cpu.
 *
 * @param cpu
 */
void Z80Core_InitializeCpu(Z80CpuChip cpu);

/**
 * Destroy the provide Cpu chip.
 * @param cpu
 */
void Z80Core_Destroy(Z80CpuChip cpu);

/**
 * Run/Execute the CPU for the specified amount of cycles.
 */
void Z80Core_ExecuteForNumberOfCycles(Z80CpuChip cpu, int numberOfCycles);

/**
 * Execute the next ready instruction.
 */
void Z80Core_ExecuteNextInstruction(Z80CpuChip cpu);

/**
 * Trigger an interrupt.
 *
 * @param cpu
 */
void Z80Core_TriggerInterrupt(Z80CpuChip cpu);

/**
 * Trigger a non maskable interrupt.
 *
 */
void Z80Core_TriggerNonMaskableInterrupt(Z80CpuChip cpu);

/**
 * Register a Z80 memory read callback handler.
 *
 * @param memory
 */
void Z80Core_Register_MemRead(Z80CpuChip, Z80_BYTE(* memoryRead)(Z80CpuChip, Z80_WORD));

/**
 * Register a Z80 memory write callback handler.
 */
void Z80Core_Register_MemWrite(Z80CpuChip, void(* memoryWrite)(Z80CpuChip, Z80_WORD, Z80_BYTE));

/**
 * Register a Z80 memory IO read callback handler.
 * @param IOMemoryRead
 */
void Z80Core_Register_IORead(Z80CpuChip, Z80_BYTE(* IOMemoryRead)(Z80CpuChip, Z80_BYTE));

/**
 * Register a Z80 memory IO write callback handler.
 * @param IOMemoryWrite
 */
void Z80Core_Register_IOWrite(Z80CpuChip, void(* IOMemoryWrite)(Z80CpuChip, Z80_BYTE, Z80_BYTE));

#ifdef __cplusplus
}
#endif

#endif //Z80_CORE_Z80CORE_H
