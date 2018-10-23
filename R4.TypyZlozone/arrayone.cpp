
#include <iostream>

using namespace std;

int main()
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] {20, 30, 5}; //Tworzenie + inicjalizacja tablicy
    //Jesli kompilator nie pozwala zainicjalizowac takiej tablicy to dodajemy slowko static przed typem tablicy.

    cout<<"Razem ignamow = ";
    cout<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"Paczka  zawierajaca "<<yams[1]<<" ignamow kosztuje po ";
    cout<<yamcosts[1]<<" groszy za bulwe.\n";
    int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
    cout<<"Laczy koszt ignamu to "<<total<<" groszy.\n";

    cout<<"\nRozmiar tablicy yams = "<<sizeof(yams)<<" bajtow."<<endl;
    cout<<"Rozmiar jednego elementu = "<<sizeof yams[0]<<" bajtow."<<endl;

    return 0;
}
