#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct Pizza
{
	string nazwaFirmy;
	float srednicaPizzy;
	float wagaPizzy;
};

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	Pizza *pizza = new Pizza;

	cout << "Podaj œrednicê pizzy(cm): ";
	cin >> pizza->srednicaPizzy;
	cin.get();
	cout << "Podaj nazwê firmy: ";
	getline(cin, pizza->nazwaFirmy);
	cout << "Podaj wagê pizzy(gram): ";
	cin >> pizza->wagaPizzy;

	cout << "Nazwa firmy: ";
	cout << pizza->nazwaFirmy << endl;
	cout << "Œrednica pizzy: ";
	cout << pizza->srednicaPizzy << " cm." << endl;
	cout << "Waga pizzy: ";
	cout << pizza->wagaPizzy << " gram." << endl;

	delete pizza;


	return 0;
}