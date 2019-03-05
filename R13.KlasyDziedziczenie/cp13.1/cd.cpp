#include <cstring>
#include <iostream>
#include "cd.h"

//W sumie w konstruktorze kopiuj¹cym dla klasy Cd nie musimy u¿ywaæ std::strncpy, a nawet i zakañczaæ ³añcucha znakiem null,
//poniewa¿ dane kopiujemy z obiektu który ju¿ istnieje wiêc konstruktory, które stworzy³y ten obiekt maj¹ zapewnione to, ¿e 
//dane bêd¹ poprawne i mieœci³i siê w tablicy char'ów, wiec wystarczy same std::strcpy.

//The strcpy() function copies the string pointed to by src, including the terminating null byte('\0'), to the buffer pointed to by dest.

//---------------CD
Cd::Cd(char* s1, char* s2, int n, double x) {
	//tutaj juz zamykamy w razie czego gdyby s1 by³o zbyt d³ugie to znak null by siê nie skopiowa³ (bo by go nie by³o), wiêc kopiujemy 49 znaków (od 0 do 48) i zamykamy w 49.
	std::strncpy(performers, s1, 49);
	performers[49] = '\0';

	std::strncpy(label, s2, 19);
	label[19] = '\0';

	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d) {
	//o tutaj wystarczy std::strcpy(), ale ju¿ zostawiam tak.
	std::strncpy(performers, d.performers, 49);
	performers[49] = '\0';

	std::strncpy(label, d.label, 19);
	label[19] = '\0';

	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd() {
	const char* def = "Brak";
	std::strncpy(performers, def, std::strlen(def));
	performers[std::strlen(def)] = '\0';

	std::strncpy(label, def, std::strlen(def));
	label[std::strlen(def)] = '\0';
	
	selections = 0;
	playtime = 0;
}
Cd::~Cd(){}
void Cd::Raport() const {
	std::cout << "Performers: " << performers << std::endl;
	std::cout << "label: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "playtime: " << playtime << std::endl;
}
Cd& Cd::operator=(const Cd& d) { 
	if (this == &d)
		return *this;
	std::strncpy(performers, d.performers, 49);
	performers[49] = '\0';

	std::strncpy(label, d.label, 19);
	label[19] = '\0';

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

//-----------------CLASSIC
Classic::Classic(char* s3, char* s1, char* s2, int n, double x) : Cd(s1, s2, n, x) {
	int length = std::strlen(s3);
	mainSong = new char[length+1];
	std::strcpy(mainSong, s3);
	mainSong[length] = '\0';
}
Classic& Classic::operator=(const Classic& d) { 
	if(this==&d)
		return *this;
	Cd::operator=(d);
	delete[] mainSong;
	int length = std::strlen(d.mainSong);
	mainSong = new char[length + 1];
	std::strcpy(mainSong, d.mainSong);
	mainSong[length] = '\0';

	return *this;
}
Classic::Classic() : Cd() {
	const char* def = "Brak";
	mainSong = new char[std::strlen(def) + 1];
	std::strcpy(mainSong, def);
	mainSong[std::strlen(def)] = '\0';
}
Classic::~Classic() {
	delete[] mainSong;
}
void Classic::Raport() const {
	Cd::Raport();
	std::cout << "Main song: " << mainSong << std::endl;
}