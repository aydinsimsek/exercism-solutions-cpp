class Solution
{
    public:
        int climbStairs(int n)
        {
            int curr = 0;
            int prev1 = 1;
            int prev2 = 2;
            if(n == 1)
            {
                return prev1;
            }
            else if(n == 2)
            {
                return prev2;
            }
            else
            {
                for(int i = 3; i <= n; i++)
                {
                    curr = prev1 + prev2;
                    prev1 = prev2;
                    prev2 = curr;
                }
                return curr;
            }
        }
};