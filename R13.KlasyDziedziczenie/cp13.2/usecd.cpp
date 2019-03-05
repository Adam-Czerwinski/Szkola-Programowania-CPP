#include <iostream>
#include "cd.h"
#include "classic.h"

using namespace std;

void Bravo(const Cd& disk);

int main() {

	Cd c1("Beatles", "Capital", 14, 35.5);
	Classic c2 = Classic("Sonata fortepianowa B-dur, Fantazja C-moll", "Alfred Brendel", "Phillips", 2, 57.17);
	Cd* pcd = &c1;

	cout << "Bezposrednie uzycie obiektu:\n";
	c1.Raport();
	c2.Raport();

	cout << "Uzycie wskaznika na typ cd:\n";
	pcd->Raport();
	pcd = &c2;
	pcd->Raport();

	cout << "Wywolanie funkcji z argumentem w postaci referencji do typu Cd:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Test przypisania: ";
	Classic copy;
	copy = c2;
	copy.Raport();

	return 0;
}

void Bravo(const Cd& disk) {
	disk.Raport();
}