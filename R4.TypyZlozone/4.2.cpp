#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	string name, dessert;
	
	cout << "Podaj swoje imi�:\n";
	getline(cin, name);
	cout << "Podaj sw�j ulubiony deser:\n";
	getline(cin, dessert);
	cout << "Mam dla Ciebie " << dessert;
	cout << ", " << name << ".\n";



	return 0;
}