#include <iostream>

using namespace std;

int main()
{



    const double litrNaGalon{0.264172052};
    const double stoKmNaMile{62.1371192};

    cout<<"Podaj zuzycie benzyny [l/km]: ";
    double zuzycieBenzyny{};
    cin>>zuzycieBenzyny;

    cout<<zuzycieBenzyny<<"[l/100km] to inaczej "<<1.0/((zuzycieBenzyny*litrNaGalon)/stoKmNaMile)<<" mili na galon."<<endl;



    return 0;
}
