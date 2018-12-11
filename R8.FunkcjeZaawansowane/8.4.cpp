#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

struct stringy {
	char *str;
	int ct;
};

void set(stringy &o, const char text[]);
void show(const stringy &o, const int n = 1);
void show(const char* text, const int n = 1);
int main() {

	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	stringy beany;
	char testing[] = "Rzeczywistoœæ to ju¿ nie to, co kiedyœ.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Gotowe!");

	delete[] beany.str;
	return 0;
}

void set(stringy &o, const char text[]) {
	int length = strlen(text);

	char *pstr = new char[length + 1];
	strcpy(pstr, text);

	o.str = pstr;
	o.ct = length;
}

void show(const stringy &o, const int n) {
	for (int i = 0; i < n; i++)
	{
		cout << o.str << endl;
	}
}

void show(const char* text, const int n) {
	for (int i = 0; i < n; i++)
	{
		cout << text << endl;
	}
}