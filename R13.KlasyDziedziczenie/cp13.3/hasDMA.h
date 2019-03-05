#ifndef HASDMA_H_
#define HASDMA_H_

#include <iostream>
#include "base.h"

class hasDMA : public base {
private:
	char* style;
public:
	hasDMA(const char* s = "brak", const char* l = "brak", int r = 0);
	hasDMA(const char* s, const base& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	virtual void View() const;
	hasDMA& operator=(const hasDMA& hs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
};

#endif //HASDMA_H_