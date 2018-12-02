#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char slowo[1000];
	int slowa = 0;
	cin >> slowo;
	while (strcmp(slowo, "gotowe") != 0)
	{
		slowa++;
		cin >> slowo;
	}

	cout << "Ilosc wprowadzonych slow: " << slowa << endl;


	return 0;
}