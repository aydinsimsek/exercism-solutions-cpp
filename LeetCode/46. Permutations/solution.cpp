#include <vector>

class Solution
{
    private:
        std::vector<std::vector<int>> permutations;

        void generatePermutations(std::vector<int> &nums, std::vector<int> &permutation, std::vector<bool> &isIncluded)
        {
            if(permutation.size() == nums.size())
            {
                permutations.push_back(permutation);
                return;
            }
            for(int i = 0; i < nums.size(); i++)
            {
                if(isIncluded[nums[i]+10] == true)
                {
                    continue;
                }
                permutation.push_back(nums[i]);
                isIncluded[nums[i]+10] = true;
                generatePermutations(nums, permutation, isIncluded);
                isIncluded[nums[i]+10] = false;
                permutation.pop_back();
            }
        }

    public:
        std::vector<std::vector<int>> permute(std::vector<int>& nums)
        {
            std::vector<int> permutation;
            std::vector<bool> isIncluded(21, false);
            generatePermutations(nums, permutation, isIncluded);
            return permutations;
        }
};