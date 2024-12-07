#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include <string>   
using namespace std; 

namespace triangle {
	enum flavor
	{
		equilateral,
		isosceles,
		scalene 
	};
	int kind(double a, double b, double c);   
}  // namespace triangle

#endif // TRIANGLE_H