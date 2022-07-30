//Write a Program to Compute Square of 1 to 10 Numbers.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,square;
    for(a=1;a<=10;a++)
    {
        cout<< setw(1)<<a;
        square=a*a;
        cout<< setw(10)<<square << endl;
    }
    system("pause");
}
