//Program to Swap two Numbers using third Variable.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,t;

    cout<< "Enter Two Numbers:\n";
    cin>> n1 >> n2;

    cout<< "\nn1 = " << n1 << ", n2 = " << n2;
    t = n1;
    n1 = n2;
    n2 = t;
    cout<< "\nn1 = " << n1 << ", n2 = " << n2;
}
