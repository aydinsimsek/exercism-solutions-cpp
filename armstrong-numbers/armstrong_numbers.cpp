#include "armstrong_numbers.h"
#include <math.h>

namespace armstrong_numbers {
	bool is_armstrong_number(int num)
	{
		int count = 0; 
		int digit = 1;    
		int n = num; 
		int temp = num; 
		while(n > 9)   
		{
			n /= 10; 
			digit++; 
		}
		for(int i = 0; i < digit; i++)
		{
			n = temp % 10; 
			temp /= 10; 
			count += pow(n, digit);    
		}
		return(num == count); 
	}
}  // namespace armstrong_numbers
