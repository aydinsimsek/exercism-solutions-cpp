#include "prime_factors.h"

namespace prime_factors {
	vector<int> of(int num)
	{
		vector<int> temp; 
		vector<int> result; 
		int j = 0; 
		if (num == 1)  
		{
			return result; 
		}
		for (int i = 2; i <= num; i++)  
		{
			if (num % i == 0)
			{
				temp.push_back(i);  
			}
		}
		while (num > 1) 
		{
			while (num % temp[j] == 0)
			{
				num /= temp[j];   
				result.push_back(temp[j]); 
			}
			j++;
		}
		return result; 
	}
}  // namespace prime_factors