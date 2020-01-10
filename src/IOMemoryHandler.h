#ifndef Z80_CORE_IOMEMORYHANDLER_H
#define Z80_CORE_IOMEMORYHANDLER_H

#include "Z80Byte.h"

class IOMemoryHandler {
    public:
        virtual void writeByte(Z80Byte port, Z80Byte data) = 0;

        virtual Z80Byte readByte(Z80Byte port) = 0;

        virtual ~IOMemoryHandler() = default;
};


#endif //Z80_CORE_IOMEMORYHANDLER_H
