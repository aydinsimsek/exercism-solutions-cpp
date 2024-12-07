#include <vector>

class Solution
{
    public:
        int singleNumber(std::vector<int>& nums)
        {
            int mask = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                mask ^= nums[i];
            }
            return mask;
        }
};