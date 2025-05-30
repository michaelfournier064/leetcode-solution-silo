#ifndef TWO_SUM_H
#define TWO_SUM_H

#include <vector>

class TwoSum
{
public:
    static std::vector<int> bruteForce(const std::vector<int> &nums, int target);
    static std::vector<int> hashMap(const std::vector<int> &nums, int target);
};
#endif // TWO_SUM_H