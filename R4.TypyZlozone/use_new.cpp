#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int nights = 1001;
	int *pt = new int;
	*pt = 1001;

	cout << "Wartoœæ nights: " << nights << endl;
	cout << "Po³o¿enie nights: " << &nights << endl << endl;

	cout << "new int: wartoœæ: " << *pt << endl;
	cout << "Po³o¿enie new int: " << pt << endl << endl;

	double *pd = new double;
	*pd = 10000001.0;

	cout << "new double: wartoœæ: " << *pd << endl;
	cout << "Po³o¿enie: " << pd << endl << endl;

	cout << "Po³o¿enie wskaŸnika pd: " << &pd << endl;

	cout << "Wielkoœæ pt: " << sizeof(pt) << endl;
	cout << "Wielkoœæ *pt: " << sizeof(*pt) << endl;

	cout << "Wielkoœæ pd: " << sizeof(pd) << endl;
	cout << "Wielkoœæ *pd: " << sizeof(*pd) << endl;

	return 0;
}