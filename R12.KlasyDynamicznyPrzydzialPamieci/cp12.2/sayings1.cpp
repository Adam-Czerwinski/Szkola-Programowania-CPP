#include <iostream>
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	String s1(" i ucze sie C++.");
	String s2 = "Podaj swoje imie: ";
	String s3;
	cout << s2;
	cin >> s3;
	s2 = "Mam na imie " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "Ciag\n" << s2 << "\nzawiera " << s2.howManyChars('A')
		<< " 'A'.\n";
	s1 = "czerwona";
	String rgb[3] = { String(s1),String("zielona"),String("niebieska") };
	cout << "Podaj nazwe barwy podstawowej: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "Prawidlowo!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Sprobuj ponownie!\n";
	}

	cout << "Zegnam.\n";


	/*String name;
	cout << "Czesc, jak masz na imie?\n>> ";
	cin >> name;

	cout << name << ", wpisz do " << ArSize
		<< " krotkich powiedzionek <pusty wiersz koäczy wprowadzanie>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
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
		cout << "Oto twoje powiedzonka:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Najkrotsze powiedzonko:\n" << sayings[shortest] << endl;
		cout << "Powiedzonko alfabetycznie pierwsze:\n" << sayings[first] << endl;
		cout << "Program wykorzystal " << String::HowMany()
			<< " obiektow klasy String. Hej!\n";
	}
	else
		cout << "Brak danych! Pa.\n";*/
	return 0;
}