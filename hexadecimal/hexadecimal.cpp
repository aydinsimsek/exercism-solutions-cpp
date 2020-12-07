#include "hexadecimal.h"

namespace hexadecimal {
	int convert(string num)
	{
		map <int, int> to = { {49, 10}, {50, 11}, {51, 12}, {52, 13}, {53, 14}, {54, 15} };   
		int temp; 
		int result = 0; 
		for (int i = 0; i < num.length(); i++)
		{
			temp = num[i] - '0'; 
			if (temp < 0 || (temp > 9 && (temp < 49 || temp > 54)))  
			{
				return 0; 
			}
			if (temp > 9 && (temp >= 49 || temp <= 54)) 
			{
				temp = to[temp];
			}
			result += temp * int(pow(16, num.length() - 1 - i));  
		}
		return result; 
	}
}  // namespace hexadecimal
