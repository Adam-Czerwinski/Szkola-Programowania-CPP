#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;


namespace VECTOR {

	const double RAD_TO_DEG = 45.0 / atan(1.0);

	double Vector::magval() const{
		return sqrt(x*x + y * y);
	}
	double Vector::angval() const{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y, x);
	}

	void Vector::polar_mode() {
		mode = POL;
	}
	void Vector::rect_mode() {
		mode = RECT;
	}
	void Vector::reset(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
		}
		else if (form == POL) {
			y = n1 * sin(n2 / RAD_TO_DEG);
			x = n1* cos(n2 / RAD_TO_DEG);
		}
		else {
			cout << "NIEPOPRAWNY TRZECI ARGUMENT SET() --";
			cout << "Zerujê wektor\n";
			x = y = 0.0;
			mode = RECT;
		}
	}
	Vector Vector::operator+(const Vector &b) const {
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector &b) const {
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-() const {
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n) const {
		return Vector(n*x, n*y);
	}

	Vector operator*(double n, const Vector &a) {
		return a * n;
	}
	std::ostream& operator<<(std::ostream &os, const Vector &v) {
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
			os << "(m,a) = (" << v.magval() << ", " << v.angval()*RAD_TO_DEG << ")";
		else
			os << "Niepoprawny tryb reprezentacji obiektu wektora";
		return os;
	}

	Vector::Vector() {
		x = y = 0.0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			y = n1 * sin(n2 / RAD_TO_DEG);
			x = n1 * cos(n2 / RAD_TO_DEG);
		}
		else
		{
			cout << "Niepoprawna wartoœæ trzeciego argumentu Vector() -- ";
			cout << "Zerujê wektor\n";
			x = y = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector() {}
}