class Solution
{
    public:
        int rangeBitwiseAnd(int left, int right)
        {
            int unmatchIdx = 0;
            for(int i = 31; i > 0; i--)
            {
                bool leftBit = (left >> i) & 1;
                bool rightBit = (right >> i) & 1;
                if(leftBit != rightBit)
                {
                    unmatchIdx = i;
                    break;
                }
            }
            return (0xFFFFFFFF << unmatchIdx) & left;
        }
};