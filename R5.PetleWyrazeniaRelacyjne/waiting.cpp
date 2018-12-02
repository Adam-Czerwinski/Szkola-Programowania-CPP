#include <iostream>
#include <windows.h.>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	cout << "Podaj czas w sekundach ile program ma czekaæ: ";
	float timeIN;
	cin >> timeIN;
	
	clock_t start = clock();

	while ((clock() - start) < (timeIN*CLOCKS_PER_SEC));		

	cout << "koniec!";


	return 0;
}