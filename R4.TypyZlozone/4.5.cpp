#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct Batonik
{
	string markaSlodyczy;
	float waga;
	int kalorie;
}snack = { "Mocha Munch", 2.3, 350 };

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	cout << "Marka s³odyczy: " << snack.markaSlodyczy << endl;
	cout << "Waga: " << snack.waga << endl;
	cout << "Kalorie: " << snack.kalorie << endl;


	return 0;
}