#include "Z80Cpu.h"
#include <iostream>
#include <iomanip>

using namespace std;

#define Z80_DEBUG 0

using w=Z80Word;
using b=Z80Byte;


static void printFormattedNamedBoolValue(std::string name, bool value) { // NOLINT
    using namespace std;
    const char separator = ' ';
    const int nameWidth = 1;

    cout << left << name;
    cout << right << "[" << setfill(separator) << setw(nameWidth) << hex << std::to_string(value) << "] ";
}

static void printFormattedNamedHexValue(std::string name, int value) { // NOLINT
    using namespace std;
    const char separator = ' ';
    const int nameWidth = 4;

    cout << left << name;
    cout << right << "[" << setfill(separator) << setw(nameWidth) << hex << std::uppercase << value << "] ";
}

static void printFormattedValue(std::string name, std::string value) { // NOLINT
    using namespace std;
    const char separator = ' ';
    cout << left << setw(8) << name;
    cout << "[" << setw(16) << setfill(separator) << value << "] ";
}

void Z80Cpu::outputOpCode(std::string mnemonic, Z80Byte opCode) { // NOLINT
    if (debug) {
        printFormattedValue("mnemonic", mnemonic); // NOLINT
        printFormattedNamedHexValue("opCode", opCode.getValue());
        dumpCpuState();
        cout << endl;
    }
}

void Z80Cpu::dumpCpuState() {
    printFormattedNamedHexValue("A", a.getByteValue().getValue());
    printFormattedNamedHexValue("F", f.getByteValue().getValue());
    printFormattedNamedHexValue("BC", bc.getWordValue().getValue());
    printFormattedNamedHexValue("DE", de.getWordValue().getValue());
    printFormattedNamedHexValue("HL", hl.getWordValue().getValue());
    printFormattedNamedHexValue("(HL)", memory.readByte(hl.getWordValue()).getValue());
    printFormattedNamedHexValue("PC", programCounter.getValue());
    printFormattedNamedHexValue("SP", stackPointer.getValue());
    printFormattedNamedHexValue("IX", ix.getWordValue().getValue());
    printFormattedNamedHexValue("IY", iy.getWordValue().getValue());
    printFormattedNamedHexValue("N", readImmediateByteOperand().getValue());
    printFormattedNamedHexValue("NN", readImmediateWordOperand().getValue());
    printFormattedNamedHexValue("T", cyclesPassed);
    printFormattedNamedBoolValue("IFF1", iff1);
    printFormattedNamedBoolValue("IFF2", iff2);
    printFormattedNamedBoolValue("IME", interruptsEnabled);
    printFormattedNamedHexValue("IM", interruptMode);

    if (f.getCarryBit()) {
        cout << "C";
    }
    if (f.getZeroBit()) {
        cout << "Z";
    }
    if (f.getParityBit()) {
        cout << "P";
    }
    if (f.getSignBit()) {
        cout << "S";
    }
    if (f.getHalfCarryBit()) {
        cout << "H";
    }
}
