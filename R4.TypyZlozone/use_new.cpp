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

	cout << "Warto�� nights: " << nights << endl;
	cout << "Po�o�enie nights: " << &nights << endl << endl;

	cout << "new int: warto��: " << *pt << endl;
	cout << "Po�o�enie new int: " << pt << endl << endl;

	double *pd = new double;
	*pd = 10000001.0;

	cout << "new double: warto��: " << *pd << endl;
	cout << "Po�o�enie: " << pd << endl << endl;

	cout << "Po�o�enie wska�nika pd: " << &pd << endl;

	cout << "Wielko�� pt: " << sizeof(pt) << endl;
	cout << "Wielko�� *pt: " << sizeof(*pt) << endl;

	cout << "Wielko�� pd: " << sizeof(pd) << endl;
	cout << "Wielko�� *pd: " << sizeof(*pd) << endl;

	return 0;
}