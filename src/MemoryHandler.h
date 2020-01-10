#ifndef Z80_CORE_MEMORYHANDLER_H
#define Z80_CORE_MEMORYHANDLER_H

#include "Z80Word.h"

class MemoryHandler {
    public:
        virtual void writeByte(Z80Word address, Z80Byte data) = 0;

        virtual Z80Byte readByte(Z80Word address) = 0;

        virtual char readSignedByte(Z80Word address) = 0;

        virtual Z80Word readWord(Z80Word address) = 0;

        virtual ~MemoryHandler() = default;
};


#endif //Z80_CORE_MEMORYHANDLER_H
