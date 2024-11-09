#include <vector>

class Solution
{
    public:
        int trap(std::vector<int>& height)
        {
            int res = 0;
            std::vector<int> leftIdx(height.size());
            leftIdx[0] = height[0];
            std::vector<int> rightIdx(height.size());
            rightIdx[height.size()-1] = height[height.size()-1];
            for(int i = 1; i < height.size(); i++)
            {
                if(height[i] > leftIdx[i-1])
                {
                    leftIdx[i] = height[i];
                }
                else
                {
                    leftIdx[i] = leftIdx[i-1];
                }
            }
            for(int i = height.size()-2; i >= 0; i--)
            {
                if(height[i] > rightIdx[i+1])
                {
                    rightIdx[i] = height[i];
                }
                else
                {
                    rightIdx[i] = rightIdx[i+1];
                }
            }
            for(int i = 0; i < height.size(); i++)
            {
                if(leftIdx[i] < rightIdx[i])
                {
                    res += leftIdx[i] - height[i];
                }
                else
                {
                    res += rightIdx[i] - height[i];
                }
            }
            return res;
        }
};