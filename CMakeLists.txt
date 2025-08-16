cmake_minimum_required(VERSION 3.17)
project(AtCoderTemplate)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add the test executable
add_executable(UtilityTest test_utilities.cpp)
target_link_libraries(UtilityTest gtest gtest_main)

# Enable CTest integration
include(GoogleTest)
gtest_discover_tests(UtilityTest)

# Set compiler flags
if(NOT MSVC)
    target_compile_options(UtilityTest PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wno-sign-conversion)
else()
    target_compile_options(UtilityTest PRIVATE /W4 /permissive- /sdl)
endif()
