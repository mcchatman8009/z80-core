#ifndef Z80_CORE_WORDREGISTER_H
#define Z80_CORE_WORDREGISTER_H

#include "Z80Word.h"
#include "FlagRegister.h"
#include "ByteOperationHandler.h"
#include <string>
#include "RegisterByteOperationHandler.h"

enum RegisterWordPart {
    LOW,
    HIGH
};

class WordRegister {
    public:
        explicit WordRegister(FlagRegister& flagRegister);

        void initialize();

        void swapCurrentValueWithShadowValue();

        void incrementWord();

        void incrementLowByte();

        void incrementHighByte();

        void decrementWord();

        void decrementLowByte();

        void decrementHighByte();

        void addWord(Z80Word data);

        void addWordWithCarry(Z80Word data);

        void subtractWordWithCarry(Z80Word data);

        void rotateLeftCircular(RegisterWordPart lowOrHigh);

        void rotateRightCircular(RegisterWordPart lowOrHigh);

        void rotateLeftThroughCarry(RegisterWordPart lowOrHigh);

        void rotateRightThroughCarry(RegisterWordPart lowOrHigh);

        void shiftLeftArithmetic(RegisterWordPart lowOrHigh);

        void shiftRightArithmetic(RegisterWordPart lowOrHigh);

        void shiftLeftLogical(RegisterWordPart lowOrHigh);

        void shiftRightLogical(RegisterWordPart lowOrHigh);

        void testBit(int bit, RegisterWordPart lowOrHigh);

        void enableBit(int bit, RegisterWordPart lowOrHigh);

        void clearBit(int bit, RegisterWordPart lowOrHigh);

        void setWordValue(Z80Word data);

        Z80Word getWordValue();

        Z80Byte getLowByte();

        Z80Byte getHighByte();

        void setLowByte(Z80Byte lowByte);

        void setHighByte(Z80Byte highByte);

        void setRegisterName(std::string);

        std::string getRegisterName();

    private:
        std::string registerName;
        FlagRegister& flagRegister;
        Z80Word value{0x0};
        Z80Word shadowValue{0x0};
        RegisterByteOperationHandler registerHandler;

        void setByteValue(RegisterWordPart lowOrHigh, Z80Byte data);

        Z80Byte getByteValue(RegisterWordPart lowOrHigh);


        Z80Byte incrementByte(Z80Byte data);

        Z80Byte decrementByte(Z80Byte data);
};

#endif //Z80_CORE_WORDREGISTER_H
