#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct Batonik
{
	string markaSlodyczy;
	float waga;
	int kalorie;
};

int main()
{
	
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	Batonik *tablicaBatonikow = new Batonik[3]
	{	
		{"Mars", 150.0, 450},
		{"Milky way", 80, 350},
		{"Snickers", 125, 400}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << "Marka s³odyczy: " << (*(tablicaBatonikow + i)).markaSlodyczy << endl;
		cout << "Waga: " << (*(tablicaBatonikow + i)).waga << endl;
		cout << "Kalorie: " << (*(tablicaBatonikow + i)).kalorie << endl;
	}

	delete[] tablicaBatonikow;

	return 0;
}