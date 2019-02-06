#include <iostream>
#include "strngbad.h"

using std::cout;

void callme1(StringBad &);
void callme2(StringBad);

int main() {

	using std::endl;
	{
		cout << "Zaczynamy blok wewn�trzny.\n";
		StringBad headline1("�piew skowronka - nowe zwrotki usypiaj�?");
		StringBad headline2("Kogutom �mier�");
		StringBad sports("Brzask wypada z ligi, skandal s�dziowski");
		cout << "Z ostatniej chwili: " << headline1 << endl;
		cout << "Temat dnia: " << headline2 << endl;
		cout << "Wiadomo�ci sportowe: " << sports << endl;
		callme1(headline1);
		cout << "Z ostatniej chwili: " << headline1 << endl;
		callme2(headline2);
		cout << "Temat dnia: " << headline2 << endl;
		cout << "Inicjalizacja obiektu ci�gu innym obiektem:\n";
		StringBad sailor = sports;
		cout << "Z kraju: " << sailor << endl;
		cout << "Przypisanie obiektu do innego obiektu:\n";
		StringBad knot;
		knot = headline1;
		cout << "Ze �wiata: " << knot << endl;
		cout << "Koniec bloku.\n";
	}
	cout << "Koniec main()\n";

	return 0;
}

void callme1(StringBad &rsb){
cout<<"Obiekt ci�gu przekazany przez referencj�:\n";
cout << "    \"" << rsb << "\"\n";
}
void callme2(StringBad sb){
	cout << "Obiekt ci�gu przekazany przez warto��:\n";
	cout << "    \"" << sb << "\"\n";

}