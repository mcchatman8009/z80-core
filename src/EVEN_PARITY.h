#ifndef Z80_CORE_EVEN_PARITY_H
#define Z80_CORE_EVEN_PARITY_H

//@formatter:off
const bool EVEN_PARITY_TABLE[256] = {true, false, false, true, false, true, true, false, false, true, true, false, true,
                                     false, false, true, false, true, true, false, true, false, false, true, true, false,
                                     false, true, false, true, true, false, false, true, true, false, true, false, false,
                                     true, true, false, false, true, false, true, true, false, true, false, false, true,
                                     false, true, true, false, false, true, true, false, true, false, false, true, false,
                                     true, true, false, true, false, false, true, true, false, false, true, false, true,
                                     true, false, true, false, false, true, false, true, true, false, false, true, true,
                                     false, true, false, false, true, true, false, false, true, false, true, true, false,
                                     false, true, true, false, true, false, false, true, false, true, true, false, true,
                                     false, false, true, true, false, false, true, false, true, true, false, false, true,
                                     true, false, true, false, false, true, true, false, false, true, false, true, true,
                                     false, true, false, false, true, false, true, true, false, false, true, true, false,
                                     true, false, false, true, true, false, false, true, false, true, true, false, false,
                                     true, true, false, true, false, false, true, false, true, true, false, true, false,
                                     false, true, true, false, false, true, false, true, true, false, true, false, false,
                                     true, false, true, true, false, false, true, true, false, true, false, false, true,
                                     false, true, true, false, true, false, false, true, true, false, false, true, false,
                                     true, true, false, false, true, true, false, true, false, false, true, true, false,
                                     false, true, false, true, true, false, true, false, false, true, false, true, true,
                                     false, false, true, true, false, true, false, false, true};
//@formatter:on
#endif //Z80_CORE_EVEN_PARITY_H
