class Solution
{
    public:
        bool isPalindrome(int x)
        {
            if(x < 0)
            {
                return false;
            }
            int tmp = x;
            long long int reversed = 0;
            while(tmp > 0)
            {
                reversed = reversed * 10 + (tmp % 10);
                tmp /= 10;
            }
            return reversed == x;
        }
};