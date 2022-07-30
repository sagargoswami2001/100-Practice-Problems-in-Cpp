// C++ Program to Convert Fahrenheit Scale to Celsius Scale.
#include<iostream>
using namespace std;

// Function to Convert Degree Fahrenheit to Degree Celsius
float fahrenheit_to_celsius(float f)
{
    return ((f - 32.0) * 5.0/9.0);
}

int main()
{
    float f = 40;

    //Passing Parameter to Function
    cout<< "Temperature in Degree Celsius: " << fahrenheit_to_celsius(f);
    return 0;
}
