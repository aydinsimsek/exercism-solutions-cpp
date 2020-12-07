#include "luhn.h"

namespace luhn {
	bool valid(string num)
	{
		int count = 0; 
		int temp = 0;  
		num.erase(remove(num.begin(), num.end(), ' '), num.end()); 
		if (num.length() <= 1)
		{
			return false;
		}
		for (int i = 0; i < num.length(); i++)
		{
			temp = num[i] - '0'; 
			if (temp < 0 || temp > 9)  
			{
				return false;
			}
			if(((num.length() % 2 == 0) && (i % 2 == 0)) || ((num.length() % 2 != 0) && (i % 2 != 0))) 
			{
				temp *= 2; 
				if (temp > 9)
				{
					temp -= 9; 
				}
			}
			count += temp;  
		}	
		return(count % 10 == 0); 
	}
}  // namespace luhn
