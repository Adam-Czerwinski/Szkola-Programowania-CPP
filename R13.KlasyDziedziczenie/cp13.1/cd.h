#ifndef CD_H_
#define CD_H_

class Cd {
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char* s1, char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Raport() const;
	Cd& operator=(const Cd& d);
};

class Classic : public Cd {
private:
	char* mainSong;
public:
	Classic();
	Classic(char* s1, char* s2, char* s3, int n, double x);
	Classic& operator=(const Classic& d);
	virtual ~Classic();
	virtual void Raport() const;

};

#endif // !CD_H_