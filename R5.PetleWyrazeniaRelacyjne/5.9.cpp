#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	string slowo;
	int ilosc_slow = 0;
	cout << "Podawaj s�owa (kiedy sko�czysz, napisz \"gotowe\"" << endl;
	cin >> slowo;

	while (slowo != "gotowe")
	{
		ilosc_slow++;
		cin >> slowo;
	}

	cout << "Ilosc s��w: " << ilosc_slow << endl;
	return 0;
}