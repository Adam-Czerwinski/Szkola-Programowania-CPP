#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char animal[20]{ "niedŸwiedŸ" };;
	const char *bird = "myszo³ów";
	char *ps;

	cout << animal << " oraz " << bird << "\n";
	//cout<< ps << "\n";	//mo¿e pokazaæ œmieci lub zawiesiæ program.

	cout << "Podaj rodzaj zwierzêcia: ";
	cin >> animal;
	//cin >> ps;	//Lepiej nie próbowaæ..

	ps = animal;
	cout << ps << "i!\n";
	cout << "Przed u¿yciem strcpy():\n";
	cout << animal << " pod adresem " << (int *)animal << endl;	
	cout << ps << " pod adresem " << (int *)ps << endl;		

	ps = new char[strlen(animal) + 1];						
	strcpy(ps, animal);
	cout << "Po u¿yciu strcpy():\n";
	cout << animal << " pod adresem " << (int *)animal << endl;
	cout << ps << " pod adresem " << (int *)ps << endl;
	delete[]ps;

	return 0;
}