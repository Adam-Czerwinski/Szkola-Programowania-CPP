#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main() {
	using namespace std;
	String name;

	cout << "Czesc, jak masz na imie?\n>>";
	cin >> name;

	cout << name << ", wpisz do " << ArSize
		<< "krotkich powiedzionek <pusty wiersz konczy wprowadzanie>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++) {
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "Oto twoje powiedzionka:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i] << '\n';
		
		String* shortest = &sayings[0];
		String* first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
				shortest = &sayings[i];
			if (sayings[i] < *first)
				first = &sayings[i];
		}

		cout << "Najkrotsze powiedzonko:\n" << *shortest << endl;
		cout << "Powiedzonko alfabetycznie pierwsze:\n" << *first<< endl;

		srand(time(0));
		int choice = rand() % total;
		String* favorite = new String(sayings[choice]);
		cout << "Moje ulubione powiedzonko:\n" << *favorite << endl;
		cin.get();
		cout << "sizeof(sayings[0]): " << sizeof(sayings[0]) << endl;
		cout << "sizeof(sayings[1]): " << sizeof(sayings[1]) << endl;
		cout << "sizeof(favorite): " << sizeof(favorite) << endl;
		cout << "sizeof(*favorite): " << sizeof(*favorite) << endl;
		cout << "sizeof(&favorite): " << sizeof(&favorite) << endl;
		cout << "sizeof(char): " << sizeof(char) << endl;
		cout << "sizeof(int): " << sizeof(int) << endl;
		cout << "sizeof(String): " << sizeof(String) << endl;
		cin.get();
		delete favorite;
	}
	else
		cout << "Nie ma o czym gadac, co?\n";


	cout << "Zegnam.\n";

	return 0;
}