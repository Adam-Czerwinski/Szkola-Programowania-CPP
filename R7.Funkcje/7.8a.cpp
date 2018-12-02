#include <iostream>

using namespace std;
const int SEASONS = 4;
const char *SNAMES[SEASONS] = { "Wiosna","Lato","Jesieñ","Zima" };		//tablica 4rech wskaznikow
void fill(double * const wydatkiBeg, double * const wydatkiEnd)		//nie mozna zmienic adresu
{
	for (double *i = wydatkiBeg; i != wydatkiEnd; i++)
	{
		cout << "Podaj wydatki za okres >>" << SNAMES[i - wydatkiBeg] << "<<: ";
		cin >> *i;
	}
}
void show(double * const wydatkiBeg,double * const wydatkiEnd)		//nie mozna zmienic adresu
{
	double total{};

	cout << "WYDATKI\n";
	for (double* i = wydatkiBeg; i != wydatkiEnd; i++)
	{
		cout << *(SNAMES + (i - wydatkiBeg)) << ": " << *i << endl;
		total += *i;
	}
	cout << "£¹cznie wydatki roczne: " << total << " z³" << endl;
}
int main()
{
	double wydatki[SEASONS];
	fill(wydatki, wydatki + SEASONS);
	show(wydatki, wydatki + SEASONS);
	return 0;
}