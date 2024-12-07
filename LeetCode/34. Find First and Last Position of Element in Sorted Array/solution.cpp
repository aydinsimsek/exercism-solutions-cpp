#include <vector>

class Solution
{
    private:
        int findIdx(std::vector<int> &nums, int firstIdx, int target)
        {
            int left = 0;
            int right = nums.size()-1;
            int idx = -1;
            while(left <= right)
            {
                int mid = left + (right-left) / 2;
                if(nums[mid] == target)
                {
                    idx = mid; 
                    if(firstIdx == -1)
                    {
                        right = mid-1; 
                    }
                    else
                    {
                        left = mid+1; 
                    }
                }
                else if(nums[mid] < target)
                {
                    left = mid+1;
                }
                else
                {
                    right = mid-1;
                }
            }
            return idx;
        }

    public:
        std::vector<int> searchRange(std::vector<int>& nums, int target)
        {
            int firstIdx = -1;
            int lastIdx = -1;
            if(nums.size() == 1 && nums[0] == target)
            {
                return {0, 0};
            }
            else
            {
                firstIdx = findIdx(nums, firstIdx, target);
                lastIdx = findIdx(nums, firstIdx, target);
            }
            return {firstIdx, lastIdx};
        }
};