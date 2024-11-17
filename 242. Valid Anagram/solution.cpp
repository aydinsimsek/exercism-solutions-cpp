#include <string>
#include <unordered_map>

class Solution
{
    public:
        bool isAnagram(std::string s, std::string t)
        {
            if(s.length() != t.length())
            {
                return false;
            }
            std::unordered_map<char, int> umap;
            for(int i = 0; i < s.length(); i++)
            {
                umap[s[i]]++;
                umap[t[i]]--;
            }
            for(auto it = umap.begin(); it != umap.end(); it++)
            {
                if(it->second != 0)
                {
                    return false;
                }
            }
            return true;
        }
};