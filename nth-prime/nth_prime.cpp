#include "nth_prime.h"

#define MAX 123456 

namespace nth_prime {
	int nth(int N)
	{
		int count = 1;
		map <int, int> m; 
		if (N <= 0)  
		{
			throw domain_error("Error: N should be positive");   
		}
		for (int i = 2; i < MAX; i++) 
		{
			bool prime = true;
			for(int j = 1; j < i; j++) 
			{
				if (j != 1 && i % j == 0)
				{
					prime = false;
					break; 
				}
			}
			if (prime == true) 
			{
				m[count] = i; 
				count++;
			} 
		}
		return m[N];   
	}
}  // namespace nth_prime
