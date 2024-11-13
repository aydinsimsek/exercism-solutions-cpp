#include <vector>

class Solution
{
    public:
        std::vector<int> plusOne(std::vector<int>& digits)
        {
            if(digits[digits.size()-1] != 9)
            {
                digits[digits.size()-1]++;
            }
            else
            {
                digits[digits.size()-1] = 0;
                bool carry = true;
                for(int i = digits.size()-2; i >= 0; i--)
                {
                    if(digits[i] + 1 == 10)
                    {
                        digits[i] = 0;
                    }
                    else
                    {
                        digits[i]++;
                        carry = false;
                        break;
                    }
                }
                if(carry)
                {
                    digits.insert(digits.begin(), 1);
                }
            }
            return digits;
        }
};