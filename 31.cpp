//C++ Program to Calculate Circumference of a Circle.
#include<iostream>
using namespace std;
#define PI 3.141
int main()
{
    float radius, circumference;

    cout << "Enter Radius of Circle: ";
    cin >> radius;

    //Circumference of Circle = 2*PI*Radius
    circumference = 2*PI*radius;

    cout << "Circumference of Circle: " << circumference;
    return 0;
}
