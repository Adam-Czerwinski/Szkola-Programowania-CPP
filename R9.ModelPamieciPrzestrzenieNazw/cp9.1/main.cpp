#include <iostream>
#include <climits>
#include "golf.h"

int main() {

	using std::cout;
	using std::cin;

	golf golfy[3];

	int i = 0;
	int tempInt;
	while (i < 3 && setgolf(golfy[i]))
	{
		cout << "WprowadŸ ponownie handicap(je¿eli nie chcesz to q): ";
		if (cin >> tempInt) {
			cin.ignore();
			handicap(golfy[i], tempInt);
		}
		else {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		i++;
	}

	for (int j = 0; j < i; j++) {
		showgolf(golfy[j]);
	}

	golf andy;
	char tempFullName[Len] = "Golfik jakis";
	tempInt = 13;

	cout << "\nTeraz Andy:\n";

	setgolf(andy, tempFullName, tempInt); 
	cout << "WprowadŸ ponownie handicap(je¿eli nie chcesz to q): ";
	if ((cin >> tempInt).get())
		handicap(andy, tempInt);

	showgolf(andy);

	cout << "\nGotowe!\n";
	return 0;
}