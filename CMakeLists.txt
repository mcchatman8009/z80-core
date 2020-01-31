cmake_minimum_required(VERSION 3.12.4)
project(z80-core)

set(CMAKE_CXX_STANDARD 17)


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
#message(${LIBANTLR4_SOURCE_DIR})
#include_directories(${LIBANTLR4_SOURCE_DIR}/runtime/Cpp/runtime/src)

#get_cmake_property(_variableNames VARIABLES)
#list (SORT _variableNames)
#foreach (_variableName ${_variableNames})
#    message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()

#
# Unit Tests
#
add_executable(Z80Test
    src/RegisterByteOperationHandler.h
    src/RegisterByteOperationHandler.cpp
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
    src/Z80Compiler.cpp
    src/Z80Compiler.h
    test/Z80WordTest.cpp
    test/Z80ByteTest.cpp
    test/WordRegisterTest.cpp
    test/AccumulatorRegisterTest.cpp
    test/ByteRegisterTest.cpp
    test/FlagRegisterTest.cpp
    test/Test.cpp
    test/Z80CpuCommandExpectedTestResults.cpp
    test/Z80CpuCommandExpectedTestResults.h
    test/Z80CpuTest.h
    test/LD.cpp
    test/ADD.cpp
    test/SUB.cpp
    test/AND.cpp
    test/OR.cpp
    test/XOR.cpp
    test/CP.cpp
    test/INC.cpp
    test/INC.cpp
    test/DEC.cpp
    src/Z80Cpu.CpuInstructionExecution.cpp
    src/Z80Cpu.Debug.cpp
    src/Z80CpuMnemonicMapper.cpp
    src/Z80CpuMnemonicMapper.h
    src/OpcodeType.h test/JP.cpp test/JR.cpp test/CALL.cpp test/RET.cpp src/ImmediateValueReader.h test/CompilerTest.cpp test/Z80CpuTestFixture.cpp test/Z80CpuTestFixture.h test/TestMemoryHandler.cpp test/TestMemoryHandler.h test/TestIOMemoryHandler.cpp test/TestIOMemoryHandler.h test/ExchagneAndBlockTransfrerCommandTest.cpp test/ArithemeticControlCommandsTest.cpp)

target_link_libraries(Z80Test z80encoder z80parser gtest gmock gtest_main)
add_dependencies(Z80Test z80encoder z80parser gtest gmock gtest_main)
add_test(Z80Test Z80Test)

add_library(z80core
    SHARED
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
    include/Z80Core.h
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
    src/Z80Compiler.cpp src/Z80Compiler.h src/ImmediateValueReader.h src/interpolate.h)
target_link_libraries(z80core z80encoder z80parser)
add_dependencies(z80core z80encoder z80parser)
IF (CMAKE_COMPILER_IS_GNUCC)
    MESSAGE(STATUS "=== GCC C COMPILER DETECTED")
    set_target_properties(z80core PROPERTIES LINK_FLAGS "-fPIC" PUBLIC_HEADER "include/Z80Core.h")
else ()
    set_target_properties(z80core PROPERTIES PUBLIC_HEADER "include/Z80Core.h")
endif ()


install(
    TARGETS z80core
    DESTINATION lib
    COMPONENT libraries
)

install(
    FILES include/Z80Core.h
    DESTINATION include
    COMPONENT headers
)

set(CPACK_PACKAGE_NAME "z80-core")
set(CPACK_PACKAGE_VENDOR "")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A full Z80 Cpu Library")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_COMPONENTS_ALL libraries headers)

include(CPack)

