#include "two_sum.h"

std::vector<int> TwoSum::bruteForce(const std::vector<int> &nums, int target)
{
    for (size_t i = 0; i < nums.size(); ++i)
    {
        for (size_t j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
                return {int(i), int(j)};
        }
    }
    return {};
}