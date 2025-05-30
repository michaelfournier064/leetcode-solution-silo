#include "two_sum.h"
#include <unordered_map>

std::vector<int> TwoSum::hashMap(const std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> num_to_index;
    for (int i = 0; i < int(nums.size()); ++i)
    {
        int complement = target - nums[i];
        if (auto it = num_to_index.find(complement); it != num_to_index.end())
        {
            return {it->second, i};
        }
        num_to_index[nums[i]] = i;
    }
    return {};
}