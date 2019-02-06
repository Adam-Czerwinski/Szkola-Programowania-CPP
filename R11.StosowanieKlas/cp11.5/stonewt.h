#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
private:
	enum{Lbs_per_stn = 14};
	enum class MODE {
		STONES, POUNDS_WITHOUT_REST, POUNDS_WITH_REST
	};
	MODE mode;
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	double getPounds() const {
		return pounds;
	}
	void modeStones();
	void modePoundsWithoutRest();
	void modePoundsWithRest();
	Stonewt operator+(const Stonewt &st) const;
	Stonewt operator-(const Stonewt &st) const;
	Stonewt operator*(const Stonewt &st) const;
	friend std::ostream& operator<<(std::ostream &os, const Stonewt &st);
};

#endif // !STONEWT_H_
