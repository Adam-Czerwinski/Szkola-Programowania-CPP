#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int row;

	cout << "Podaj liczbê wyœwietlanych wierszy: ";
	cin >> row;
	
	for (int i = 1; i <= row; i++)
	{
		for (int j = row - i; j > 0; j--)
		{
			cout << ".";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}