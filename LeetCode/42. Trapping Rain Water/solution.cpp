#include <vector>

class Solution
{
    public:
        int trap(std::vector<int>& height)
        {
            int res = 0;
            std::vector<int> maxHeightOnLeft(height.size());
            maxHeightOnLeft[0] = height[0];
            std::vector<int> maxHeightOnRight(height.size());
            maxHeightOnRight[height.size()-1] = height[height.size()-1];

            for(int i = 1; i < height.size(); i++)
            {
                if(height[i] > maxHeightOnLeft[i-1])
                {
                    maxHeightOnLeft[i] = height[i];
                }
                else
                {
                    maxHeightOnLeft[i] = maxHeightOnLeft[i-1];
                }
            }
            for(int i = height.size()-2; i >= 0; i--)
            {
                if(height[i] > maxHeightOnRight[i+1])
                {
                    maxHeightOnRight[i] = height[i];
                }
                else
                {
                    maxHeightOnRight[i] = maxHeightOnRight[i+1];
                }
            }
            for(int i = 0; i < height.size(); i++)
            {
                if(maxHeightOnLeft[i] < maxHeightOnRight[i])
                {
                    res += maxHeightOnLeft[i] - height[i];
                }
                else
                {
                    res += maxHeightOnRight[i] - height[i];
                }
            }
            return res;
        }
};