#include <iostream>

using namespace std;

int main()
{

    const int stopaNaCale{12};
    const float wzrostBMI{0.0254};
    const float kiloNaFunty{2.2};

    cout<<"Podaj wzrost w stopach i calach:"<<endl;

    int wzrost_stopy{};
    cout<<"Podaj stopy: ";
    cin>>wzrost_stopy;

    float wzrost_cale{};
    cout<<"Podaj cale: ";
    cin>>wzrost_cale;

    float waga_w_funtach{};
    cout<<"Podaj wage w funtach: ";
    cin>>waga_w_funtach;

    float cale{};
    cale=wzrost_stopy*stopaNaCale + wzrost_cale;

    float wzrostM{};
    wzrostM=cale*wzrostBMI;

    float waga_w_kg{};
    waga_w_kg=waga_w_funtach/kiloNaFunty;

    float BMI{};
    BMI=waga_w_kg/(wzrostM*wzrostM);

    cout<<"Twoje BMI wynosi "<<BMI<<endl;

    return 0;
}
