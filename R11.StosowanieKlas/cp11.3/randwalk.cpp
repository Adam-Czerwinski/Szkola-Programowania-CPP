#include <iostream>
#include <cstdlib>		//rand(), srand()
#include <ctime>		//time()
#include <cfloat>
#include "vect.h"

int main() {

	using namespace std;
	using VECTOR::Vector;

	srand(time(0));		//inicjalizacja generatora liczb pseudolosowych
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int proby;
	long double min = LDBL_MAX;
	long double srednia = 0;
	long double maks{};
	cout << min << endl << endl;
	

	cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	while (cin >> target)
	{
		cout << "Podaj d³ugoœæ kroku: ";
		if (!(cin >> dstep))
			break;

		cout << "Ile prób?: ";
		if (!(cin >> proby))
			break;

		for (int i = 0; i < proby; i++)
		{

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		min = steps < min ? steps : min;
		maks = steps > maks ? steps : maks;
		srednia += steps;
		steps = 0;
		result.reset(0.0, 0.0);
		}


		srednia /= proby;
		cout << "Minimalna iloœæ kroków w ci¹gu " << proby << " prób = " << min << endl;
		cout << "Maksymalna iloœæ kroków w ci¹gu " << proby << " prób = " << maks << endl;
		cout << "Œrednia iloœæ kroków w ci¹gu " << proby << " prób = " << srednia << endl;
		min = LDBL_MAX;
		srednia = 0;
		maks = 0;


		cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	}
	
	cout << "Koniec!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}