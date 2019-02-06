#include "Move.h"
#include <iostream>
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::showMove() const {
	std::cout << "x: " << x << ", y: " << y << '\n';
}
Move Move::add(const Move m) const {
	
	Move k(m.x + this->x, m.y + this->y);

	return k;
}
void Move::reset(double a, double b) {
	x = a;
	y = b;
}