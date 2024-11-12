#include <climits>

class Solution
{
    public:
        double myPow(double x, int n)
        {
            if(x == 1.0 || (x == -1.0 && (n % 2 == 0)) || n == 0)
            {
                return 1.0;
            }
            else if(x == -1.0)
            {
                return -1.0;
            }
            double res = 1.0;
            long long int tmp;
            if(n > 0)
            {
                tmp = n;
            }
            else if(n == INT_MIN)
            {
                tmp = -(long long int)n;
            }
            else
            {
                tmp = -n;
            }
            while(tmp > 0)
            {
                if(tmp % 2 != 0)
                {
                    res *= x;
                    tmp--;
                }
                else
                {
                    x *= x;
                    tmp /= 2;
                }
            }
            if(n < 0)
            {
                res = 1 / res;
            }
            return res;
        }
};