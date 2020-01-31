#include "Z80InstructionEncoder.h"

int main() {
    Z80InstructionEncoder encoder{};

    auto d = encoder.encodeInstructionWithoutImmediateBytes("NOP");
    auto d2 = encoder.encodeInstructionWithoutImmediateBytes("add A, B");
    auto d3 = encoder.encodeInstructionWithoutImmediateBytes("add a, a");

    std::vector<unsigned char> v{0x1};

    auto d4 = encoder.encodeInstructionWithImmediateBytes("add a, n", v);
    auto d5 = encoder.encodeInstructionWithImmediateBytes("bit bit, (ix+n)", v);

    return 0;
}
