#ifndef Z80_CORE_Z80WORD_H
#define Z80_CORE_Z80WORD_H

#include "Z80Byte.h"

class Z80Word {
    public:
        using word=unsigned short;

        explicit Z80Word(int wordValue);

        explicit Z80Word(unsigned long wordValue);

        explicit Z80Word(word wordValue);

        explicit Z80Word(Z80Byte highByte, Z80Byte lowByte);

        word getValue() const; // NOLINT

        Z80Byte getHighByte() const; // NOLINT

        Z80Byte getLowByte() const; // NOLINT

        Z80Word reverseBytes() const; // NOLINT

    private:
        Z80Byte highByte{0};
        Z80Byte lowByte{0};
};


#endif //Z80_CORE_Z80WORD_H
