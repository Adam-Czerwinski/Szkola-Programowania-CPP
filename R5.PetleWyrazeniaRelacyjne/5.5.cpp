#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char *miesiace[12] =
	{
		"Stycze�",
		"Luty",
		"Marzec",
		"Kwiecie�",
		"Maj",
		"Czerwiec",
		"Lipiec",
		"Sierpie�",
		"Wrzesie�",
		"Pa�dziernik",
		"Listopad",
		"Grudzie�"
	};
	int sztuki[12]{};
	int suma{};

	cout << "Podaj ile sprzeda�e� ksi��ek w danym miesi�cu!" << endl;
	
	for (int i = 0; i < 12; i++)
	{
		cout << "W miesi�cu " << miesiace[i] << " sprzedano: ";
		cin >> sztuki[i];
		suma += sztuki[i];
	}
	
	cout << endl << "��cznie sprzedano: " << suma << " ksi��ek przez ca�y rok!" << endl;

	return 0;
}