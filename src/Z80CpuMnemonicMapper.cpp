#include "Z80CpuMnemonicMapper.h"
#include "CpuMnemonicTables.h"

std::string& Z80CpuMnemonicMapper::map(OpcodeType opcodeType, int opCode) {
    switch (opcodeType) {
        case OpcodeType::BASE_TABLE_OPCODE: {
            return baseOpCodeTable[opCode];
        }
        case OpcodeType::CB_TABLE_OPCODE: {
            return cbOpCodeTable[opCode];
        }
        case OpcodeType::ED_TABLE_OPCODE: {
            return edOpCodeTable[opCode];
        }
        case OpcodeType::INDEX_TABLE_OPCODE:
        default:
            return indexOpCodeTable[opCode];
    }
}
