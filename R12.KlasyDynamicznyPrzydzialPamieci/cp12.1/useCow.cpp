#include <iostream>
#include "cow.h"

int main() {
	using namespace std;

	Cow cow;
	Cow cow2("abcdefghijklmnoprstuwxyz", "Moje hobby to gra w pilke", 150.5);
	Cow cow3("Krowa Karol", "Moje hobby to informatyka", 132.9);
	Cow cow4 = cow2;
	Cow cow5;
	Cow* cow6 = new Cow(cow);
	cow5 = cow3;
	cow.ShowCow();
	cow2.ShowCow();
	cow3.ShowCow();
	cow2.~Cow();
	cow4.ShowCow();
	cow3.~Cow();
	cow5.ShowCow();
	cow6->ShowCow();
	delete cow6;

	return 0;
}