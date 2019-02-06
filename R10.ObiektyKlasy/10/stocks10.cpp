#include <iostream>
#include "stocks10.h"

Stock::Stock(){
	std::cout << "Wywo³ano konstruktor domyœlny\n";
	company = "bez nazwy";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
	std::cout << "Wywo³ano konstruktor z argumentem " << co << "\n";
	company = co;

	if (n < 0)
	{
		std::cout << "Liczba udzia³ów nie mo¿e byæ ujemna; "
			<< "ustalam liczbê udzia³ów w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();

}

Stock::~Stock() {
	std::cout << "Do widzenia, " << company << "!\n";
}

void Stock::buy(long num, double price) {
	if (num < 0)
	{
		std::cout << "Liczba nabywanych udzia³ów nie mo¿e byc ujemna. "
			<< "Transakcja przerwana.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price) {
	using std::cout;
	if (num < 0)
	{
		cout << "Liczba nabywanych udzia³ów nie mo¿e byc ujemna. "
			<< "Transakcja przerwana.\n";
	}
	else if (num > shares)
	{
		cout << "Nie mo¿esz sprzedawaæ wiêcej udzia³ów, ni¿ posiadasz! "
			<< "Transakcja przerwana.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
void Stock::show() {

	std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	std::cout << "Spó³ka: " << company
		<< " Liczba udzia³ów: " << shares << '\n'
		<< " Cena udzia³u: " << share_val << " z³";

	std::cout.precision(2);
	std::cout<< " £¹czna wartoœæ udzia³ów: " << total_val << " z³" << '\n';
	
	std::cout.setf(orig, std::ios_base::floatfield);
	std::cout.precision(prec);
}