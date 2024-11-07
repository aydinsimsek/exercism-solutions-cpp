#include <vector>

class Solution
{
    public:
        int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost)
        {
            int i = 0;
            while(i < gas.size())
            {
                if(gas[i] < cost[i])
                {
                    i++;
                    continue;
                }
                int currIdx = i;
                int gasAmount = gas[currIdx];
                while(1)
                {
                    if(gasAmount - cost[currIdx] >= 0)
                    {
                        gasAmount -= cost[currIdx];
                        currIdx = ((currIdx+1) % gas.size());
                        if(currIdx == i)
                        {
                            return currIdx;
                        }
                        gasAmount += gas[currIdx];
                    }
                    else if(currIdx < i)
                    {
                        return -1;
                    }
                    else
                    {
                        i = currIdx + 1;
                        break;
                    }
                }
            }
            return -1;
        }
};