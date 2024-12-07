#include <vector>

class Solution 
{
    public:
        int maxProfit(std::vector<int>& prices) 
        {
            unsigned int maxProfit = 0;
            unsigned int buyPrice = prices[0];
            for(int i = 1; i < prices.size()-1; i++) 
            {
                if(prices[i] < buyPrice)
                {
                    buyPrice = prices[i];
                }
                else if(prices[i] > buyPrice && prices[i] > prices[i+1])
                {
                    maxProfit += prices[i] - buyPrice;
                    buyPrice = prices[i];
                }
            }
            if(prices[prices.size()-1] > buyPrice)
            {
                maxProfit += prices[prices.size()-1] - buyPrice;
            }
            return maxProfit;
        }
};