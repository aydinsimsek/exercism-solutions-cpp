#include <vector>
#include <algorithm>

class Solution
{
    public:
        int removeDuplicates(std::vector<int>& nums)
        {
            for(int i = 0; i < nums.size()-1; i++)
            {
                if(nums[i] == nums[i+1])
                {
                    nums[i] = -101;
                }
            }
            nums.erase(std::remove(nums.begin(), nums.end(), -101), nums.end());
            return nums.size();
        }
};