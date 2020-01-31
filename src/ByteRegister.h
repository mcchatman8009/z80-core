#ifndef Z80_CORE_BYTEREGISTER_H
#define Z80_CORE_BYTEREGISTER_H

#include "Z80Byte.h"

class ByteRegister {
    public:
        void initialize();

        void setByteValue(Z80Byte byteValue); // NOLINT

        void setShadowByteValue(Z80Byte byteValue); // NOLINT

        Z80Byte getByteValue() const; // NOLINT

        void swapCurrentValueWithShadowValue();

    protected:
        Z80Byte value{0x0};
        Z80Byte shadowValue{0x0};
};


#endif //Z80_CORE_BYTEREGISTER_H
