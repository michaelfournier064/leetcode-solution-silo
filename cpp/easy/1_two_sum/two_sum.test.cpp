#include <gtest/gtest.h>
#include <vector>
#include "two_sum.h"

TEST(TwoSumTests, BruteForce_Basic)
{
    EXPECT_EQ(TwoSum::bruteForce({2, 7, 11, 15}, 9), (std::vector<int>{0, 1}));
}

TEST(TwoSumTests, BruteForce_DifferentOrder)
{
    EXPECT_EQ(TwoSum::bruteForce({11, 15, 2, 7}, 9), (std::vector<int>{2, 3}));
}

TEST(TwoSumTests, BruteForce_NegativeNumbers)
{
    EXPECT_EQ(TwoSum::bruteForce({-3, 4, 3, 90}, 0), (std::vector<int>{0, 2}));
}

TEST(TwoSumTests, BruteForce_Duplicates)
{
    EXPECT_EQ(TwoSum::bruteForce({3, 3}, 6), (std::vector<int>{0, 1}));
}

TEST(TwoSumTests, HashMap_Basic)
{
    EXPECT_EQ(TwoSum::hashMap({3, 2, 4}, 6), (std::vector<int>{1, 2}));
}

TEST(TwoSumTests, HashMap_DifferentOrder)
{
    EXPECT_EQ(TwoSum::hashMap({4, 3, 2}, 6), (std::vector<int>{0, 2}));
}

TEST(TwoSumTests, HashMap_NegativeNumbers)
{
    EXPECT_EQ(TwoSum::hashMap({-1, -2, -3, -4, -5}, -8), (std::vector<int>{2, 4}));
}

TEST(TwoSumTests, HashMap_Duplicates)
{
    EXPECT_EQ(TwoSum::hashMap({1, 5, 1, 5}, 10), (std::vector<int>{1, 3}));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}