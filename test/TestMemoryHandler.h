#ifndef Z80_CORE_TESTMEMORYHANDLER_H
#define Z80_CORE_TESTMEMORYHANDLER_H

#include "Z80Cpu.h"
#include <array>

class TestMemoryHandler : public MemoryHandler {
    public:
        void writeByte(Z80Word address, Z80Byte data) override;

        Z80Byte readByte(Z80Word address) override;

        char readSignedByte(Z80Word address) override;

        Z80Word readWord(Z80Word address) override;

    private:
        std::array<unsigned char, 0x10000> memory{0};
};


#endif //Z80_CORE_TESTMEMORYHANDLER_H
