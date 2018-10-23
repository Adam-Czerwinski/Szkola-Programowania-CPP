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

	cout << "Wartoœæ zmiennej higgens = " << higgens << "; Adres zmiennej higgens = " << &higgens << endl;
	cout << "Wartoœæ *pt = " << *pt << "; Wartoœæ pt = " << pt << endl;



	return 0;
}