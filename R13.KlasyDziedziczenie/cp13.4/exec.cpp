#include <iostream>
#include "port.h"
#include "vintageport.h"

int main() {

	using namespace std;

	Port p1;
	Port p2("Carlo Rossi");
	Port p3("Kadarka","Polslodkie",20);

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	p1.Show();
	p2.Show();
	p3.Show();

	p1 += 10;
	cout << p1 << endl;
	p1 -= 20;
	cout << p1 << endl;

	p1 = p3;
	cout << p1 << endl;

	Port p4 = p3;
	cout << p4 << endl;

	VintagePort vp1;
	VintagePort vp2("Carlo Rossi",10,"Nazwa",2003);
	VintagePort vp3("Kadarka", 15, "Elo",1997);
	cout << vp1 << endl;
	cout << vp2 << endl;
	cout << vp3 << endl;
	vp1.Show();
	vp2.Show();
	vp3.Show();

	vp2 += 10;
	cout << vp2 << endl;
	vp2 -= 20;
	cout << vp2 << endl;

	vp1 = vp3;
	cout << vp1 << endl;

	VintagePort vp4 = vp3;
	cout << vp4<< endl;
	return 0;
}