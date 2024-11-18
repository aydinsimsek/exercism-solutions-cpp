#include <string>
#include <algorithm>

class Solution
{
    public:
        bool isAnagram(std::string s, std::string t)
        {
            if(s.length() != t.length())
            {
                return false;
            }
            int letters[26] = {0};
            for(int i = 0; i < s.length(); i++)
            {
                letters[s[i] - 'a']++;
                letters[t[i] - 'a']--;
            }
            std::sort(letters, letters + 26);
            return letters[0] == 0 && letters[25] == 0;
        }
};