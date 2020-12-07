#include "sum_of_multiples.h"

namespace sum_of_multiples {
	int to(vector <int> v, int num)
	{
		int sum = 0; 
		if (v.size() == 0)
		{
			return 0; 
		}
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < v.size(); j++)
			{
				if (i % v[j] == 0) 
				{
					sum += i; 
					break; 
				} 
			}
		}
		return sum; 
	}
}  // namespace sum_of_multiples
