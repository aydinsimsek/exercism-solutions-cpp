#include <vector>

class Solution 
{
    public:
        int removeElement(std::vector<int>& nums, int val)
        {
            auto it = nums.begin();
            while(it != nums.end())
            {
                if(*it == val)
                {
                    nums.erase(it);
                }
                else
                {
                    it++;
                }
            }
            return nums.size();
        }
};