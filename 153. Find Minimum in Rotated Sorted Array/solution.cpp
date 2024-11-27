#include <vector>

class Solution
{
    public:
        int findMin(std::vector<int>& nums)
        {
            int left = 0;
            int right = nums.size()-1;
            if(nums[left] > nums[right])
            {
                while(left <= right)
                {
                    int mid = left + (right-left) / 2;
                    if(mid < nums.size()-1 && nums[mid] > nums[mid+1])
                    {
                        return nums[mid+1];
                    }
                    else if(mid > 0 && nums[mid] < nums[mid-1])
                    {
                        return nums[mid];
                    } 
                    if(nums[mid] > nums[left])
                    {
                        left = mid+1;
                    }
                    else
                    {
                        right = mid-1;
                    }
                }
            }
            return nums[left];
        }
};