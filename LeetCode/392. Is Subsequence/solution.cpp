#include <string>

class Solution
{
    public:
        bool isSubsequence(std::string s, std::string t)
        {
            int tIdx = -1;
            for(int sIdx = 0; sIdx < s.length(); sIdx++)
            {
                tIdx = t.find(s[sIdx], tIdx+1);
                if(tIdx == std::string::npos)
                {
                    return false;
                }
            }
            return true;
        }
};