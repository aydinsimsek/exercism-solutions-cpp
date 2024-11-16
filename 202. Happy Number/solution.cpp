#include <unordered_map>

class Solution
{
    public:
        bool isHappy(int n)
        {
            int sqr = 0;
            std::unordered_map<int, int> umap;
            while(n != 1)
            {
                while(n > 0)
                {
                    sqr += (n % 10) * (n % 10);
                    n /= 10;
                }
                if(umap[sqr] != 0)
                {
                    return false;
                }
                umap[sqr]++;
                n = sqr;
                sqr = 0;
            }
            return true;
        }
};