#include <string>

class Solution 
{
    public:
        std::string intToRoman(int num) 
        {
            std::string result;
            while(num > 0)
            {
                if(num >= 1000)
                {
                    for(int i = 0; i < num/1000; i++)
                    {
                        result += "M";
                    }
                    num -= (num/1000) * 1000;
                }
                else if(num >= 900)
                {
                    result += "CM";
                    num -= 900;
                }
                else if(num >= 500)
                {
                    for(int i = 0; i < num/500; i++)
                    {
                        result += "D";
                    }
                    num -= (num/500) * 500;
                }
                else if(num >= 400)
                {
                    result += "CD";
                    num -= 400;
                }
                else if(num >= 100)
                {
                   for(int i = 0; i < num/100; i++)
                    {
                        result += "C";
                    }
                    num -= (num/100) * 100;
                }
                else if(num >= 90)
                {
                    result += "XC";
                    num -= 90;
                }
                else if(num >= 50)
                {
                    for(int i = 0; i < num/50; i++)
                    {
                        result += "L";
                    }
                    num -= (num/50) * 50;
                }
                else if(num >= 40)
                {
                    result += "XL";
                    num -= 40;
                }
                else if(num >= 10)
                {
                    for(int i = 0; i < num/10; i++)
                    {
                        result += "X";
                    }
                    num -= (num/10) * 10;
                }
                else if(num >= 9)
                {
                    result += "IX";
                    num -= 9;
                }
                else if(num >= 5)
                {
                    for(int i = 0; i < num/5; i++)
                    {
                        result += "V";
                    }
                    num -= (num/5) * 5;
                }
                else if(num >= 4)
                {
                    result += "IV";
                    num -= 40;
                }
                else
                {
                    result += "I";
                    num--;
                }
            }
            return result;
        }
};