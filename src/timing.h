#ifndef Z80_CORE_TIMING_H
#define Z80_CORE_TIMING_H

#include <chrono>
#include <iostream>

using namespace std::chrono;
using namespace std;

#define timeLogic(name, block) \
    auto start = high_resolution_clock::now(); \
    block; \
    auto end = high_resolution_clock::now(); \
    auto duration = duration_cast<microseconds>(end - start); \
    std::cout << "********************** "<< name << " took: " << std::dec << duration.count() << " microseconds" << std::endl;

#endif //Z80_CORE_TIMING_H
