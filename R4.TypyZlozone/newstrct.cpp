#include <iostream>
#include <windows.h>

using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");


	inflatable *ps = new inflatable;

	cout << "Podaj nazw� dmuchanej zabawki: ";
	cin.get(ps->name, 20);

	cout << "Podaj obj�to�� w stopach sze�ciennych: ";
	cin >> (*ps).volume;

	cout << "Podaj cen�(z�): ";
	cin >> ps->price;

	cout << "Nazwa: " << (*ps).name << endl;
	cout << "Obj�to�� " << ps->volume << " st�p sze�ciennych\n";
	cout << "Cena " << ps->price << " z�" << endl;

	delete ps;

	return 0;
}