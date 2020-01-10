#include "Z80Word.h"

//@formatter:off
Z80Word::Z80Word(int wordValue) : highByte{(wordValue & 0xFF00) >> 8}, lowByte{(wordValue & 0xFF)} {} // NOLINT
//@formatter:on

//@formatter:off
Z80Word::Z80Word(unsigned long wordValue) : highByte{(wordValue & 0xFF00) >> 8}, lowByte{(wordValue & 0xFF)} {} // NOLINT
//@formatter:on

//@formatter:off
Z80Word::Z80Word(Z80Word::word wordValue) : highByte{(wordValue & 0xFF00) >> 8}, lowByte{(wordValue & 0xFF)} {} // NOLINT
//@formatter:on

Z80Word::Z80Word(Z80Byte highByte, Z80Byte lowByte) : highByte{highByte}, lowByte{lowByte} {}

Z80Word::word Z80Word::getValue() const {
    auto highByteValue = this->highByte.getValue();
    auto lowByteValue = this->lowByte.getValue();

    return (0xFF00 & (highByteValue << 8)) | lowByteValue; // NOLINT
}

Z80Byte Z80Word::getHighByte() const {
    return highByte;
}

Z80Byte Z80Word::getLowByte() const {
    return lowByte;
}

Z80Word Z80Word::reverseBytes() const {
    return Z80Word{lowByte, highByte};
}
