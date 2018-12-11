#include <iostream>
#include <string>
#include <windows.h>
#include <cctype>

using namespace std;

void replaceUpper(string &tekst);

int main() {

	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	string tekst;

	cout << "Podaj ³añcuch (q, aby skonczyc): ";
	getline(cin, tekst);
	while (tekst != "q")
	{
		replaceUpper(tekst);
		cout << tekst << endl;
		cout << "Podaj ³añcuch (q, aby skonczyc): ";
		getline(cin, tekst);
	}

	cout << "Do widzenia" << endl;

	return 0;
}


void replaceUpper(string &tekst) {

	for (int i = 0; i < tekst.length(); i++)
	{
		tekst.at(i) = toupper(tekst.at(i));
	}
	
	return;
}