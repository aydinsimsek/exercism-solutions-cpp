#include <vector>       
#include <algorithm>   

class Solution 
{
    public:
        int hIndex(std::vector<int>& citations)
        {
            int count = 0;
            std::sort(citations.begin(), citations.end());
            for(int i = citations.size()-1; i >= 0; i--)
            {
                if(citations[i] > count)
                {
                    count++;
                }
            }
            return count;
        }
};