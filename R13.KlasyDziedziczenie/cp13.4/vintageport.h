#ifndef VINTAGEPORT_H_
#define VINTAGEPORT_H_

#include "port.h"

extern const char* style;

class VintagePort : public Port
{
private:
	char* nickname;
	int year;
public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }
	void Show() const;
	friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);
};

#endif // !VINTAGEPORT_H_
