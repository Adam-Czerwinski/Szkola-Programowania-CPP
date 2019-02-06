#include <iostream>
#include "coordin.h"

using namespace std;

int main() {

	rect rplace;
	polar pplace;

	cout << "Podaj warto�ci x i y: ";
	while (cin >> rplace.x >> rplace.y) {
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Nast�pne wsp�rz�dne (q ko�czy): ";
	}

	cout << "Gotowe!\n";

	return 0;
}