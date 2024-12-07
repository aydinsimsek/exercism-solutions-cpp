#include <vector>
#include <cmath>

class Solution 
{
    public:
        int maxProfit(std::vector<int>& prices) 
        {
            unsigned int maxProfit = 0;
            unsigned int minPrice = std::pow(10, 4);  
            for(int i = 0; i < prices.size(); i++) 
            {
                if(prices[i] < minPrice) 
                {
                    minPrice = prices[i];
                }
                if(prices[i] - minPrice > maxProfit)
                {
                    maxProfit = prices[i] - minPrice;
                }
            }
            return maxProfit;
        }
};