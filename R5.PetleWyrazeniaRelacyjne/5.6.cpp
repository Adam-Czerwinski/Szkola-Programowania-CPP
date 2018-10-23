#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int sprzedaz[3][12]{};
	int sprzedazNaRok[3]{};
	int sprzedazLacznie = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Sprzeda¿ w roku " << i + 1 << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << "Miesiac " << j+1 << ": ";
			cin >> sprzedaz[i][j];
			sprzedazNaRok[i] += sprzedaz[i][j];
		}
		sprzedazLacznie += sprzedazNaRok[i];
		cout << "W roku " << i+1 << " sprzedano " << sprzedazNaRok[i] << " ksiazek." << endl;
	}

	cout << "£¹cznie sprzedano " << sprzedazLacznie << " ksiazek przez 3 lata." << endl;


	return 0;
}