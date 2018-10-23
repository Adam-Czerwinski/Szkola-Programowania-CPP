#include <iostream>
#include <string>
#include <cstring>
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

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " makaron";
	strcat(charr1, " sok");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "£añcuch " << str1 << " ma " << len1 << " znaków\n";
	cout << "£añcuch " << charr1 << " ma " << len2 << " znaków\n";


	return 0;
}