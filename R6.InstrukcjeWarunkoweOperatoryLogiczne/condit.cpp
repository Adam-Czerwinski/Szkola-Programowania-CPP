#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int a, b;
	cout << "Podaj dwie liczby ca³kowite: ";
	cin >> a >> b;
	cout << "Wiêksza z liczb " << a << " i " << b;
	int c = a > b ? a : b;
	cout << " to " << c << endl;

	return 0;
}

