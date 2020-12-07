#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

#include <cmath> 
#include <math.h>   
using namespace std; 

namespace complex_numbers {
	class Complex
	{
	private: 
		double a, b; 
	public:
		Complex(double x, double y);
		double real() const;
		double imag() const;
		double abs() const;
		Complex conj() const;
		Complex exp() const; 
		Complex operator+(const Complex& num) const;
		Complex operator-(const Complex& num) const;
		Complex operator*(const Complex& num) const;
		Complex operator/(const Complex& num) const;
	};
}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H