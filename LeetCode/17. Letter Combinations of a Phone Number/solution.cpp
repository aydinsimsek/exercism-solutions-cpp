#include <vector>
#include <string>

class Solution
{   
    private:
        std::vector<std::string> combinations;
        int size;
        const std::vector<std::string> letterRepresentations = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        void getCombinations(std::string &digits, std::string &combination, int idx)
        {
            if(combination.length() == size)
            {
                combinations.push_back(combination);
                return;
            }
            std::string letters = letterRepresentations[(digits[idx] - '0')-2];
            for(int j = 0; j < letters.length(); j++)
            {
                combination += letters[j];
                getCombinations(digits, combination, idx+1);
                combination.erase(combination.length()-1, 1);
            }
        }

    public:
        std::vector<std::string> letterCombinations(std::string digits)
        { 
            std::string combination = "";  
            size = digits.length();
            if(size != 0)
            {
                getCombinations(digits, combination, 0);
            }
            return combinations; 
        }
};