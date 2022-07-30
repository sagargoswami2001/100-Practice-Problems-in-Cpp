//Factorial Program using Recursion in C++
#include<iostream>
using namespace std;
int main()
{
    int factorial(int);
    int fact,value;

    cout<< "Enter Any Number: ";
    cin>> value;

    fact=factorial(value);

    cout<< "Factorial of a Number is: " << fact << endl;
    return 0;
}

int factorial(int n)
{
    if(n<0)
        return(-1); //Wrong Value
    if(n==0)
        return(1); //Terminating Condition
    else
    {
        return(n*factorial(n-1));
    }
}
