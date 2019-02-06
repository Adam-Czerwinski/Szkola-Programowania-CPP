#include "complex0.h"

complex::complex() {
	a = b = 0.0;
}
complex::complex(double a, double b) {
	this->a = a;
	this->b = b;
}
complex complex::operator+(const complex &ob) const {
	return complex(this->a + ob.a, this->b + ob.b);
}
complex complex::operator-(const complex &ob) const {
	return complex(this->a - ob.a, this->b - ob.b);
}
complex complex::operator*(const complex &ob) const {
	return complex(this->a*ob.a - this->b*ob.b, this->a*ob.b + this->b*ob.a);
}
complex operator*(const double x, const complex &ob) {
	return complex(ob.a*x, ob.b*x);
}
complex complex::operator~() const {
	return complex(this->a, -(this->b));
}
std::ostream& operator<<(std::ostream &os, const complex &ob) {
	os << "(" << ob.a << "," << ob.b << "i)";
	return os;
}
std::istream& operator>>(std::istream &is, complex &ob) {
	double real, imaginary;
	std::cout << "sk³adowa rzeczywista: ";
	is >> real;
	std::cout << "sk³adowa urojona: ";
	is >> imaginary;
	ob = complex(real, imaginary);
	return is;
}