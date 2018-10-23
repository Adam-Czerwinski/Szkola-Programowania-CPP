#include <iostream>

using namespace std;

int main()
{
    /*
    cout<<"Ile mil przejechano: ";
    unsigned int ileMil{};
    cin>>ileMil;
    cout<<"Ile galonow benzyny zuzyto: ";
    unsigned int ileBenzZuzytoGalony{};
    cin>>ileBenzZuzytoGalony;
    cout<<"Ile galonow benzyny pozostalo: ";
    unsigned int ileBenzPozostaloGalony{};
    cin>>ileBenzPozostaloGalony;
    */

    cout<<"Ile km przejechano: ";
    unsigned int ileKm{};
    cin>>ileKm;
    cout<<"Ile litrow benzyty zuzyto: ";
    unsigned int ileBenzZuzytoLitry{};
    cin>>ileBenzZuzytoLitry;
    cout<<"Ile litrow benzyny pozostalo: ";
    unsigned int ileBenzPozostaloLitry{};
    cin>>ileBenzPozostaloLitry;

    cout<<"Zuzycie : "<<static_cast<double>(ileBenzZuzytoLitry)/ileKm<<"[l/km]"<<endl;

    return 0;
}
