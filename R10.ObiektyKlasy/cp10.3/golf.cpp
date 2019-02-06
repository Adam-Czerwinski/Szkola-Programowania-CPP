#include <iostream>
#include <cstring>
#include <climits>
#include "golf.h"

Golf::Golf(const char* name, int hc) {
	strcpy(fullname, name);
	handicap = hc;
}

int Golf::setgolf() {
	using std::cout;
	using std::cin;
	
	char tempname[Len];
	int temphandicap;

	cout << "Podaj nazwê: ";
	cin.get(tempname, Len);
	
	if (cin.good())
	{
		cout << "Podaj handicap: ";
		(cin >> temphandicap).get();
		if (cin.good())
		{

			Golf temp = Golf(tempname, temphandicap);
			*this = temp;

			return 1;
		}
		else {
			cout << "Nieprawid³owe dane\n";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}

	}
	else {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return 0;
	}

}

void Golf::sethandicap(int hc){
	handicap = hc;
}

void Golf::showgolf() const{
	using std::cout;
	using std::endl;
	
	cout << "Nazwa: " << fullname << ", handicap: " << handicap<<"." << endl;
}