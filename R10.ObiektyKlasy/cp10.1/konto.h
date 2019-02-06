#ifndef KONTO_H_
#define KONTO_H_

class KontoBankowe {
private:
	enum {
		MAX = 26
	};
	char nazwisko[MAX];
	char nr_konta[MAX];
	double saldo;
public:
	KontoBankowe(const char *nazwisko, const char* nr_konta, double saldo = 0.0);
	double getSaldo() const {return saldo;}				// Spos�b pierwszy metody inline
	const char* getNazwisko() const;					// Spos�b drugi metody inline
	const char* getNrKonta() const;						// Zwyk�e u�ycie metody funkcji
	void show() const;
	void buy(double kwota);
	void deponuj(double kwota);
};

#endif // !KONTO_H_
