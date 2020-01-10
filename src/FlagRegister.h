#ifndef Z80_CORE_FLAGREGISTER_H
#define Z80_CORE_FLAGREGISTER_H

#include "ByteRegister.h"

class FlagRegister : public ByteRegister {
    public:
        void setCarryBit(bool flag);

        bool getCarryBit();

        void setNegativeBit(bool flag);

        bool getNegativeBit();

        void setParityBit(bool flag);

        bool getParityBit();

        void setBit3(bool flag);

        void setBit3FromValue(Z80Byte data);

        bool getBit3();

        void setHalfCarryBit(bool flag);

        bool getHalfCarryBit();

        void setBit5(bool flag);

        void setBit5FromValue(Z80Byte data);

        bool getBit5();

        void setZeroBit(bool flag);

        bool getZeroBit();

        void setSignBit(bool flag);

        bool getSignBit();

        void complementCarryFlag();
};

#endif //Z80_CORE_FLAGREGISTER_H
