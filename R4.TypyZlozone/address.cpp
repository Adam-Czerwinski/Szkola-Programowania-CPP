#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int donuts{ 6 };
	double cups{ 4.5 };

	cout << "Warto�� zmiennej donuts: " << donuts;
	cout << ", a adres tej zmiennej = " << &donuts << endl;

	cout << "Warto�� zmiennej cups: " << cups;
	cout << ", a adres tej zmiennej = " << &cups << endl;
	


	return 0;
}