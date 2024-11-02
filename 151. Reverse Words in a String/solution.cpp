#include <vector>
#include <string>

class Solution
{
    public:
        std::string reverseWords(std::string s) 
        {
            std::string rev;
            unsigned int firstIdx;
            unsigned int lastIdx;
            int spaceIdx;
            int currIdx = s.length()-1;
            while(currIdx >= 0)
            {
                if(s[currIdx] != ' ')
                {
                    lastIdx = currIdx;
                    spaceIdx = s.rfind(' ', lastIdx);
                    if(spaceIdx != -1)
                    {
                        firstIdx = spaceIdx+1;
                        if(rev.length() != 0) 
                        {
                            rev += " "; 
                        }
                        rev += s.substr(firstIdx,lastIdx-firstIdx+1);
                        currIdx = spaceIdx-1;
                    }
                    else
                    {
                        firstIdx = 0;
                        if(rev.length() != 0) 
                        {
                            rev += " "; 
                        }
                        rev += s.substr(firstIdx,lastIdx-firstIdx+1);
                        break;
                    }
                }
                else
                {
                    currIdx--;
                }
            }
            return rev;
        }
};