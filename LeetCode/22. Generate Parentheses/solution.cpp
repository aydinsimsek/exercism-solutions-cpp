#include <vector>
#include <string>

class Solution
{
    private:
        std::vector<std::string> combinations;
        int size;
        int openCount = 0;
        int closeCount = 0;

        void generateCombinations(std::string &combination)
        {
            if(combination.size() == size)
            {
                combinations.push_back(combination);
                return;
            }
            if(openCount < size/2)
            {
                combination += '('; 
                openCount++;
                generateCombinations(combination);
                openCount--;
                combination.erase(combination.length()-1, 1); 
            }
            if(closeCount < openCount)
            {
                combination += ')'; 
                closeCount++;
                generateCombinations(combination);
                closeCount--;
                combination.erase(combination.length()-1, 1); 
            }
        }

    public:
        std::vector<std::string> generateParenthesis(int n)
        {
            size = n*2; 
            std::string combination; 
            generateCombinations(combination);
            return combinations;
        }
};