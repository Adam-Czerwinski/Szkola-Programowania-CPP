#include <iostream>
#include <Windows.h>

using namespace std;

const double *f1(const double ar[], int n);
const double *f2(const double [], int n);
const double *f3(const double *, int n);

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	double av[3] = { 1112.3, 1542.6, 2227.9 };				//tablica double
	const double *(*p1)(const double *, int) = f1;			//wskaznik do funkcji f1
	auto p2 = f2;											//wskaznik do funkcji f2
	
	cout << "U¿ywanie wskaŸników do funkcji:\n";
	cout << "adres | wartosc zwracana\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };		//tablica wskaŸników, auto nie dzia³a dla listy inicjalizuj¹cej
	auto pb = pa;													//pb to wskaŸnik do pierwszego elementu pa
	//dla C++98 const double *(**pb)(const double *, int) = pa;

	cout << "\nU¿ywanie tablicy wskaŸników do funkcji:\n";
	cout << "adres | wartoœæ zwracana\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}

	cout << "\nU¿ywanie wskaŸnika do wskaŸnika do funkcji:\n";
	cout << "adres | wartoœæ zwracana\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
		//albo
		//cout << (*(pb+i))(av, 3) << ": " << *(*(pb + i))(av, 3) << endl;
	}

	cout << "\nU¿ywanie wskaŸników do tablicy wskaŸników do funkcji:\n";
	cout << "adres | wartoœæ zwracana\n";
	auto pc = &pa;
	//dla C++98 const double *(*(pc)[3])(const double *, int) = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;

	//trudny sposób deklarowania pd
	const double *(*(*pd)[3])(const double*, int) = &pa;
	//zapisanie zwróconej wartoœci w pdb
	const double *pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	//albo tak
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

	return 0;
}

const double *f1(const double *ar, int n) {
	return ar;
}

const double *f2(const double ar[], int n) {
	return ar+1;
}

const double *f3(const double ar[], int n) {
	return ar + 2;
}