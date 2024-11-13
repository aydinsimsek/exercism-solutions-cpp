class Solution
{
    public:
        int trailingZeroes(int n)
        {
            int count = 0;
            int tmp;
            for(int i = 5; i <= n; i += 5)
            {
                tmp = i;
                while(tmp % 5 == 0)
                {
                    count++;
                    tmp /= 5;
                }
            }
            return count;
        }
};