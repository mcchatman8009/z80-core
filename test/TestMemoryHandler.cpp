#include "TestMemoryHandler.h"

void TestMemoryHandler::writeByte(Z80Word address, Z80Byte data) {
    memory[address.getValue()] = data.getValue();
}

Z80Byte TestMemoryHandler::readByte(Z80Word address) {
    return Z80Byte(memory[address.getValue()]);
}

char TestMemoryHandler::readSignedByte(Z80Word address) {
    return Z80Byte(memory[address.getValue()]).getValue();
}

Z80Word TestMemoryHandler::readWord(Z80Word address) {
    // Read as Little Endian...
    auto lowByte = readByte(address);
    auto highByte = readByte(Z80Word{address.getValue() + 1});
    return Z80Word(highByte, lowByte);
}
