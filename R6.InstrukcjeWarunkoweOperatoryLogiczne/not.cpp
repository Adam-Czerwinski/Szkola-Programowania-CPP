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

	cout << "Hej, kole�! Rzu� no liczb� ca�kowit�: ";
	cin >> num;

	while (!is_int(num))
	{
		cout << "Poza zakresem - pr�buj dalej: ";
		cin >> num;
	}
	int val = int(num);
	cout << "Podana liczba ca�kowita to " << val << "\nBywaj!\n";

	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}