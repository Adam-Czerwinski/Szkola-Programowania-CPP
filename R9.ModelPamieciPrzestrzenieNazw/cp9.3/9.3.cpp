#include <iostream>
#include <new>
#include <cstring>

struct chaff {
	char dross[20];
	int slag;
};

static char bufor[sizeof(chaff)*2];

int main() {

	using std::cout;
	using std::endl;
	using std::cin;

	chaff *ptr = new (bufor) chaff[2];

	char tempDross[20];
	int tempSlag;



	for (int i = 0; i < 2; i++)
	{
		cout << "Podaj dross: ";
		cin.getline(tempDross, 20);

		cout << "Podaj slag: ";
		(cin >> tempSlag).get();
		strcpy(ptr[i].dross, tempDross);
		ptr[i].slag = tempSlag;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << ": " << (*(ptr+i)).dross << ", " << ptr[i].slag << endl;
	}



	//-----------------------DRUGI WARIANT-----------------------------------------
	chaff *ptr2 = new chaff[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Podaj dross: ";
		cin.getline(tempDross, 20);

		cout << "Podaj slag: ";
		(cin >> tempSlag).get();
		strcpy(ptr2[i].dross, tempDross);
		ptr2[i].slag = tempSlag;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << ": " << (*(ptr2 + i)).dross << ", " << ptr2[i].slag << endl;
	}

	delete[]ptr2;

	return 0;
}