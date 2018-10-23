#include <iostream>
#include <windows.h>

using namespace std;

struct car
{
	char marka[20];
	int rokBudowy;
};

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	cout << "Podaj liczbê katalogowanych aut: ";
	int liczbaKatalogowanychAut;
	(cin >> liczbaKatalogowanychAut).get();
	car *tabCar = new car[liczbaKatalogowanychAut];

	for (int i = 0; i < liczbaKatalogowanychAut; i++)
	{
		cout << "Samochód #" << i + 1 <<":"<< endl;

		cout << "Proszê podaæ markê: ";
		cin.getline((tabCar + i)->marka, 20);
		
		cout << "Rok produkcji: ";
		(cin >> (tabCar + i)->rokBudowy).get();

	}

	for (int i = 0; i < liczbaKatalogowanychAut; i++)
	{
		cout << (tabCar + i)->rokBudowy << " " << (tabCar + i)->marka << endl;
	}

	delete[] tabCar;

	return 0;
}