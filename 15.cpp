//C++ Program to add two distances in inch feet using structure.
#include<iostream>
using namespace std;

//Structure Storing Distance in inch and feet
struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance d1,d2,d3;

    cout<< "Enter First Distance as [feet inch]\n";
    cin>> d1.feet >> d1.inch;

    cout<< "Enter Second Distance as [feet inch]\n";
    cin>> d2.feet >> d2.inch;

    //Adding d1 and d2 and storing the sum in d3.
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    //NOTE : 12 inch = 1 feet
    //If feet > 12 then feet = feet%12 and inch++
    if(d3.inch > 12)
    {
        d3.feet++;
        d3.inch = d3.inch - 12;
    }

    cout<< "Total Distance: " << d3.feet << " feet, " << d3.inch << " inches";
    return 0;
}
