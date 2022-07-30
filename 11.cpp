//Volume of Cylinder.
#include<iostream>
using namespace std;
int main()
{
    float r,h;
    cout<< "Enter Radius & Height of Cylinder:\n";
    cin>> r >> h;

    float v = 3.14 * r * r * h;

    cout<< "\nVolume of Cylinder: " << v;
}
