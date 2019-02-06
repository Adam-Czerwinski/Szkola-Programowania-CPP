#include <iostream>
#include "Move.h"

int main() {

	Move m1 = Move(5.2, 6.2);
	Move m2 = Move(1.0, 2.0);

	std::cout << "m1:\n";
	m1.showMove();
	m1.reset(3.2, 9.1);
	m1.showMove();
	m1 = m1.add(m2);
	m1.showMove();

	std::cout << "m2:\n";
	m2.showMove();
	m2.reset(1.5, 6.6);
	m2.showMove();
	m2 = m2.add(m1);
	m2.showMove();

	return 0;
}