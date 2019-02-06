#include <iostream>
#include "coordin.h"

using namespace std;

int main() {

	rect rplace;
	polar pplace;

	cout << "Podaj wartoœci x i y: ";
	while (cin >> rplace.x >> rplace.y) {
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Nastêpne wspó³rzêdne (q koñczy): ";
	}

	cout << "Gotowe!\n";

	return 0;
}