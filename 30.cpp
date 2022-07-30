//C++ Program to find area of Circle (Use Constant).
#include<iostream>
using namespace std;
int main()
{
    const float pi=3.14;
    int radius;
    float area;

    cout << "Enter Radius of Circle: ";
    cin >> radius;

    //Area of Circle = Pi * Radius * Radius
    area = pi*radius*radius;

    cout << "Area of Circle: " << area;
    return 0;
}
