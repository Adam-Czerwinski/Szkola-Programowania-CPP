#include <iostream>
#include <string>

using namespace std;

const int ArSize = 10;

void strcount(const string str);

int main() {
	string input;

	cout << "WprowadŸ wiersz:\n";
	getline(cin, input);
	while (!input.empty())
	{
		strcount(input);
		cout << "WprowadŸ nastêpny wiersz (wiersz pusty koñczy wprowadzanie:\n";
		getline(cin, input);
	}

	cout << "Koniec!\n";

	return 0;
}

void strcount(const string str) {
	static int total = 0;

	cout << "\"" << str << "\" zawiera ";
	
	total += str.length();
	cout << str.length() << " znaków\n";
	cout << "£¹cznie " << total << " znaków\n";
}