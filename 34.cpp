//Factorial Program using Loop in C++
#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,num;

    cout<< "Enter Any Number: ";
    cin>> num;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }

    cout<< "Factorial of " << num << " is: " << fact << endl;
    return 0;
}
