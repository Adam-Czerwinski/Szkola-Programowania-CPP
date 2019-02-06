#ifndef GOLF_H_
#define GOLF_H_

#include <iostream>

const int Len = 40;

class Golf
{
private:
	char fullname[Len];
	int handicap;

public:
	Golf() {}
	Golf(const char* name, int hc);
	~Golf() {
		std::cout << "Destruktor " <<fullname<< std::endl;
	}
	int setgolf();
	void sethandicap(int hc);
	void showgolf() const;
};



#endif // !GOLF_H_
