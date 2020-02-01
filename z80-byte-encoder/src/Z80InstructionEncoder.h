#ifndef Z80_CORE_Z80INSTRUCTIONENCODER_H
#define Z80_CORE_Z80INSTRUCTIONENCODER_H

#include <vector>
#include <string>
#include <string_view>
#include <map>

class Z80InstructionEncoder {
    public:
        Z80InstructionEncoder();

        std::vector<unsigned char> encodeInstructionWithoutImmediateBytes(std::string_view instruction);

        std::vector<unsigned char> encodeInstructionWithImmediateBytes(std::string_view instruction, std::vector<unsigned char> immediateBytes);

        std::vector<unsigned char> encodeInstructionWithImmediateBytes(std::string_view instruction, int numberOfBytes, ...);

    private:

        void initializeInstructionTable();

        int performInstructionLookup(std::string_view instruction);

        void buildBytes(int opCode, std::vector<unsigned char>& bytes);

        std::map<std::string, int> instructionTable;

        std::string instructionToKey(std::string_view instruction);

        bool instructionHasImmediateBytes(std::string_view& instruction);


};


#endif //Z80_CORE_Z80INSTRUCTIONENCODER_H
