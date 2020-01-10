#ifndef Z80_CORE_Z80CPUMNEMONICMAPPER_H
#define Z80_CORE_Z80CPUMNEMONICMAPPER_H

#include <string>
#include "OpcodeType.h"

class Z80CpuMnemonicMapper {
    public:
        static std::string& map(OpcodeType, int opCode);

};


#endif //Z80_CORE_Z80CPUMNEMONICMAPPER_H
