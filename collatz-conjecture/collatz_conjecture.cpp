#include "collatz_conjecture.h"
#include <stdexcept> 

using namespace std; 

namespace collatz_conjecture {
	int steps(int num)
	{
		if (num <= 0)
		{
			throw domain_error("The number should be a positive integer");  
		}
		int count = 0; 
		while (num != 1)
		{
			if(num % 2 == 0)
			{
				num /= 2;
				count++; 
			}
			else
			{
				num = num * 3 + 1;
				count++; 
			}
		}
		return count; 
	}
}  // namespace collatz_conjecture
