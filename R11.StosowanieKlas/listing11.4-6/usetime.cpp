#include <iostream>
#include "mytime.h"

int main() {

	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total1;

	cout << "Czas planowania = ";
	planning.Show();
	cout << endl;

	cout << "Czas kodowania = ";
	coding.Show();
	cout << endl;

	cout << "Czas poprawiania = ";
	fixing.Show();
	cout << endl;

	total1 = coding + fixing;
	cout << "£¹cznie (coding + fixing) = ";
	total1.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "Kolejne poprawki = ";
	morefixing.Show();
	cout << endl;
	total1 = total1.operator+(morefixing);
	cout << "£¹cznie (total.operator+(morefixing)) = ";
	total1.Show();
	cout << endl;

	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total2;
	Time diff;
	Time adjusted;

	cout << "Czas pielenia = ";
	weeding.Show();
	cout << endl;

	cout << "Czas woskowania = ";
	waxing.Show();
	cout << endl;

	cout << "£¹czny czas pracy = ";
	total2 = weeding + waxing;
	total2.Show();
	cout << endl;

	diff = weeding - waxing;
	cout << "Czas pielenia - Czas woskowania = ";
	diff.Show();
	cout << endl;

	adjusted = total2 * 1.5;
	cout << "Czas pracy z poprawk¹ na przerwy = ";
	adjusted.Show();
	cout << endl;

	return 0;
}