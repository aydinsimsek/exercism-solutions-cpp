#include <vector>
#include <unordered_map>

class Solution
{
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target)
        {
            std::vector<int> res(2);
            std::unordered_map<int , int> umap;
            for(int i = 0; i < nums.size(); i++)
            {
                auto it = umap.find(target-nums[i]);
                if(it != umap.end())
                {
                    res[0] = i;
                    res[1] = it->second;
                    break;
                }
                umap[nums[i]] = i;
            }
            return res;
        }
};