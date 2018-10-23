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

	cout << "Jeden obiekt mo¿na przypisaæ innemu: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << " , s2: " << s2 << endl;

	cout << "Obiektowi string mo¿na przypisaæ ³añcuch w konwencji C.\n";
	cout << "s2 = \"myszo³ów\"\n";
	s2 = "myszo³ów";
	cout << "s2: " << s2 << endl;

	cout << "Mo¿na ³¹czyæ dwa ³añcuchy string: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;

	cout << "Mo¿na dodawaæ ³añcuchy.\n";
	s1 += s2;
	cout << "s1+=s2 daje s1 = " << s1 << endl;

	s2 += " na dzieñ";
	cout << "s2 += \" na dzieñ\" daje s2 = " << s2 << endl;

	return 0;
}