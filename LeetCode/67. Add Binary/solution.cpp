#include <string>
#include <algorithm>

class Solution
{
    public:
        std::string addBinary(std::string a, std::string b)
        {
            int lengthDiff = a.length() - b.length();
            if(lengthDiff > 0)
            {
                b.insert(0, lengthDiff, '0');
            }
            else if(lengthDiff < 0)
            {
                a.insert(0, -lengthDiff, '0');
            }
            std::string res;
            char carry = '0';
            for(int i = a.length()-1; i >= 0 ; i--)
            {
                if(a[i] == '1' && b[i] == '1')
                {
                    res += carry;
                    if(carry == '0')
                    {
                        carry = '1';
                    }
                }
                else if(a[i] == '0' && b[i] == '0')
                {
                    res += carry;
                    if(carry == '1')
                    {
                        carry = '0';
                    }
                }
                else
                {
                    if(carry == '0')
                    {
                        res += '1';
                    }
                    else if(carry == '1')
                    {
                        res += '0';
                    }
                }
            }
            if(carry == '1')
            {
                res += '1';
            }
            std::reverse(res.begin(), res.end());
            return res;
        }
};