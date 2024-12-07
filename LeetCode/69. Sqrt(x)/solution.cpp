class Solution
{
    public:
        int mySqrt(int x)
        {
            if(x < 2)
            {
                return x;
            }
            int left = 1;
            int right = x;
            int res;
            while(left <= right)
            {
                int mid = left + (right - left) / 2;
                long long int sqr = (long long int)mid * mid;
                if(sqr == x)
                {
                    res = mid;
                    break;
                }
                else if(sqr > x)
                {
                    right = mid - 1;
                }
                else
                {
                    res = mid;
                    left = mid + 1;
                }
            }
            return res;
        }
};