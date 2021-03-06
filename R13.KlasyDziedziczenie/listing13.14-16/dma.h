#ifndef DMA_H_
#define DMA_H_

#include <iostream>

class baseDMA {
private:
	char* label;
	int rating;
public:
	baseDMA(const char* l = "brak", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

class lacksDMA : public baseDMA {
private:
	enum CONST { COL_LEN = 40 };
	char color[CONST::COL_LEN];
public:
	lacksDMA(const char* c = "brak", const char* l = "brak", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ls);
};

class hasDMA : public baseDMA {
private:
	char* style;
public:
	hasDMA(const char* s = "brak", const char* l = "brak", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& hs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
};

#endif //DMA_H_