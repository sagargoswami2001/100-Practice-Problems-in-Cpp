//Generic Programming in C++.

#include<iostream>
using namespace std;

template <typename myType> void display(myType x)
{
    cout<< "You Have Passes "<< x << endl;
}

int main()
{
    display(10);
    display(27.345);
    display("Sagar is a Good Boy");
    return 0;
}
