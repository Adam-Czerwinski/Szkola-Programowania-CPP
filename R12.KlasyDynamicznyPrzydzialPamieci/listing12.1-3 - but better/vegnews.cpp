#include <iostream>
#include "strngbad.h"

using std::cout;
using std::cin;
void callme1(StringBad &);
void callme2(StringBad);

int main() {

	using std::endl;
	{
		cout << "Zaczynamy blok wewnêtrzny.\n";
		StringBad headline1("Œpiew skowronka - nowe zwrotki usypiaj¹?");
		StringBad headline2("Kogutom œmieræ");
		StringBad sports("Brzask wypada z ligi, skandal sêdziowski");
		cout << "Z ostatniej chwili: " << headline1 << endl;
		cout << "Temat dnia: " << headline2 << endl;
		cout << "Wiadomoœci sportowe: " << sports << endl;
		callme1(headline1);
		cout << "Z ostatniej chwili: " << headline1 << endl;
		callme2(headline2);
		cout << "Temat dnia: " << headline2 << endl;
		cout << "Inicjalizacja obiektu ci¹gu innym obiektem:\n";
		StringBad sailor = sports;
		/*sports.~StringBad();*/
		cout << "Z kraju: " << sailor << endl;
		cout << "Przypisanie obiektu do innego obiektu:\n";
		StringBad knot;
		knot = headline1;
		cout << "Ze œwiata: " << knot << endl;
		cout << "Koniec bloku.\n";
	}
	cout << "Koniec main()\n";

	return 0;
}

void callme1(StringBad &rsb){
cout<<"Obiekt ci¹gu przekazany przez referencjê:\n";
cout << "    \"" << rsb << "\"\n";
}
void callme2(StringBad sb){
	cout << "Obiekt ci¹gu przekazany przez wartoœæ:\n";
	cout << "    \"" << sb << "\"\n";

}