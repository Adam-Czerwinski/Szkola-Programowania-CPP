#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char ch;

	cout << "Pisz, a ja b�d� powtarza�.\n";
	cin.get(ch);

	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}

	cout << "\nProsz� wybaczy� drobne niedor�bki\n";

	return 0;
}