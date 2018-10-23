#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	double pierwotnyKapitalDafne = 100;
	double zyskDafne = 0;
	double oprocentowanieDafne = 0.1;

	unsigned short int rok = 1;

	double stanCloe = 100;
	double zyskCloe = 0;
	double oprocentowanieCloe = 0.05;

	while (zyskDafne >= zyskCloe)
	{
		cout << "Rok " << rok << endl;
		zyskDafne += pierwotnyKapitalDafne * oprocentowanieDafne;
		zyskCloe += stanCloe * oprocentowanieCloe;
		stanCloe += zyskCloe;
		cout << "Dafne: " << zyskDafne << "\tCloe: " << zyskCloe << endl;
		rok++;
	}


	return 0;
}