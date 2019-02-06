#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class complex {
private:
	double a;
	double b;
public:
	complex();
	complex(double a, double b);
	complex operator+(const complex &ob) const;
	complex operator-(const complex &ob) const;
	complex operator*(const complex &ob) const;
	complex operator~() const;
	friend complex operator*(const double x, const complex &ob);
	friend std::ostream& operator<<(std::ostream &os, const complex &ob);
	friend std::istream& operator>>(std::istream &is, complex &ob);
};

#endif // !COMPLEX0_H_

