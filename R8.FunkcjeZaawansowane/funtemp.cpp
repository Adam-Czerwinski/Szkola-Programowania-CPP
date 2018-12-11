#include <iostream>

using namespace std;

template<class T>
void Swap(T &a, T&b);

int main() {

	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "U¿ycie funkcji obs³uguj¹cej typ int, "
		"wygenerowanej przez kompilator:\n";
	Swap(i, j);
	cout << "Teraz i, j = " << i << ", " << j << ".\n";

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "U¿ycie funkcji obs³uguj¹cej typ double, "
		"wygenerowanej przez kompilator:\n";
	Swap(x, y);
	cout << "Teraz x, y = " << x << ", " << y << ".\n";

	return 0;
}

template<class T>
void Swap(T &a, T&b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}