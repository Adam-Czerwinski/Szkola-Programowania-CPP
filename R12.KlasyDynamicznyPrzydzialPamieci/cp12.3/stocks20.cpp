#include <iostream>
#include <cstring>
#include "stocks20.h"

Stock::Stock() {
	const char* temp = "bez nazwy";
	int length = std::strlen(temp);
	company = new char[length + 1];
	std::strcpy(company, temp);
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char* co, long n, double pr) {
	int length = std::strlen(co);
	company = new char[length + 1];
	std::strcpy(company, co);

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

Stock::~Stock() { delete[]company; }

Stock::Stock(const Stock& s)
{
	int length = std::strlen(s.company);
	company = new char[length + 1];
	std::strcpy(company, s.company);
	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;
}

Stock& Stock::operator=(const Stock& s) {
	if (this == &s)
		return *this;
	int length = std::strlen(s.company);
	delete[]company;
	company = new char[length + 1];
	std::strcpy(company, s.company);
	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;

	return *this;
}

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

std::ostream& operator<<(std::ostream& os, const Stock& s) {
	std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	os << "Sp�ka: " << s.company
		<< " Liczba udzia��w: " << s.shares << '\n'
		<< " Cena udzia�u: " << s.share_val << " z�";

	os.precision(2);
	os << " ��czna warto�� udzia��w: " << s.total_val << " z�" << '\n';

	os.setf(orig, std::ios_base::floatfield);
	os.precision(prec);

	return os;
}
const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;		//zwraca warto�� wi�c dereferencja.
}