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

	inflatable guests[2] =
	{
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};

	cout << "Goœcie tacy jak " << guests[0].name << " i " << guests[1].name << "\nrazem maj¹ " << guests[0].volume + guests[1].volume << " stóp szeœciennych.\n";




	return 0;
}