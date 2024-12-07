#include <string>

class Solution 
{
    public:
        int strStr(std::string haystack, std::string needle) 
        {
            auto idx = haystack.find(needle);
            if(idx != std::string::npos)
            {
                return idx;
            }
            return -1;
        }
};