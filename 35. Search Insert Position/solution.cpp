#include <vector>

class Solution
{
    public:
        int searchInsert(std::vector<int>& nums, int target)
        {
            if(nums.size() == 1)
            {
                if(nums[0] >= target)
                {
                    return 0;
                }
                else 
                {
                    return 1;
                }
            }
            int left = 0; 
            int right = nums.size()-1;
            while(left <= right)
            {
                int mid = left + (right-left) / 2;
                if(nums[mid] == target) 
                {
                    return mid;
                }
                else if(nums[mid] < target)
                {
                    left = mid+1;
                }
                else if(nums[mid] > target)
                {
                    right = mid-1;
                }
            }
            return left;
        }
};