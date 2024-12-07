#include <vector>
#include <algorithm>

class Solution
{
    public:
        int removeDuplicates(std::vector<int>& nums)
        {
            if(nums.size() > 2)
            {
                for(int i = 0; i < nums.size()-2; i++)
                {
                    if(nums[i] == nums[i+1] && nums[i+1] == nums[i+2])
                    {
                        nums[i] = -10001;
                    }
                }
            }
            nums.erase(std::remove(nums.begin(), nums.end(), -10001), nums.end());
            return nums.size();
        }
};