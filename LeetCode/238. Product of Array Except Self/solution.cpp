#include <vector>

class Solution 
{
    public:
        std::vector<int> productExceptSelf(std::vector<int>& nums) 
        {
            std::vector<int> result(nums.size());
            std::vector<int> prefixProducts(nums.size());
            prefixProducts[0] = nums[0];
            std::vector<int> suffixProducts(nums.size());
            suffixProducts[nums.size()-1] = nums[nums.size()-1];
            for(int i = 1; i < nums.size(); i++)
            {
                prefixProducts[i] = prefixProducts[i-1] * nums[i];   
            }
            for(int i = nums.size()-2; i >= 0; i--)
            {
                suffixProducts[i] = suffixProducts[i+1] * nums[i];
            }
            for(int i = 0; i < nums.size(); i++)
            {
                if(i == 0)
                {
                    result[0] = suffixProducts[1];
                }
                else if(i == nums.size()-1)
                {
                    result[i] = prefixProducts[i-1];
                }
                else
                {
                    result[i] = prefixProducts[i-1] * suffixProducts[i+1]; 
                }
            }
            return result;
        }
};