#include <string>
#include <unordered_map>

class Solution
{
    public:
        bool isIsomorphic(std::string s, std::string t)
        {
            if(s.length() != t.length())
            {
                return false;
            }
            std::unordered_map<char, char> umap;
            for(int i = 0; i < s.length(); i++)
            {
                if(umap.find(s[i]) == umap.end())
                {
                    for(auto it = umap.begin(); it != umap.end(); it++)
                    {
                        if(it->second == t[i])
                        {
                            return false;
                        }
                    }
                    umap[s[i]] = t[i];
                }
                else if(umap[s[i]] != t[i])
                {
                    return false;
                }
            }
            return true;
        }
};