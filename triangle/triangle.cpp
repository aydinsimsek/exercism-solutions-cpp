#include "triangle.h"
#include <stdexcept> 

using namespace std; 

namespace triangle {
	int kind(double a, double b, double c)
	{
		if (a <= 0 || b <= 0 || c <= 0 || a + b < c || a + c < b || b + c < a)
		{
			throw domain_error("This shape is not a triangle");
		}
		if (a == b && b == c)
		{
			return 0; 
		}
		else if (a == b || a == c || b == c) 
		{
			return 1;
		}
		else if (a != b && a != c && b != c)
		{
			return 2; 
		}
	}
}  // namespace triangle
