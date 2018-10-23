#include <iostream>

using namespace std;

int main()
{
    const int dzien = 60*60*24;
    const int godzina = 60*60;
    const int minuta = 60;
    cout<<"Podaj liczbe sekund: ";
    long long sekund{};
    cin>>sekund;

    int dni = sekund/dzien;
    int godziny = (sekund % dzien)/godzina;
    int minuty = (sekund % godzina)/minuta;
    int sekundy = sekund % 60;
    cout<<sekund<<" sekund = "<<dni<<" dni, "<<godziny<<" godzin, "<<minuty<<" minut, "<<sekundy<<" sekund."<<endl;



    return 0;
}
