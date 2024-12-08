#include <vector>

class Solution
{
    private: 
        std::vector<std::vector<int>> combinations;
        int maxNum;
        int size;

        void generateCombinations(std::vector<int> &combination, int startIdx)
        {
            if(combination.size() == size)
            {
                combinations.push_back(combination);
                return;
            }
            for(int i = startIdx; i <= maxNum; i++)
            {
                combination.push_back(i);
                generateCombinations(combination, i+1);
                combination.pop_back();
            }
        }

    public:
        std::vector<std::vector<int>> combine(int n, int k)
        {
            maxNum = n;
            size = k;
            std::vector<int> combination;
            generateCombinations(combination, 1);
            return combinations;
        }
};