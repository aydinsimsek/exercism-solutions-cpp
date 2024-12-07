#include <string>
#include <cctype>

class Solution
{
    public:
        bool isPalindrome(std::string s)
        {
            if(s.length() >= 2)
            {
                int left = 0;
                int right = s.length()-1;
                while(left <= right)
                {
                    if(!std::isalnum(s[left]))
                    {
                        left++;
                    }
                    else if(!std::isalnum(s[right]))
                    {
                        right--;
                    }
                    else if(std::tolower(s[left]) != std::tolower(s[right]))
                    {
                        return false;
                    }
                    else
                    {
                        left++;
                        right--;
                    }
                } 
            }
            return true;
        }
};