#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	int updates{ 6 };
	int *p_updates;

	p_updates = &updates;

	cout << "Wartoci: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Adresy: updates = " << &updates;
	cout << ", p_updates = " << p_updates<< endl;

	*p_updates = *p_updates + 1;
	cout << "Teraz updates = " << updates << endl;



	return 0;
}