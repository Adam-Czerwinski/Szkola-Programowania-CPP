#include <iostream>
#include <windows.h>
#include <array>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	array<long double, 100> factorials;
	factorials.at(0) = factorials.at(1) = 1;

	for (int i = 2; i <= factorials.size(); i++)
	{
		factorials.at(i) = factorials.at(i - 1)*i;
		cout << i << "!: " << factorials.at(i) << endl;
	}


	return 0;
}