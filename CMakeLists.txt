cmake_minimum_required(VERSION 3.14)
project(LeetCodeSolutions CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Try to find the MSYS2-installed GTest first
find_package(GTest CONFIG)

message(STATUS "Using system GTest: ${GTest_VERSION}")

enable_testing()
add_subdirectory(cpp)
