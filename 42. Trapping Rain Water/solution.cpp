#include <vector>

class Solution
{
    public:
        int trap(std::vector<int>& height)
        {
            int res = 0;
            int currIdx = 0;
            while(currIdx < height.size()-1)
            {
                if(height[currIdx] == 0)
                {
                    currIdx++;
                    continue;
                }
                int rightIdx = -1;
                int currMax = 0;
                for(int i = currIdx+1; i < height.size(); i++)
                {   
                    if(height[i] > currMax)
                    {
                        currMax = height[i];
                        rightIdx = i;
                        if(currMax > height[currIdx])
                        {
                            break;
                        }
                    }
                }
                if(rightIdx == -1)
                {
                    return res;
                }
                for(int i = currIdx+1; i < rightIdx; i++)
                {
                    res -= height[i];
                }
                int _height;
                if(height[currIdx] < height[rightIdx])
                {
                    _height = height[currIdx];
                }
                else 
                {
                    _height = height[rightIdx];
                }
                int _width = rightIdx - currIdx - 1;
                res += _height * _width;
                currIdx = rightIdx;
            }
            return res;
        }
};
