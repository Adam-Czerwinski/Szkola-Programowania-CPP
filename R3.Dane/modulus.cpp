#include <iostream>

using namespace std;

int main()
{

    const int Lbs_per_stn = 14;
    int lbs;

    cout<<"Podaj swoja wage w funtach: ";
    cin>>lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout<<lbs<<" funtow to "<<stone<<" kamieni, "<<pounds<<" funt(ow."<<endl;
    return 0;
}
