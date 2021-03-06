cmake_minimum_required(VERSION 3.12.4)
project(z80-core)

set(CMAKE_CXX_STANDARD 17)

#set (CMAKE_POSITION_INDEPENDENT_CODE TRUE)

enable_testing()
include(${CMAKE_CURRENT_SOURCE_DIR}/google-test.cmake)

add_subdirectory(z80-parser)
add_subdirectory(z80-byte-encoder)

#
# Includes...
#
include_directories(src)
include_directories(include)
include_directories(z80-parser/generated)
include_directories(z80-byte-encoder/src)
include_directories(${LIBANTLR4_SOURCE_DIR}/runtime/src)

add_library(Z80CoreObjectLibrary
    OBJECT
    src/IOMemoryHandler.h
    src/Z80Byte.cpp
    src/Z80Byte.h
    src/Z80Word.cpp
    src/Z80Word.h
    src/MemoryHandler.h
    src/FlagRegister.cpp
    src/FlagRegister.h
    src/ByteRegister.cpp
    src/ByteRegister.h
    src/AccumulatorRegister.cpp
    src/AccumulatorRegister.h
    src/WordRegister.cpp
    src/WordRegister.h
    src/ByteOperationHandler.cpp
    src/ByteOperationHandler.h
    src/OpcodeCycleReader.cpp
    src/OpcodeCycleReader.h
    src/Z80Cpu.cpp
    src/Z80Cpu.h
    src/MemoryCommandHandler.cpp
    src/MemoryCommandHandler.h
    src/ByteCpuRegisterSymbol.h
    src/WordCpuRegisterSymbol.h
    include/Z80Core.hpp
    src/Z80Core.cpp
    src/EVEN_PARITY.h
    src/timing.h
    src/CpuMnemonicTables.h
    src/RegisterByteOperationHandler.cpp
    src/RegisterByteOperationHandler.h
    src/Z80Cpu.CpuInstructionExecution.cpp
    src/Z80Cpu.Debug.cpp
    src/Z80CpuMnemonicMapper.cpp
    src/Z80CpuMnemonicMapper.h
    src/OpcodeType.h
    src/Z80Compiler.cpp src/Z80Compiler.h src/ImmediateValueReader.h src/interpolate.h include/Z80Core.h src/Z80CoreCFunctions.cpp)
set_property(TARGET Z80CoreObjectLibrary PROPERTY POSITION_INDEPENDENT_CODE 1)

add_library(Z80CoreShared SHARED $<TARGET_OBJECTS:Z80CoreObjectLibrary>)
set_property(TARGET Z80CoreShared PROPERTY POSITION_INDEPENDENT_CODE 1)
target_link_libraries(Z80CoreShared z80encoder z80parser)
add_dependencies(Z80CoreShared z80encoder z80parser)
set_target_properties(Z80CoreShared
    PROPERTIES PUBLIC_HEADER "include/Z80Core.hpp"
    OUTPUT_NAME "z80core"
    )
install(
    TARGETS Z80CoreShared
    DESTINATION lib
    COMPONENT libraries
)

add_library(Z80CoreStatic STATIC $<TARGET_OBJECTS:Z80CoreObjectLibrary>)
target_link_libraries(Z80CoreStatic z80encoder z80parser)
add_dependencies(Z80CoreStatic z80encoder z80parser)
set_target_properties(
    Z80CoreStatic
    PROPERTIES PUBLIC_HEADER "include/Z80Core.hpp"
    OUTPUT_NAME "z80core"
)
install(
    TARGETS Z80CoreStatic
    DESTINATION lib
    COMPONENT libraries
)


install(
    FILES include/Z80Core.hpp
    DESTINATION include
    COMPONENT headers
)

#
# Unit Tests
#
add_executable(
    Z80Test
    $<TARGET_OBJECTS:Z80CoreObjectLibrary>
    test/Z80WordTest.cpp
    test/Z80ByteTest.cpp
    test/WordRegisterTest.cpp
    test/AccumulatorRegisterTest.cpp
    test/ByteRegisterTest.cpp
    test/FlagRegisterTest.cpp
    test/Test.cpp
    test/Z80CpuCommandExpectedTestResults.cpp
    test/Z80CpuCommandExpectedTestResults.h
    test/LD_TEST.cpp
    test/ADD_TEST.cpp
    test/SUB_TEST.cpp
    test/AND_TEST.cpp
    test/OR_TEST.cpp
    test/XOR_TEST.cpp
    test/CP_TEST.cpp
    test/INC_TEST.cpp
    test/INC_TEST.cpp
    test/DEC_TEST.cpp
    test/JP_TEST.cpp
    test/JR_TEST.cpp
    test/CALL_TEST.cpp
    test/RET_TEST.cpp
    test/CompilerTest.cpp
    test/Z80CpuTestFixture.cpp
    test/Z80CpuTestFixture.h
    test/TestMemoryHandler.cpp
    test/TestMemoryHandler.h
    test/TestIOMemoryHandler.cpp
    test/TestIOMemoryHandler.h
    test/ExchagneAndBlockTransfrerCommandTest.cpp
    test/ArithemeticControlCommandsTest.cpp
    test/Z80CoreCFunctionsTest.cpp
    test/Z80CoreTest.cpp)

target_link_libraries(Z80Test z80encoder z80parser gtest gmock gtest_main)
add_dependencies(Z80Test z80encoder z80parser gtest gmock gtest_main)
add_test(Z80Test Z80Test)

set(CPACK_PACKAGE_NAME "z80-core")
set(CPACK_PACKAGE_VENDOR "")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A full Z80 Cpu Library")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_COMPONENTS_ALL libraries headers)

include(CPack)

