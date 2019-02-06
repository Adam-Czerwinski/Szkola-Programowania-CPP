#include <iostream>
#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs) {
	mode = MODE::STONES;
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
	mode = MODE::STONES;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
	mode = MODE::STONES;
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {}

void Stonewt::modeStones() {
	mode = MODE::STONES;
}
void Stonewt::modePoundsWithoutRest() {
	mode = MODE::POUNDS_WITHOUT_REST;
}
void Stonewt::modePoundsWithRest() {
	mode = MODE::POUNDS_WITH_REST;
}

Stonewt Stonewt::operator+(const Stonewt &st) const {
	Stonewt temp;

	double tempPounds = pounds + st.getPounds();
	temp = tempPounds;						//wywo³anie metody Stonewt(double lbs)
	return temp;
}
Stonewt Stonewt::operator-(const Stonewt &st) const {
	Stonewt temp;

	double tempPounds = pounds - st.getPounds();
	temp = tempPounds;						//wywo³anie metody Stonewt(double lbs)
	return temp;
}
Stonewt Stonewt::operator*(const Stonewt &st) const {
	Stonewt temp;

	double tempPounds = pounds * st.getPounds();
	temp = tempPounds;						//wywo³anie metody Stonewt(double lbs)
	return temp;
}

std::ostream& operator<<(std::ostream &os, const Stonewt &st) {
	if (st.mode == st.MODE::STONES)
		os << st.stone << " kamieni, " << st.pds_left << " funtów\n";
	else if (st.mode == st.MODE::POUNDS_WITHOUT_REST)
		os << static_cast<int>(st.pounds) << '\n';
	else if (st.mode == st.MODE::POUNDS_WITH_REST)
		os << st.pounds << '\n';

	return os;
}

