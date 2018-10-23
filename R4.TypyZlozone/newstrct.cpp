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

	cout << "Podaj nazwê dmuchanej zabawki: ";
	cin.get(ps->name, 20);

	cout << "Podaj objêtoœæ w stopach szeœciennych: ";
	cin >> (*ps).volume;

	cout << "Podaj cenê(z³): ";
	cin >> ps->price;

	cout << "Nazwa: " << (*ps).name << endl;
	cout << "Objêtoœæ " << ps->volume << " stóp szeœciennych\n";
	cout << "Cena " << ps->price << " z³" << endl;

	delete ps;

	return 0;
}