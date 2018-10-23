#include <iostream>
#include <climits>

using namespace std;

int main()
{

    short s_int;
    int i_int;
    long l_int;
    long long ll_int;

    cout<<"Bajt ma: "<<CHAR_BIT<<" bitow"<<endl;
    cout<<endl;

    cout<<"short ma: "<<sizeof (short)<<" bajtow"<<endl;
    cout<<"int ma: "<<sizeof (i_int)<<" bajtow"<<endl;
    cout<<"long ma: "<<sizeof l_int<<" bajtow"<<endl;
    cout<<"long long ma: "<<sizeof ll_int<<" bajtow"<<endl;
    cout<<endl;

    //sizeof zwraca wielkosc typu lub zmiennej w bajtach.
    cout<<"Max wart. short: "<<SHRT_MAX<<"\t\t\t Min wart. short: "<<SHRT_MIN<<endl;
    cout<<"Max wart. int: "<<INT_MAX<<"\t\t Min wart. int: "<<INT_MIN<<endl;
    cout<<"Max wart. llong: "<<LLONG_MAX<<"\t Min wart. llong: "<<LLONG_MIN<<endl;
    cout<<"Max wart. long: "<<LONG_MAX<<"\t\t Min wart. long: "<<LONG_MIN<<endl;

    return 0;
}
