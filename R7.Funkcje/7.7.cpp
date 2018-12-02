#include <iostream>
#include <Windows.h>
#include <limits>

const int MAX = 5;

double *fill_array(double *, double *);
void show_array(double *, double *);
void revalue(double *, double *, double);

using namespace std;

int main() {

	double properties[MAX];
	double *end = fill_array(properties, properties + MAX);
	show_array(properties, end);

	cout << "Podaj czynnik zmiany wartoœci: ";
	double factor;
	while (!(cin >> factor))
	{
		cin.clear();
		cin.ignore((std::numeric_limits<streamsize>::max)(), '\n');
		cout << "Niepoprawna wartoœæ. Podaj liczbê: ";
	}
	revalue(properties, end, factor);
	show_array(properties, end);
	cout << "Gotowe.";
	return 0;
}

double *fill_array(double *begin, double *end) {
	double temp;
	int iterator = 0;

	for (auto i = begin; i != end; i++, iterator++)
	{
		cout << "Podaj wartosc nr " << iterator + 1<< ": ";
		cin >> temp;
		if (!cin.good())
		{
			cin.clear();
			cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');	//problem z makro. Bez std probuje brac makro z windows.h
			cout << "B³êdne dane. Wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
		*i = temp;
	}

	return (begin + iterator);
}

void show_array(double *begin, double *end)
{

	int iterator = 1;
	for (auto i = begin; i < end; i++,iterator++) {
		cout << "Nieruchomosc nr " << iterator << ": ";
		cout << *i << endl;
	}
}

void revalue(double *begin, double *end, double factor)
{
	for (auto i = begin; i < end; i++)
	{
		(*i) *= factor;
	}
}

