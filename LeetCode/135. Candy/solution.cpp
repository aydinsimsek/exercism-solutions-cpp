#include <vector>

class Solution
{
    public:
        int candy(std::vector<int>& ratings)
        {
            int size = ratings.size();
            if(size == 1)
            {
                return 1;
            }
            if(size == 2)
            {
                if(ratings[0] == ratings[1])
                {
                    return 2;
                }
                return 3;
            }
            int count = 0;
            std::vector<int> candies(size, 1);
            for(int i = 1; i < size; i++)
            {
                if(ratings[i] > ratings[i-1])
                {
                    candies[i] = candies[i-1] + 1; 
                }
            }
            for(int i = size-2; i >= 0; i--)
            {
                if(ratings[i] > ratings[i+1] && candies[i] <= candies[i+1])
                {
                    candies[i] = candies[i+1] + 1;
                }
            }
            for(int i = 0; i < size; i++)
            {
                count += candies[i];
            }
            return count;
        }
};