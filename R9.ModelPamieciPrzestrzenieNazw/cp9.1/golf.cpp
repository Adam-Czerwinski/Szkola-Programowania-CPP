#include <iostream>
#include <cstring>
#include <climits>
#include "golf.h"

void setgolf(golf &g, const char* name, int hc) {
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf &g) {
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
			strcpy(g.fullname, tempname);
			g.handicap = temphandicap;
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

void handicap(golf &g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf &g) {
	using std::cout;
	using std::endl;
	
	cout << "Nazwa: " << g.fullname << ", handicap: " << g.handicap<<"." << endl;
}