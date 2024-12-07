#include "difference_of_squares.h"

namespace difference_of_squares {
	int square_of_sum(int num) 
	{
		int sum = 0; 
		for (int i = 1; i <= num; i++)
		{
			sum += i;  
		}
		return sum * sum; 
	}
	int sum_of_squares(int num)
	{
		int sum = 0; 
		for (int i = 1; i <= num; i++)
		{
			sum += i * i; 
		}
		return sum;   
	}
	int difference(int num)
	{
		return square_of_sum(num) - sum_of_squares(num);   
	}
}  // namespace difference_of_squares
