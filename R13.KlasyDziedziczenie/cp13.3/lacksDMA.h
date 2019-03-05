#ifndef LACSKDMA_H_
#define LACSKDMA_H_

#include <iostream>
#include "base.h"

class lacksDMA : public base {
private:
	enum CONST { COL_LEN = 40 };
	char color[CONST::COL_LEN];
public:
	lacksDMA(const char* c = "brak", const char* l = "brak", int r = 0);
	lacksDMA(const char* c, const base& rs);
	virtual void View() const;
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ls);
};

#endif //LACSKDMA_H_