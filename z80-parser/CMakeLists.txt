cmake_minimum_required(VERSION 3.15)
project(z80-parser)
#set_property(GLOBAL PROPERTY GLOBAL_DEPENDS_DEBUG_MODE 1)

set(CMAKE_CXX_STANDARD 17)


include(antlr4.cmake)
set_target_properties(antlr4_shared PROPERTIES EXCLUDE_FROM_ALL 1 EXCLUDE_FROM_DEFAULT_BUILD 1)

enable_testing()
include(${CMAKE_CURRENT_SOURCE_DIR}/google-test.cmake)

include_directories(generated)
include_directories(${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src)

link_directories(${CMAKE_SOURCE_DIR}/dist)

add_executable(Z80ParserTest
    generated/Z80BaseListener.cpp
    generated/Z80BaseListener.h
    generated/Z80Lexer.cpp
    generated/Z80Lexer.h
    generated/Z80Lexer.interp
    generated/Z80Lexer.tokens
    generated/Z80Listener.cpp
    generated/Z80Listener.h
    generated/Z80Parser.cpp
    generated/Z80Parser.h
    test/Test.cpp
    test/Test8BitLoadCommands.cpp test/Z80ParserTestFixture.cpp test/Z80ParserTestFixture.h test/TestNumbers.cpp test/Test16BitCommands.cpp test/TestExchangeCommands.cpp test/TestArithmeticCommands.cpp test/TestArithmeticControlCommands.cpp test/TestWordArithemeticCommands.cpp test/TestRotateCommands.cpp test/TestBitManipulationCommands.cpp test/TestBranchCommands.cpp test/TestInputAndOutputCommand.cpp)
target_link_libraries(Z80ParserTest antlr4_static gtest gmock gtest_main)
add_dependencies(Z80ParserTest antlr4_static)
add_test(Z80ParserTest Z80ParserTest)

add_library(z80parser STATIC
    generated/Z80BaseListener.cpp
    generated/Z80BaseListener.h
    generated/Z80Lexer.cpp
    generated/Z80Lexer.h
    generated/Z80Lexer.interp
    generated/Z80Lexer.tokens
    generated/Z80Listener.cpp
    generated/Z80Listener.h
    generated/Z80Parser.cpp
    generated/Z80Parser.h
    )

target_link_libraries(z80parser antlr4_static)
add_dependencies(z80parser antlr4_static)
