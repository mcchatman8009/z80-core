include(FetchContent)

FetchContent_Declare(
    antlr4
    GIT_REPOSITORY https://github.com/antlr/antlr4.git
)

FetchContent_GetProperties(antlr4)

if (NOT antlr4_POPULATED)
    FetchContent_Populate(antlr4)
endif ()

add_subdirectory(${antlr4_SOURCE_DIR}/runtime/Cpp ${antlr4_BINARY_DIR})

#include_directories(${antlr4_SOURCE_DIR}/include)
