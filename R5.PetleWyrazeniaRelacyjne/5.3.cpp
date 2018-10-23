#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	cout << "Podawaj liczby i zatwierdzaj enterem! Program zakoñczy dzia³anie, jeœli podasz liczbê 0!" << endl;

	double liczba;
	double suma = 0;

	cin >> liczba;
	while (liczba != 0)
	{
		suma += liczba;
		cin >> liczba;
	}

	cout << "Suma liczb: " << suma << endl;

	return 0;
}