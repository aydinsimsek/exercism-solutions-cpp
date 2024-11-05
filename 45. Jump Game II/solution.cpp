#include <vector>

class Solution 
{
    public:
        int jump(std::vector<int>& nums)
        {
            int target = nums.size()-1;
            if(target == 0)
            {
                return 0;
            }
            int currDest = 0;
            int maxDest = 0;
            int count = 0;
            for(int i = 0; i < target; i++)
            {
                if(i + nums[i] > maxDest)  
                {
                    maxDest = i + nums[i];
                }
                if(i == currDest)
                {
                    count++;
                    if(maxDest >= target)
                    {
                        return count;
                    }
                    currDest = maxDest;
                }
            }
            return -1;
        }
};
