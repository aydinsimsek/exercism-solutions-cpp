#include <vector>

class Solution 
{
    public:
        bool canJump(std::vector<int>& nums) 
        {
            int target = nums.size()-1;
            int maxDest = 0;
            for(int i = 0; i <= target; i++)
            {
                if(i > maxDest)
                {
                    return false;
                }      
                if(i + nums[i] > maxDest)  
                {
                    maxDest = i + nums[i];
                }
                if(maxDest >= target)
                {
                    return true;
                }
            }
            return false;
        }
};
