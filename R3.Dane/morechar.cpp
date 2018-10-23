#include <iostream>


using namespace std;

int main()
{



    char ch='M';
    int i = ch;
    cout<<"Kod ASCII znaku "<<ch<<" to "<<i<<endl;

    cout<<"Dodajemy do kodu znaku jedynke: "<<endl;
    ch=ch+1;
    i=ch;
    cout<<"Kod ASCII znaku "<<ch<<" to "<<i<<endl;

    cout<<"Wypisanie char ch za pomoca cout.put(ch): ";
    cout.put(ch);
    cout.put('!');

    cout<<endl<<"Gotowe!"<<endl;



    return 0;
}
