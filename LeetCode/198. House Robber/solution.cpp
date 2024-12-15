#include <vector>

class Solution
{
    public:
        int rob(std::vector<int>& nums)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(i >= 2)
                {
                    if(nums[i] + nums[i-2] > nums[i-1])
                    {
                        nums[i] = nums[i] + nums[i-2];
                    }
                    else
                    {
                        nums[i] = nums[i-1];
                    }
                    
                }
                else if(i == 1 && nums[1] < nums[0])
                {
                    nums[1] = nums[0];
                }
            }
            return nums[nums.size()-1];
        }
};