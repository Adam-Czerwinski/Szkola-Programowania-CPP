#include <cstring>
#include <iostream>
#include "Plorg.h"

static int times = 0;

Plorg::Plorg(const char* name) {
	
	strncpy(this->name, name, constants::Length);
	this->name[constants::Length - 1] = '\0';
	CI = 50+times++;
}
void Plorg::changeCI(int CI) {
	this->CI = CI;
}
void Plorg::showReport() const {
	std::cout << "Name: " << name << ", "
		<< "Contentment Index " << CI << std::endl;
}