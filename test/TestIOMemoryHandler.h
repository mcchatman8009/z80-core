#ifndef Z80_CORE_TESTIOMEMORYHANDLER_H
#define Z80_CORE_TESTIOMEMORYHANDLER_H

#include "Z80Cpu.h"
#include <array>


class TestIOMemoryHandler : public IOMemoryHandler{
    public :
        void writeByte(Z80Byte port, Z80Byte data) override;

        Z80Byte readByte(Z80Byte port) override;

    private:
        std::array<unsigned char, 0x100> memory{0};
};


#endif //Z80_CORE_TESTIOMEMORYHANDLER_H
