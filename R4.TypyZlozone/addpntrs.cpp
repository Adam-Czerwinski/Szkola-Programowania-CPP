#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	double wages[3]{ 10000.0, 20000.0, 30000.0 };
	short stacks[3]{ 3, 2, 1 };

	//to jest to samo
	double *pw = wages;
	short *ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "dodaj do wska�nika pw 1:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "dodaj do wska�nika ps 1:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "dostep do dw�ch element�w, zapis tablicowy \n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "dost�p do do dw�ch element�w, zapis wska�nikowy\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks+1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wielko�� tablicy wages\n";
	cout << sizeof(pw) << " = wielko� wska�nika pw\n";


	return 0;
}