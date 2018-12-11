#include <iostream>

using namespace std;
//zwraca pierwsze n cyfr podanej liczby
unsigned long left(unsigned long num, int n = 1);
char * left(const char *str, int n=1);

int main() {

	char *trip = "Hawaii!!";
	unsigned long n = 12345678;
	int i;
	char *temp;
	for (i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[]temp;
	}

	return 0;
}

unsigned long left(unsigned long num, int ct)
{
	unsigned int digits = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)
	{
		return 0;
	}

	//n/=10 sprawia ze pozbywamy sie cyfry z prawej strony.
	while (n /= 10)
	{
		digits++;
	}

	if (digits > ct)
	{
		ct = digits - ct;		//ile cyfr jest do pokazania
		while (ct--)
		{
			num /= 10;
		}
		return num;			//zwraca ct skrajnych lewych cyfr
	}
	else return num;
	


}
char * left(const char *str, int n) {
	if (n < 0)
	{
		n = 0;
	}

	char *p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++) {
		p[i] = str[i];
	}
	while (i <= n) {
		p[i++] = '\0';
	}

	return p;
}