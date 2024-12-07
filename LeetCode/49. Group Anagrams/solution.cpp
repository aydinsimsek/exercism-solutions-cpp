#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

class Solution
{
    public:
        std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs)
        {
            std::vector<std::vector<std::string>> res; 
            if(strs.size() == 1)
            {
                res.push_back(strs); 
            }
            else
            {
                std::vector<std::string> tmp = strs;
                std::unordered_map<std::string, std::vector<std::string>> umap;
                for(int i = 0; i < tmp.size(); i++)
                {
                    std::sort(tmp[i].begin(), tmp[i].end());
                }
                for(int i = 0; i < tmp.size(); i++)
                {
                    umap[tmp[i]].push_back(strs[i]);  
                }
                for(auto it = umap.begin(); it != umap.end(); it++)
                {
                    res.push_back(it->second);
                }
            }
            return res;
        }
};