#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int higgens{ 5 };
	int *pt{ &higgens };

	cout << "Warto�� zmiennej higgens = " << higgens << "; Adres zmiennej higgens = " << &higgens << endl;
	cout << "Warto�� *pt = " << *pt << "; Warto�� pt = " << pt << endl;



	return 0;
}