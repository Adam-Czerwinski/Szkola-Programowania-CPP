#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char imie[20], nazwisko[20];
	char wszystko[42];

	cout << "Podaj imiê: ";
	cin.getline(imie, 20);

	cout << "Podaj nazwisko: ";
	cin.getline(nazwisko, 20);
	
	strcpy(wszystko, nazwisko);
	strcat(wszystko, ", ");
	strcat(wszystko, imie);

	cout << "Oto informacje zestawione w jeden napis: " << wszystko << endl;


	return 0;
}