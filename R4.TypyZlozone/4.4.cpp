#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	string imie, nazwisko, wszystko;

	cout << "Podaj imiê: ";
	getline(cin, imie);

	cout << "Podaj nazwisko: ";
	getline(cin, nazwisko);

	wszystko = nazwisko + ", " + imie;

	cout << "Oto informacje zestawione w jeden napis: " << wszystko << endl;


	return 0;
}