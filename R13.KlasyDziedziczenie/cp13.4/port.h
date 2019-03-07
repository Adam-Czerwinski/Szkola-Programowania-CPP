#ifndef PORT_H_
#define PORT_H_

#include <iostream>

class Port {
private:
	enum class SIZE{style=20};
	char* brand;
	char style[SIZE::style];
	int bottles;
public:
	Port(const char* br = "Brak", const char* st = "Brak", int b = 0);
	Port(const Port& p);
	virtual ~Port() { delete[] brand; }
	Port& operator=(const Port& p);
	Port& operator+=(int b);
	Port& operator-=(int b);
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend std::ostream& operator<<(std::ostream &os, const Port& p);
};

#endif // !PORT_H_
