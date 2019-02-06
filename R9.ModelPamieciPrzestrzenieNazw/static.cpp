#include <iostream>

using namespace std;

const int ArSize = 10;

void strcount(const char* str);

int main() {
	char input[ArSize];
	char next;

	cout << "Wprowad� wiersz:\n";
	cin.get(input, ArSize);
	while(cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Wprowad� nast�pny wiersz (wiersz pusty ko�czy wprowadzanie:\n";
		cin.get(input, ArSize);
	}

	cout << "Koniec!\n";

	return 0;
}

void strcount(const char* str) {
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" zawiera ";
	while (*str++) {
		count++;
	}
	total += count;
	cout << count << " znak�w\n";
	cout << "��cznie " << total << " znak�w\n";
}