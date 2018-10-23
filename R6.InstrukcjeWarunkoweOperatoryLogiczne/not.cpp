#include <iostream>
#include <windows.h>
#include <climits>

using namespace std;

bool is_int(double);

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	double num;

	cout << "Hej, koleœ! Rzuæ no liczb¹ ca³kowit¹: ";
	cin >> num;

	while (!is_int(num))
	{
		cout << "Poza zakresem - próbuj dalej: ";
		cin >> num;
	}
	int val = int(num);
	cout << "Podana liczba ca³kowita to " << val << "\nBywaj!\n";

	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}