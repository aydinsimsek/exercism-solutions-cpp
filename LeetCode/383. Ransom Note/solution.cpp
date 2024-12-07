#include <string>

class Solution
{
    public:
        bool canConstruct(std::string ransomNote, std::string magazine)
        {
            if(magazine.length() < ransomNote.length())
            {
                return false;
            }
            int letters[26] = {0};
            for(int i = 0; i < magazine.length(); i++)
            {
                letters[magazine[i] - 'a']++;
            }
            for(int i = 0; i < ransomNote.length(); i++)
            {
                if(--letters[ransomNote[i] - 'a'] < 0)
                {
                    return false;
                }
            }
            return true;
        }
};