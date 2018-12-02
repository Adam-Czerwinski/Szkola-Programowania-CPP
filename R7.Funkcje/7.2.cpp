#include <iostream>
#include <vector>
#include <limits>
#include <string>
using namespace std;

vector<int> wprowadzDane(vector<int> *wyniki)
{
	int dane = 0;

	cout << "Wprowadz do 10 wynikow golfowych, 'q' koñczy dzia³anie" << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Poda wynik nr " << i + 1 << ": ";
		cin >> dane;
		//jezeli wprowadzone zostaly niepoprawne dane wtedy czyscimy flage (cin.clear()) i ignorujemy wszystkie znaki w buforze, a¿ do znaku nowej linii '\n'
		if(!cin.good()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
		else wyniki->push_back(dane);
	}

	return *wyniki;
}

void wyswietlDane(const vector<int> *wyniki)
{
	for (int i = 0; i < wyniki->size(); i++)
	{
		cout << wyniki->at(i) << " ";
	}
	cout << endl;
}

double obliczSrednia(const vector<int> *wyniki)
{
	int suma = 0;
	for (int i = 0; i < wyniki->size(); i++)
	{
		suma += wyniki->at(i);
	}

	double wynik = double(suma) / wyniki->size();
	return wynik;
}

int main() {
	vector<int> wyniki;
	wyniki = wprowadzDane(&wyniki);
	wyswietlDane(&wyniki);
	if (wyniki.size())
	{
	cout<<"Srednia wynosi: " << obliczSrednia(&wyniki);
	}
	else
		cout << "Nie ma co liczyæ.";
	return 0;
}