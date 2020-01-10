#include "MemoryCommandHandler.h"

MemoryCommandHandler::MemoryCommandHandler(MemoryHandler& memoryHandler, FlagRegister& flagRegister) : memory{
    memoryHandler}, flagRegister{flagRegister}, registerHandler{flagRegister} {}

void MemoryCommandHandler::decrement(Z80Word address) {
    auto result = registerHandler.decrement(getByteValue(address));
    flagRegister.setBit3FromValue(result);
    flagRegister.setBit5FromValue(result);

    setByteValue(address, result);
}

void MemoryCommandHandler::increment(Z80Word address) {
    auto result = registerHandler.increment(getByteValue(address));
    flagRegister.setBit3FromValue(result);
    flagRegister.setBit5FromValue(result);

    setByteValue(address, result);
}

void MemoryCommandHandler::rotateLeftCircular(Z80Word address) {
    auto result = registerHandler.rotateLeftCircular(getByteValue(address));

    setByteValue(address, result);
}

void MemoryCommandHandler::rotateRightCircular(Z80Word address) {
    auto result = registerHandler.rotateRightCircular(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::rotateLeftThroughCarry(Z80Word address) {
    auto result = registerHandler.rotateLeftThroughCarry(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::rotateRightThroughCarry(Z80Word address) {
    auto result = registerHandler.rotateRightThroughCarry(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::shiftLeftArithmetic(Z80Word address) {
    auto result = registerHandler.shiftLeftArithmetic(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::shiftRightArithmetic(Z80Word address) {
    auto result = registerHandler.shiftRightArithmetic(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::shiftLeftLogical(Z80Word address) {
    auto result = registerHandler.shiftLeftLogical(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::shiftRightLogical(Z80Word address) {
    auto result = registerHandler.shiftRightLogical(getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::testBit(int bit, Z80Word address) {
    registerHandler.testBit(bit, getByteValue(address));
}

void MemoryCommandHandler::enableBit(int bit, Z80Word address) {
    auto result = registerHandler.enableBit(bit, getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::clearBit(int bit, Z80Word address) {
    auto result = registerHandler.clearBit(bit, getByteValue(address));
    setByteValue(address, result);
}

void MemoryCommandHandler::setByteValue(Z80Word address, Z80Byte data) {
    memory.writeByte(address, data);
}

Z80Byte MemoryCommandHandler::getByteValue(Z80Word address) {
    return memory.readByte(address);
}
