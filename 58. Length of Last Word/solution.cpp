#include <string>

class Solution 
{
    public:
        int lengthOfLastWord(std::string s)
        {
            int len = 0;
            for(int i = s.length()-1; i >= 0; i--)
            {
                if(s[i] == ' ')
                {
                    continue;
                }
                while(i >= 0 && s[i] != ' ')
                {
                    len++;
                    i--;
                }
                break;
            }
            return len;
        }
};