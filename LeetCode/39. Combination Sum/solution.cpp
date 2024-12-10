#include <vector>
#include <algorithm>

class Solution
{
    private:
        std::vector<std::vector<int>> combinations;
        int sum = 0;

        void generateCombinations(std::vector<int> &candidates,  std::vector<int> &combination, int target, int startIdx)
        {
            if(sum == target)
            {
                combinations.push_back(combination);
                return;
            }

            for(int i = startIdx; i < candidates.size(); i++)
            {
                if(sum + candidates[i] > target)
                {
                    return;
                }
                else
                {
                    combination.push_back(candidates[i]);
                    sum += candidates[i];
                    generateCombinations(candidates, combination, target, i); 
                    combination.pop_back(); 
                    sum -= candidates[i];
                }
            }
        }

    public:
        std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target)
        {
            std::vector<int> combination; 
            std::sort(candidates.begin(), candidates.end());
            generateCombinations(candidates, combination, target, 0); 
            return combinations;
        }
};