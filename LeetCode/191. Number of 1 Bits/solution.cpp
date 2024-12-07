class Solution
{
    public:
        int hammingWeight(int n)
        {
            int weight = 0;
            for(int i = 0; i < 32; i++)
            {
                bool bit = (n >> i) & 1;
                if(bit)
                {
                    weight++;
                }
            }
            return weight;
        }
};