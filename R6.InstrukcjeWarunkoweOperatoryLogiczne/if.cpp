#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char ch;
	int spaces{};
	int total{};

	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			spaces++;
		++total;
		cin.get(ch);
	}

	cout << "W zdaniu jest " << spaces << " spacji, a ��cznie " << total << " znak�w.\n";

	return 0;
}
