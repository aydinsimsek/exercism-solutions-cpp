#include <string>
#include <vector>

class Solution
{
    public:
        std::string convert(std::string s, int numRows)
        {
            std::string res;
            if(numRows == 1)
            {
                return s;
            }
            std::vector<std::string> rows(numRows);
            int currRow = 0;
            int prevRow = -1;
            for(int i = 0; i < s.length(); i++)
            {
                rows[currRow].push_back(s[i]);
                if(currRow == 0)
                {
                    prevRow = currRow;
                    currRow = 1;
                }
                else if(currRow > prevRow && currRow != numRows-1)
                {
                    prevRow = currRow;
                    currRow++;    
                }
                else
                {
                    prevRow = currRow;
                    currRow--;
                }
            }
            for(int i = 0; i < numRows; i++)
            {
                res += rows[i];
            }
            return res;
        }
};