#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	string s1 = "pingwin";
	string s2, s3;

	cout << "Jeden obiekt mo�na przypisa� innemu: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << " , s2: " << s2 << endl;

	cout << "Obiektowi string mo�na przypisa� �a�cuch w konwencji C.\n";
	cout << "s2 = \"myszo��w\"\n";
	s2 = "myszo��w";
	cout << "s2: " << s2 << endl;

	cout << "Mo�na ��czy� dwa �a�cuchy string: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;

	cout << "Mo�na dodawa� �a�cuchy.\n";
	s1 += s2;
	cout << "s1+=s2 daje s1 = " << s1 << endl;

	s2 += " na dzie�";
	cout << "s2 += \" na dzie�\" daje s2 = " << s2 << endl;

	return 0;
}