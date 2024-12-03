#include <vector>
#include <algorithm>

class Solution
{
    private:
        void removeDuplicates(std::vector<std::vector<int>> &triplets)
        {
            std::sort(triplets.begin(), triplets.end());
            auto last = std::unique(triplets.begin(), triplets.end());
            triplets.erase(last, triplets.end());
        }

        std::vector<std::vector<int>> twoSum(std::vector<int> &nums, int target, int targetIdx)
        {
            std::vector<std::vector<int>> res;
            int leftIdx = 0;
            int rightIdx = nums.size()-1;
            while(leftIdx < rightIdx)
            {
                if(leftIdx > 0 && nums[leftIdx] == nums[leftIdx-1])
                {
                    leftIdx++;
                }
                else if(rightIdx < nums.size()-1 && nums[rightIdx] == nums[rightIdx+1])
                {
                    rightIdx--;
                }
                else if(nums[leftIdx] + nums[rightIdx] == target)
                {
                    if(targetIdx == leftIdx)
                    {
                        leftIdx++;
                    }
                    else if(targetIdx == rightIdx)
                    {
                        rightIdx--;
                    }
                    else
                    {
                        res.push_back({leftIdx, rightIdx});
                        leftIdx++;
                        rightIdx--;
                    }
                }
                else if(nums[leftIdx] + nums[rightIdx] > target)
                {
                    rightIdx--;
                }
                else
                {
                    leftIdx++;
                }
            }
            return res;
        }

    public:
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
        {
            std::vector<std::vector<int>> triplets;
            std::sort(nums.begin(), nums.end());
            for(int i = 0; i < nums.size(); i++)
            {
                std::vector<std::vector<int>> res = twoSum(nums, -nums[i], i);
                for(int j = 0; j < res.size(); j++)
                {
                    int firstIdx = res[j][0];
                    int secondIdx = res[j][1];
                    std::vector<int> triplet;
                    triplet = {nums[i], nums[firstIdx], nums[secondIdx]};
                    std::sort(triplet.begin(), triplet.end());
                    triplets.push_back(triplet);
                }
            }
            removeDuplicates(triplets);
            return triplets;
        }
};