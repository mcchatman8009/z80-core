project(z80-byte-encoder)

enable_testing()
include(${CMAKE_CURRENT_SOURCE_DIR}/google-test.cmake)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)

add_executable(InstructionEncoderTest src/csv.h src/Z80InstructionEncoder.cpp src/Z80InstructionEncoder.h test/Test.cpp)
add_library(z80encoder src/csv.h src/Z80InstructionEncoder.cpp src/Z80InstructionEncoder.h src/csv.h)
target_link_libraries(InstructionEncoderTest gtest gmock gtest_main)
add_test(InstructionEncoderTest InstructionEncoderTest)
