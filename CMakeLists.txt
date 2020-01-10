cmake_minimum_required(VERSION 3.15)
project(z80-core)

set(CMAKE_CXX_STANDARD 17)


enable_testing()
include(${CMAKE_CURRENT_SOURCE_DIR}/google-test.cmake)

#
# Includes...
#
include_directories(src)
include_directories(include)

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
        src/DAA.h
        src/OpcodeCycleReader.cpp
        src/OpcodeCycleReader.h
        src/Z80Cpu.cpp
        src/Z80Cpu.h
        src/MemoryCommandHandler.cpp
        src/MemoryCommandHandler.h
        src/ByteCpuRegisterSymbol.h
        src/WordCpuRegisterSymbol.h
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
        src/OpcodeType.h test/JP.cpp test/JR.cpp test/CALL.cpp test/RET.cpp)

target_link_libraries(Z80Test gtest gmock gtest_main)
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
        src/DAA.h
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
        )

set_target_properties(z80core PROPERTIES PUBLIC_HEADER "include/Z80Core.h")

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
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A Z80 Cpu Libary")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "CPack Component Example")
set(CPACK_COMPONENTS_ALL libraries headers)
set(CPACK_COMPONENT_GROUP_DEVELOPMENT_DESCRIPTION "All the need parts to use the Z80 Core Library")
#set(CPACK_TGZ_COMPONENT_INSTALL ON)
#set(CPACK_RPM_COMPONENT_INSTALL ON)
#set(CPACK_PackageMaker_COMPONENT_INSTALL ON)



include(CPack)

