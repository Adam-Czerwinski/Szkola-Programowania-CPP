#include <iostream>
#include <climits>

#define ZERO 0

using namespace std;

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout<<"Sam ma: "<<sam<<" dolarow, a Sue ma: "<<sue<<" dolarow"<<endl
        <<"Do obu kont dodaj 1$."<<endl<<"Teraz ";
    sam=sam+1;
    sue=sue+1;
    cout<<"Sam ma: "<<sam<<" dolarow, a Sue ma: "<<sue<<" dolarow"<<endl;
    cout<<"Biedny Sam!"<<endl;

    sam=ZERO;
    sue=ZERO;
    cout<<"Sam ma: "<<sam<<" dolarow, a Sue ma: "<<sue<<" dolarow"<<endl;
    cout<<"Zabierzmy z obu kont 1$."<<endl<<"Teraz";
    sam=sam-1;
    sue=sue-1;
    cout<<"Sam ma: "<<sam<<" dolarow, a Sue ma: "<<sue<<" dolarow. "<<endl
        <<"Szczesciara Sue!";

    return 0;
}
