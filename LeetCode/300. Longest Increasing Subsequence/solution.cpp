#include <vector>

class Solution
{
    private:
        void checkUpdate(int num, std::vector<int> &subsequence)
        {
            int left = 0;
            int right = subsequence.size()-1; 
            int mid;
            while(left <= right)
            {
                mid = left + (right-left) / 2;
                if(num == subsequence[mid])
                {
                    return; 
                }
                else if(subsequence[mid] > num)
                {
                    right = mid-1; 
                }
                else
                {
                    left = mid+1; 
                }
            }
            subsequence[left] = num;
        }

    public:
        int lengthOfLIS(std::vector<int>& nums)
        {
            std::vector<int> subsequence;
            for(const int &num : nums)
            {
                if(subsequence.empty() || num > subsequence[subsequence.size()-1])
                {
                    subsequence.push_back(num);
                }
                else
                {
                    checkUpdate(num, subsequence); 
                }
            }
            return subsequence.size();
        }
};