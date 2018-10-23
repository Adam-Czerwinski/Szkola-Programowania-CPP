#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");
	
	char charr[20];
	string str;

	cout << "D³ugoœæ ³añcucha w zmiennej charr przed wporwadzeniem danych: " << strlen(charr) << endl;
	cout << "D³ugoœæ ³añcucha w zmiennej str przed wprowadzeniem danych: " << str.size() << endl;

	cout << "Wprowadzenie wiersza tekstu:\n";
	cin.getline(charr, 20);
	cout << "Wprowadzono: " << charr << endl;

	cout << "Podaj kolejny wiersz tekstu:\n";
	getline(cin, str);
	cout << "Wprowadzono: " << str << endl;

	cout << "D³ugoœæ ³añcucha w zmiennej charr po wprowadzeniu danych: " << strlen(charr) << endl;
	cout << "D³ugoœæ ³añcucha w zmiennej str po wprowadzeniu danych: " << str.size() << endl;
	
	return 0;
}