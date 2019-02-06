#include <iostream>
#include <cstdlib>		//rand(), srand()
#include <ctime>		//time()
#include <fstream>
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
	ofstream file;
	file.open("randwalk.txt");

	cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	while (cin >> target)
	{
		cout << "Podaj d³ugoœæ kroku: ";
		if (!(cin >> dstep))
			break;
		file << "Dystans do przejœcia: " << target << ", d³ugoœæ kroku: " << dstep << '\n';
		file << steps << ": " << result << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			file << steps << ": " << result << endl;
		}
		file << "Po " << steps << " krokach delikwent "
			"oi¹gn¹³ po³o¿enie:\n";
		file << result << endl;
		result.polar_mode();
		file << " czyli\n" << result << endl;
		file << "Œrednia d³ugoœæ kroku pozornego = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	}
	file.close();
	cout << "Koniec!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}