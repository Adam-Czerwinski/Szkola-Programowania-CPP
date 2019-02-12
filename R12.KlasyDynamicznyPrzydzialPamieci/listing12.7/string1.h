#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class String {
private:
	char *str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String();
	String(const char *s);
	String(const String &st);
	~String();
	int length() const;
	String& operator=(const String&);
	String& operator=(const char *);
	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend istream& operator>>(istream &is, String &st);
	friend ostream& operator<<(ostream &os, const String &st);
	char& operator[](int i);
	const char& operator[](int i) const;
	static int HowMany();
};


#endif // !STRING1_H_
