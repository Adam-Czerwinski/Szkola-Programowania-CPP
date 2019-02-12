#include <cstring>
#include <cctype>
#include "string1.h"

using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany() {
	return num_strings;
}

String::String() {
	len = 0;
	str = new char[1];	//lub str = nullptr;
	str[0] = '\0';
	num_strings++;
}

String::String(const char*s) {
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::~String() {
	--num_strings;
	delete[]str;
}

String::String(const String &st) {
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String& String::operator=(const String &s) {
	if (this == &s)
		return *this;
	delete[]str;
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
	return *this;
}

String& String::operator=(const char *s) {
	delete[]str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& String::operator[](int i) {
	return str[i];
}

const char& String::operator[](int i) const {
	return str[i];
}

istream& operator>>(istream &is, String &st) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

ostream& operator<<(ostream &os, const String &st) {
	os << st.str;
	return os;
}

bool operator<(const String &st1, const String &st2) {
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2) {
	return st2 < st1;
}
bool operator==(const String &st1, const String &st2) {
	return (std::strcmp(st1.str, st2.str) == 0);
}

int String::howManyChars(const char c) {
	int amount = 0;
	int length = std::strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (*(str + i) == c)
			amount++;
	}
	return amount;
}

const String operator+(const String &st1, const String &st2) {
	int len = std::strlen(st1.str) + std::strlen(st2.str);
	char *temp = new char[len + 1];
	std::strcpy(temp, st1.str);
	std::strcat(temp, st2.str);
	String tempString(temp);

	delete[]temp;
	return tempString;
}

bool String::stringlow() {
	if (str == nullptr)
		return false;
	int len = std::strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (isupper(*(str + i)))
			*(str + i) = tolower(*(str + i));
	}
	return true;
}

bool String::stringup() {
	if (str == nullptr)
		return false;
	int len = std::strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (islower(*(str + i)))
			*(str + i) = toupper(*(str + i));
	}
	return true;
}