#include <iostream>
#include <windows.h>
#include <cctype>

using namespace std;
int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	cout << "Podaj tekst do analizy, zakoñcz go, wpisuj¹c znak @.\n";
	
	char ch;
	int whiteSpace{};
	int digits{};
	int chars{};
	int punct{};
	int others{};

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whiteSpace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else others++;
		cin.get(ch);
	}
	
	cout << chars << " liter,\n"
		<< whiteSpace << " spacji,\n"
		<< digits << " cyfr,\n"
		<< punct << " znaków przystankowych,\n"
		<< others << " innych znaków.\n";

	return 0;
}

