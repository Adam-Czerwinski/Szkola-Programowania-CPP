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
		"Styczeñ",
		"Luty",
		"Marzec",
		"Kwiecieñ",
		"Maj",
		"Czerwiec",
		"Lipiec",
		"Sierpieñ",
		"Wrzesieñ",
		"PaŸdziernik",
		"Listopad",
		"Grudzieñ"
	};
	int sztuki[12]{};
	int suma{};

	cout << "Podaj ile sprzeda³eœ ksi¹¿ek w danym miesi¹cu!" << endl;
	
	for (int i = 0; i < 12; i++)
	{
		cout << "W miesi¹cu " << miesiace[i] << " sprzedano: ";
		cin >> sztuki[i];
		suma += sztuki[i];
	}
	
	cout << endl << "£¹cznie sprzedano: " << suma << " ksi¹¿ek przez ca³y rok!" << endl;

	return 0;
}