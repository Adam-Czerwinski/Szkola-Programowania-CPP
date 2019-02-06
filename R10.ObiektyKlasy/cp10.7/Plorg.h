#ifndef PLORG_H_
#define PLORG_H_

class Plorg {
private:
	enum constants{
		Length = 20
	};
	char name[constants::Length];
	int CI;
public:
	Plorg(const char* name = "Plorga");
	void changeCI(int CI);
	void showReport() const;
};

#endif // !PLORG_H_
