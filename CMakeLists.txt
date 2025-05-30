cmake_minimum_required(VERSION 3.14)
project(LeetCodeSolutions CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Try to find the MSYS2-installed GTest first
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
link_directories(${GTEST_LIBRARY_DIRS})

message(STATUS "Using system GTest: ${GTest_VERSION}")

enable_testing()
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure)
add_subdirectory(cpp)
