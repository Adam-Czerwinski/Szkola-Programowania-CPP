#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
private:
	enum{Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	Stonewt operator*(double val) const;
	friend Stonewt operator*(double val, Stonewt &st);
	void show_lbs() const;
	void show_stn() const;
};

#endif // !STONEWT_H_
