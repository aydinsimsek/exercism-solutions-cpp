#include "complex_numbers.h"

namespace complex_numbers {
	Complex::Complex(double x, double y)
	{
		a = x;
		b = y;
	}
	double Complex::real() const
	{
		return a;
	}
	double Complex::imag() const
	{
		return b;
	}
	double Complex::abs() const
	{
		return sqrt(pow(a, 2) + pow(b, 2));
	}
	Complex Complex::conj() const
	{
		Complex result(a, -b); 
		return result;
	}
	Complex Complex::exp() const
	{
		Complex result(std::exp(a) * cos(b), std::exp(a) * sin(b)); 
		return result;
	}
	Complex Complex::operator+(const Complex& num) const
	{
		Complex result(a + num.a, b + num.b);  
		return result;
	}
	Complex Complex::operator-(const Complex& num) const
	{
		Complex result(a - num.a, b - num.b);
		return result;
	}
	Complex Complex::operator*(const Complex& num) const
	{
		Complex result(a * num.a - b * num.b, b * num.a + a * num.b); 
		return result;
	}
	Complex Complex::operator/(const Complex& num) const
	{
		Complex result((a * num.a + b * num.b) / (pow(num.a, 2) + pow(num.b, 2)), (b * num.a - a * num.b) / (pow(num.a, 2) + pow(num.b, 2)));
		return result;
	}
}  // namespace complex_numbers





