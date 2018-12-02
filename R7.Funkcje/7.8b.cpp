#include <iostream>

using namespace std;
const int SEASONS = 4;
const char *SNAMES[SEASONS] = { "Wiosna","Lato","Jesieñ","Zima" };		//tablica 4rech wskaznikow
struct wydatki {
	double wydatki[SEASONS];
};
void fill(wydatki * const wydatki)	//nie mozna zmienic adresu 
{
	for (int i=0; i<SEASONS; i++)
	{
		cout << "Podaj wydatki za okres >>" << SNAMES[i] << "<<: ";
		cin >> wydatki->wydatki[i];
	}
}
void show(const wydatki *wydatki)
{
	double total{};

	cout << "WYDATKI\n";
	for (int i=0; i<SEASONS; i++)
	{
		cout << SNAMES[i] << ": " << wydatki->wydatki[i] << endl;
		total += wydatki->wydatki[i];
	}
	cout << "£¹cznie wydatki roczne: " << total << " z³" << endl;
}
int main()
{
	wydatki wydatki;
	fill(&wydatki);
	show(&wydatki);
	return 0;
}