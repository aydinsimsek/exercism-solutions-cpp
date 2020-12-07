#include "grains.h"

namespace grains {
	unsigned long long square(int num)
	{
		if (num == 1)
		{
			return 1; 
		}
		return 2 * square(num-1);  
	}
	unsigned long long total()
	{
		int temp = 1; 
		int sum = 1;  
		for (int i = 2; i <= 64; i++)
		{
			temp *= 2;
			sum += temp; 
		}
		return sum;  
	}
}  // namespace grains
