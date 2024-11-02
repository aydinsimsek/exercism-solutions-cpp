#include <string>

class Solution 
{
    public:
        std::string intToRoman(int num) 
        {
            std::string result;
            if(num >= 1000)
            {
                for(int i = 0; i < num/1000; i++)
                {
                    result += "M";
                }
                num -= (num/1000) * 1000;
            }
            if(num >= 900)
            {
                result += "CM";
                num -= 900;
            }
            if(num >= 500)
            {
                for(int i = 0; i < num/500; i++)
                {
                    result += "D";
                }
                num -= (num/500) * 500;
            }
            if(num >= 400)
            {
                result += "CD";
                num -= 400;
            }
            if(num >= 100)
            {
                for(int i = 0; i < num/100; i++)
                {
                    result += "C";
                }
                num -= (num/100) * 100;
            }
            if(num >= 90)
            {
                result += "XC";
                num -= 90;
            }
            if(num >= 50)
            {
                for(int i = 0; i < num/50; i++)
                {
                    result += "L";
                }
                num -= (num/50) * 50;
            }
            if(num >= 40)
            {
                result += "XL";
                num -= 40;
            }
            if(num >= 10)
            {
                for(int i = 0; i < num/10; i++)
                {
                    result += "X";
                }
                num -= (num/10) * 10;
            }
            if(num >= 9)
            {
                result += "IX";
                num -= 9;
            }
            if(num >= 5)
            {
                for(int i = 0; i < num/5; i++)
                {
                    result += "V";
                }
                num -= (num/5) * 5;
            }
            if(num >= 4)
            {
                result += "IV";
                num -= 4;
            }
            while(num > 0)
            {
                result += "I";
                num--;
            }
            return result;
        }
};