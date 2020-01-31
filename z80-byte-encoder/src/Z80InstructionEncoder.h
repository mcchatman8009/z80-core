#ifndef Z80_CORE_Z80INSTRUCTIONENCODER_H
#define Z80_CORE_Z80INSTRUCTIONENCODER_H

#include <vector>
#include <string>
#include <map>

class Z80InstructionEncoder {
    public:
        Z80InstructionEncoder();

        std::vector<unsigned char> encodeInstructionWithoutImmediateBytes(std::string instruction);

        std::vector<unsigned char> encodeInstructionWithImmediateBytes(std::string instruction, std::vector<unsigned char> immediateBytes);

    private:

        void initializeInstructionTable();

        int performInstructionLookup(std::string instruction);

        void buildBytes(int opCode, std::vector<unsigned char>& bytes);

        std::map<std::string, int> instructionTable;

        std::string instructionToKey(std::string instruction);

        bool instructionHasImmediateBytes(std::string& instruction);


};


#endif //Z80_CORE_Z80INSTRUCTIONENCODER_H
