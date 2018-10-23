#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float milion = 1.0e6;

    cout<<"tub = "<<tub;
    cout<<", a milion razy tub = "<<milion*tub;
    cout<<",\na dziesiec milionow razy tub = ";
    cout<<10*milion*tub<<endl;

    cout<<"mint = "<<mint<<", a milion razy mint = ";
    cout<<milion * mint<<endl;

    return 0;
}
