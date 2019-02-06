#include <iostream>
#include "stocks20.h"

Stock::Stock() {
	company = "bez nazwy";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
	company = co;

	if (n < 0)
	{
		std::cout << "Liczba udzia��w nie mo�e by� ujemna; "
			<< "ustalam liczb� udzia��w w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();

}

Stock::~Stock() {}

void Stock::buy(long num, double price) {
	if (num < 0)
	{
		std::cout << "Liczba nabywanych udzia��w nie mo�e byc ujemna. "
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
		cout << "Liczba nabywanych udzia��w nie mo�e byc ujemna. "
			<< "Transakcja przerwana.\n";
	}
	else if (num > shares)
	{
		cout << "Nie mo�esz sprzedawa� wi�cej udzia��w, ni� posiadasz! "
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
void Stock::show() const {

	std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	std::cout << "Sp�ka: " << company
		<< " Liczba udzia��w: " << shares << '\n'
		<< " Cena udzia�u: " << share_val << " z�";

	std::cout.precision(2);
	std::cout << " ��czna warto�� udzia��w: " << total_val << " z�" << '\n';

	std::cout.setf(orig, std::ios_base::floatfield);
	std::cout.precision(prec);
}

const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
		return s;
	else 
		return *this;		//zwraca warto�� wi�c dereferencja.
}