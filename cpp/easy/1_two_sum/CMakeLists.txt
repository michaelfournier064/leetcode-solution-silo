# 1) Gather your solution sources
file(GLOB TWO_SUM_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/two_sum_brute_force.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/two_sum_hash_map.cpp
)

# 2) Build a static library from your sources
add_library(two_sum_lib STATIC
  ${TWO_SUM_SOURCES}
)
target_include_directories(two_sum_lib PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# 3) Find GoogleTest and include its CMake functions
find_package(GTest REQUIRED)
include(GoogleTest)

# 4) Your test executable
add_executable(two_sum_test two_sum.test.cpp)
target_link_libraries(two_sum_test PRIVATE GTest::gtest_main two_sum_lib)

# 5) Register your test executable with CTest
gtest_discover_tests(two_sum_test
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)