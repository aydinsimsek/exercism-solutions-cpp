#include <vector>

class Solution 
{
    public:
        void rotate(std::vector<int>& nums, int k) 
        {
            std::vector<int> tmp(nums.size());
            for(int i = 0; i < nums.size(); i++)
            {
                tmp[(i+k) % nums.size()] = nums[i];
            }
            nums = tmp;
        }
};