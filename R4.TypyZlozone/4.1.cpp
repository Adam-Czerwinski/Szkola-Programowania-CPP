#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	string imie, nazwisko;
	int ocena, wiek;

	cout << "Jak masz na imi�? ";
	getline(cin, imie);
	cout << "Jak si� nazywasz? ";
	getline(cin, nazwisko);
	cout << "Na jak� ocen� zas�ugujesz? ";
	cin >> ocena;
	cout << "Ile masz lat? ";
	cin >> wiek;
	cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
	cout << "Ocena: " << ocena - 1 << endl;
	cout << "Wiek: " << wiek << endl;



	return 0;
}