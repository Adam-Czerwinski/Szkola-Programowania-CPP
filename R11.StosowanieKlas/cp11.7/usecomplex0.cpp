#include <iostream>
#include "complex0.h"

using namespace std;

int main() {

	complex a(3.0, 4.0);
	complex c;
	cout << "Podaj liczb� zespolon� (k, aby zako�czy�):\n";
	while (cin >> c)
	{
		cout << "c to " << c << '\n';
		cout << "sprz�ona z c to " << ~c << '\n';
		cout << "a to " << a << '\n';
		cout << "a + c wynosi " << a + c << '\n';
		cout << "a - c wynosi " << a - c << '\n';
		cout << "a * c wynosi " << a * c << '\n';
		cout << "2 * c wynosi " << 2 * c << '\n';
		cout << "Podaj liczb� zespolon� (k, aby zako�czy�):\n";
	}

	cout << "Gotowe!\n";

	return 0;
}