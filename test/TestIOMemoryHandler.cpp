#include "TestIOMemoryHandler.h"

void TestIOMemoryHandler::writeByte(Z80Byte port, Z80Byte data) {
    memory[port.getValue()] = data.getValue();
}

Z80Byte TestIOMemoryHandler::readByte(Z80Byte port) {
    return Z80Byte(memory[port.getValue()]);
}
