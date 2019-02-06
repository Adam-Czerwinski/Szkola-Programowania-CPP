#include <iostream>
#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
}

double Stonewt::getPounds() const
{
	return pounds;
}

bool Stonewt::operator==(const Stonewt &st) const
{
	return pounds == st.getPounds();
}
bool Stonewt::operator!=(const Stonewt &st) const {
	return pounds != st.getPounds();
}
bool Stonewt::operator>(const Stonewt &st) const {
	return pounds > st.getPounds();
}
bool Stonewt::operator>=(const Stonewt &st) const {
	return pounds >= st.getPounds();
}
bool Stonewt::operator<(const Stonewt &st) const {
	return pounds < st.getPounds();
}
bool Stonewt::operator<=(const Stonewt &st) const {
	return pounds <= st.getPounds();
}

Stonewt::~Stonewt(){}

void Stonewt::show_stn() const {
	cout << stone << " kamieni, " << pds_left << " funtów\n";
}
void Stonewt::show_lbs() const {
	cout << pounds << " funtów\n";
}