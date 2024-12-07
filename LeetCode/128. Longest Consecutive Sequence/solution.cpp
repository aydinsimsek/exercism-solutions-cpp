#include <vector>
#include <unordered_set>

class Solution
{
    public:
        int longestConsecutive(std::vector<int>& nums)
        {
            int maxCount = 0;
            std::unordered_set<int> numSet(nums.begin(), nums.end());
            for(auto it = numSet.begin(); it != numSet.end(); it++)
            {
                int count = 1;
                int num = *it;
                if(numSet.find(num-1) == numSet.end())
                {
                    while(numSet.find(num+1) != numSet.end())
                    {
                        count++;
                        num++;
                    }
                    if(count > maxCount)
                    {
                        maxCount = count;
                    }
                }
            }
            return maxCount;
        }
};