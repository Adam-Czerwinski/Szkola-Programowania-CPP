#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	cout << "Podaj liczbe ca�kowit� a: ";
	int a;
	cin >> a;
	cout << "Podaj liczbe ca�kowit� b: ";
	int b;
	cin >> b;

	int suma = 0;

	for (int i = a; i <= b; i++)
	{
		suma += i;
	}
	cout << "Suma wynosi " << suma << endl;


	return 0;
}