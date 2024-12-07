#include <string>
#include <vector>
#include <algorithm>

class Solution 
{
    public:
        std::string longestCommonPrefix(std::vector<std::string>& strs) 
        {
            std::string common = "";
            if(strs.size() == 1)
            {
                return strs[0];
            }
            std::sort(strs.begin(), strs.end());
            if(strs[0] == strs[1])
            {
                common = strs[0];
            }
            else
            {
                for(int i = 0; strs[0].length(); i++)
                {
                    if(strs[0][i] != strs[1][i])
                    {
                        common = strs[0].substr(0, i);
                        break;   
                    }
                }
            }
            if(!common.empty())
            {
                for(int i = 2; i < strs.size(); i++)
                {
                    for(int j = 0; j < common.length(); j++)
                    {
                        if(strs[i][j] != common[j])
                        {
                            common.erase(j);
                            break; 
                        }
                    }
                }
            }
            return common;
        }
};