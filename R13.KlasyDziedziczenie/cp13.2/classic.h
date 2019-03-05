#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "cd.h"

class Classic : public Cd {
private:
	char* mainSong;
public:
	Classic();
	Classic(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic& operator=(const Classic& d);
	virtual ~Classic();
	virtual void Raport() const;
};

#endif // !CLASSIC_H_
