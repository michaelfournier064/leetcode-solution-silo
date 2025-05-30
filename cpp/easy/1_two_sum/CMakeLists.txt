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

# 3) Your test executable
add_executable(two_sum_test
  two_sum.test.cpp
)

# 4) Link both your library **and** GTest’s main
find_package(GTest CONFIG REQUIRED)
target_link_libraries(two_sum_test
  PRIVATE
    two_sum_lib
    GTest
)

include(GoogleTest)
gtest_discover_tests(two_sum_test
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
