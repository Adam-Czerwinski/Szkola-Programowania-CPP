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

	inflatable bouquet =
	{
		"s�oneczniki",
		0.20,
		12.49
	};

	inflatable choice;

	cout << "zmienna bouquet: " << bouquet.name << " za ";
	cout << bouquet.price << " z�" << endl;

	choice = bouquet;
	cout << "zmienna choice: " << choice.name << " za ";
	cout << choice.price << " z�" << endl;

	


	return 0;
}