#include <iostream>
#include <windows.h>

using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};

	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Wpisz na swoj¹ listê goœci jeszcze: " << guest.name;
	cout << " oraz " << pal.name << "!\n";
	cout << "Mo¿esz mieæ ich oboje za ";
	cout << guest.price + pal.price << " z³!\n";


	return 0;
}