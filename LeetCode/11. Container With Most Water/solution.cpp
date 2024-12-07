#include <vector>

class Solution
{
    public:
        int maxArea(std::vector<int>& height)
        {
            int maxArea = 0;
            int currArea = 0;
            int leftIdx = 0;
            int rightIdx = height.size()-1;
            while(leftIdx < rightIdx)
            {
                int minHeight = height[leftIdx] < height[rightIdx] ? height[leftIdx] : height[rightIdx];
                currArea = minHeight * (rightIdx - leftIdx);
                if(currArea > maxArea)
                {
                    maxArea = currArea;
                }
                if(minHeight == height[leftIdx])
                {
                    leftIdx++;
                }
                else
                {
                    rightIdx--;
                }
            }
            return maxArea;
        }
};