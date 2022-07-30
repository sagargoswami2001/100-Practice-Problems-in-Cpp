//Write a Program to Show the Use of Friend Function.
#include<iostream>
using namespace std;

class Distance
{
private:
    int meter;

    //friend function
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};

// Friend  function definition
int addFive(Distance d)
{
    //Accessing Private Members from the Friend Function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout<< "Distance: " << addFive(D) << endl;
    return 0;
}
