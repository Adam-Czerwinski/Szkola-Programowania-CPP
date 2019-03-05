#ifndef BASE_H_
#define BASE_H_

#include <iostream>

class base {
private:
	char* label;
	int rating;
public:
	base(const char* l = "brak", int r = 0);
	base(const base& rs);
	virtual ~base();
	virtual void View() const = 0;
	base& operator=(const base& rs);
	friend std::ostream& operator<<(std::ostream& os, const base& rs);
};

#endif // !BASE_H_

