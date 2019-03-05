#ifndef BASEDMA_H_
#define BASEDMA_H_

#include <iostream>
#include "base.h"

class baseDMA : public base {

public:
	baseDMA(const char* l = "brak", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	virtual void View() const;
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

#endif //BASEDMA_H_