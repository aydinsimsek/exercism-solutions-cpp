class Solution
{
    private: 
        int squareOfDigits(int num)
        {
            int sqr = 0;
            while(num > 0)
            {
                sqr += (num % 10) * (num % 10);
                num /= 10;
            }
            return sqr;
        }
    public:
        bool isHappy(int n)
        {
            int slowPtr = n;
            int fastPtr = squareOfDigits(n);
            while(fastPtr != 1 && slowPtr != fastPtr)
            {
                slowPtr = squareOfDigits(slowPtr);
                fastPtr = squareOfDigits(squareOfDigits(fastPtr));
            }
            return fastPtr == 1;
        }
};