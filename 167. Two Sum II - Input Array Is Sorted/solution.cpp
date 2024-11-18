#include <vector>

class Solution
{
    public:
        std::vector<int> twoSum(std::vector<int>& numbers, int target)
        {
            std::vector<int> res(2);
            int leftIdx = 0;
            int rightIdx = numbers.size()-1;
            while(leftIdx < rightIdx)
            {
                if(numbers[leftIdx] + numbers[rightIdx] == target)
                {
                    res[0] = leftIdx+1;
                    res[1] = rightIdx+1;
                    break;
                }
                else if(numbers[leftIdx] + numbers[rightIdx] > target)
                {
                    rightIdx--;
                }
                else
                {
                    leftIdx++;
                }
            }
            return res;
        }
};