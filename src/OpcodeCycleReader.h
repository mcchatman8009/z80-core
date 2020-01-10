#ifndef Z80_CORE_OPCODECYCLEREADER_H
#define Z80_CORE_OPCODECYCLEREADER_H


#include "Z80Byte.h"

class OpcodeCycleReader {
    public:
        int getCyclesFromByte(Z80Byte opcode);

        int getCyclesFromBytes(Z80Byte prefixByte, Z80Byte suffixByte);

        int getCyclesFromBytes(Z80Byte prefixByte, Z80Byte cbByte, Z80Byte commandByte);
};


#endif //Z80_CORE_OPCODECYCLEREADER_H
