//Program to print the sum of all even numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 2;
    int sum = 0;

    cout<< "Enter the Number: ";
    cin>> n;

    while(i<n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout<< "Value of Sum is: " << sum << endl;
}
