#include <iostream>
#include <limits>
using namespace std;

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);	//przez wartoœæ

void display2(const student *ps);

void display3(const student pa[], int n);

int main()
{
	cout << "Podaj wielkoœæ grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
	{
		continue;
	}
	
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);

	delete[]ptr_stu;

	cout << "\nGotowe!";
}

int getinfo(student *pa, int n) {
	char tempFullName[SLEN];
	char tempHobby[SLEN];
	int tempOOPlevel;
	int ile = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "STUDENT " << i + 1 << endl;
		cout << "Podaj nazwisko studenta: ";
		cin.get(tempFullName, SLEN);
		if (!strcmp(tempFullName, ""))		//zwraca 0 jezeli jest takie same, jezeli nie jest takie same to zwraca rozne od 0
		{
			break;
		}
		while (cin.get() != '\n')
		{
			continue;
		}
		strcpy((pa + i)->fullname,tempFullName);
		
		cout << "Podaj hobby studenta: ";
		cin.getline(tempHobby, SLEN);
		while(!strcmp(tempHobby, ""))
		{
			cout << "Podaj hobby studenta: ";
			cin.getline(tempHobby, SLEN);
		}
		strcpy((pa + i)->hobby, tempHobby);

		cout << "Podaj ooplevel: ";
		cin >> tempOOPlevel;
		while(!cin.good())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Podaj ooplevel: ";
			cin >> tempOOPlevel;
		}
		cin.get();		//po to aby pozbyc sie entera
		(pa + i)->ooplevel = tempOOPlevel;

		ile++;
	}

	return ile;
}

void display1(student st) {
	
	cout <<"Fullname: "<< st.fullname << endl;
	cout <<"Hobby: "<< st.hobby << endl;
	cout <<"Ooplevel: "<< st.ooplevel << endl;
}

void display2(const student *ps) {
	cout << "Fullname: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << "Fullname: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Ooplevel: " << pa[i].ooplevel << endl;
	}
}