#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "pantera";

	cout << "Podaj gatunek kota: ";
	cin >> charr1;
	cout << "Podaj inny gatunek kota: ";
	cin >> str1;

	cout << "Oto wybrane kotowate: \n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;

	cout << "Trzecia litera w s³owie " << charr2 << " to " << charr2[2] << endl;
	cout << "Trzecia litera w s³owie " << str2 << " to " << str2[2] << endl;
	

	return 0;
}