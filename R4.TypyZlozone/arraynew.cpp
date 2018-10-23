#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	double *p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] to " << p3[1] << ".\n";
	p3 = p3 + 1;
	cout << "Teraz p3[0] to " << p3[0] << ", a ";
	cout << "p3[1] to " << p3[1] << ".\n";
	p3 = p3 - 1;
	delete[]p3;


	return 0;
}