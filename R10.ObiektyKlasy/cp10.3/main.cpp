#include <iostream>
#include <climits>
#include "golf.h"

int main() {

	using std::cout;
	using std::cin;

	Golf golfy[3];

	int i = 0;
	int tempInt;
	while (i < 3 && golfy[i].setgolf())
	{
		cout << "WprowadŸ ponownie handicap(je¿eli nie chcesz to q): ";
		if (cin >> tempInt) {
			cin.ignore();
			golfy[i].sethandicap(tempInt);
		}
		else {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		i++;
	}

	for (int j = 0; j < i; j++) {
		golfy[j].showgolf();
	}

	Golf andy;
	char tempFullName[Len] = "Golfik jakis";
	tempInt = 13;

	cout << "\nTeraz Andy:\n";

	andy = Golf(tempFullName, tempInt);
	cout << "WprowadŸ ponownie handicap(je¿eli nie chcesz to q): ";
	if ((cin >> tempInt).get())
		andy.sethandicap(tempInt);

	andy.showgolf();

	cout << "\nGotowe!\n";
	return 0;
}