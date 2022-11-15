#include <iostream>
using namespace std;

int main() {
    float a=0, b=0, x=0, y=0;

    cout<<"metti i valori di a, b, x e y"<<endl;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;

    if (x < 0 && y > 0)
    { cout<<"z= "<< ((a*x) - (b*y))<<endl;}

    else if ((x >= 0) && (y <= 0))
    { cout<<"z= "<< ((a*x*x) - (b*y))<<endl;}

    else { cout<<"z= "<< ((a*x) + (b*y*y));}



    return 0;
}
