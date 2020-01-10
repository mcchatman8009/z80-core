include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
)

FetchContent_GetProperties(googletest)

if (NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
endif ()

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

