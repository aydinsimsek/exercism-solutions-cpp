#include "trinary.h"

namespace trinary {
	int to_decimal(string num)
	{
		int temp; 
		int count = 0; 
		for (int i = 0; i < num.length(); i++)
		{
			temp = num[i] - '0'; 
			if (temp < 0 || temp > 9)
			{
				return 0; 
			}
			temp *= int(pow(3, num.length()-1-i));    
			count += temp;  
		}
		return count; 
	}
}  // namespace trinary
