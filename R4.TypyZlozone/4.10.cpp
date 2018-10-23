#include <iostream>
#include <windows.h>
#include <array>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	array<double, 3> czas;

	cout << "Podaj pierwszy czas: ";
	cin >> czas[0];
	cout << "Podaj drugi czas: ";
	cin >> czas[1];
	cout << "Podaj trzeci czas: ";
	cin >> czas[2];
	
	cout << "Czas pierwszy: " << czas.at(0) << endl;
	cout << "Czas drugi: " << czas.at(1) << endl;
	cout << "Czas trzeci: " << czas.at(2) << endl;
	cout << "Œredni czas: " << (czas.at(0) + czas.at(1) + czas.at(2)) / 3.0 << endl;
	return 0;
}