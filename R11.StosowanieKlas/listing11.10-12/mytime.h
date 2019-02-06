#ifndef MYTIME_H_
#define MYTIME_H_

#include <iostream>

using std::ostream;

class Time {
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time &t) const;
	Time operator-(const Time &t) const;
	Time operator*(double n) const;
	friend Time operator*(double m, const Time&t) {
		return t * m;		//wywo�a metod� operator*(double n) const; i zwr�ci jej warto��.
	}
	friend ostream& operator<<(ostream &os, const Time &t);
};

#endif // !MYTIME_H_
