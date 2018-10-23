#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout<<"Podaj liczbe ludnosci swiata: ";
    long long int liczbaLudnosci{};
    cin>>liczbaLudnosci;

    cout<<"Podaj liczbe ludnosci Polski: ";
    int liczbaLudnosciPL{};
    cin>>liczbaLudnosciPL;

    double procent = static_cast<double>(liczbaLudnosciPL)/liczbaLudnosci*100.0;

    cout<<"Populacja Polski stanowi "<<setprecision(5)<<procent<<"% populacji swiata."<<endl;

    return 0;
}
