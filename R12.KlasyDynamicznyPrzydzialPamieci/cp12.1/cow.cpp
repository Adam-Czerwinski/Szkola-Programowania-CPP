#include <cstring>
#include <iostream>
#include "cow.h"

Cow::Cow() {
	const char* def = "Brak";
	int len = std::strlen(def);
	strcpy(name, def);
	hobby = nullptr;
	weight = 0;
}
Cow::Cow(const char* nm, const char* ho, double wt) {
	int len = strlen(nm);
	if (len > 0)
	{
		std::strncpy(name, nm, 19); //od 0 do 18
		name[19] = '\0';
	}
	len = strlen(ho);
	if (len > 0)
	{
		hobby = new char[len + 1];
		std::strcpy(hobby, ho);
	}
	else
		hobby = nullptr;
	if (weight > 0.0)
		weight = wt;
	else
		weight = 0.0;
}
Cow::Cow(const Cow& c) {
	std::strcpy(name, c.name);
	if (c.hobby != nullptr)
	{
		int len = std::strlen(c.hobby);
		hobby = new char[len + 1];
		std::strcpy(hobby, c.hobby);
	}
	else
		hobby = nullptr;
	weight = c.weight;
}
Cow& Cow::operator=(const Cow& c) {
	if (this == &c)
		return *this;

	std::strcpy(name, c.name);
	if (c.hobby!=nullptr)
	{
		int len = std::strlen(c.hobby);
		hobby = new char[len + 1];
		std::strcpy(hobby, c.hobby);
	}
	else
		hobby = nullptr;
	weight = c.weight;

	return *this;
}
Cow::~Cow() {
	delete[]hobby;
}
void Cow::ShowCow() const {
	using std::cout;
	cout << "Name: " << name
		<<"\nHobby: "<<(hobby == nullptr ? "nullptr" : hobby)
		<< "\nWeight: " << weight
		<< '\n';
}