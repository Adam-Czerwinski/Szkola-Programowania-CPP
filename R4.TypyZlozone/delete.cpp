#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

char *getname(void);

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char *name;

	name = getname();
	cout << name << " pod adresem " << (int*)name << endl;
	delete[] name;


	name = getname();
	cout << name << " pod adresem " << (int*)name << endl;
	delete[] name;

	return 0;
}

char *getname(void)
{
	char temp[80];
	cout << "Podaj nazwisko: ";
	cin >> temp;
	char *pn = new char[strlen(temp) + 1];
	cout << "Adres zaalokowanej pamiêci w funkcji getname(): " << (int*)pn << endl;
	strcpy(pn, temp);
	
	return pn;
}