#include <iostream>
#include <cstdlib>		//rand(), srand()
#include <ctime>		//time()
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

	cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	while (cin >> target)
	{
		cout << "Podaj d³ugoœæ kroku: ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "Po " << steps << " krokach delikwent "
			"oi¹gn¹³ po³o¿enie:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " czyli\n" << result << endl;
		cout << "Œrednia d³ugoœæ kroku pozornego = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	}
	
	cout << "Koniec!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}