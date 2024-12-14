#include <vector>
#include <algorithm>

#define MAX_AMOUNT_AVAILABLE 10000

class Solution
{
    public:
        int coinChange(std::vector<int>& coins, int amount)
        {
            std::sort(coins.begin(), coins.end());
            std::vector<int> quantities(amount+1, MAX_AMOUNT_AVAILABLE+1); 
            quantities[0] = 0;
            for(int val = 1; val <= amount; val++)
            {
                for(const int &coin : coins)
                {
                    if(coin > val)
                    {
                        break;
                    }
                    if(quantities[val-coin] + 1 < quantities[val])
                    {
                        quantities[val] = quantities[val-coin] + 1;
                    }
                }
            }
            if(quantities[amount] == MAX_AMOUNT_AVAILABLE+1)
            {
                return -1;
            }
            return quantities[amount];
        }
};