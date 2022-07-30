//WAP Decimal to Binary & Octal.
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    cout<< "Enter the Number to Convert: ";
    cin>> n;
    for(i=0;n>0;i++)
    {
        //a[i]=n%2;
        //n= n/2;
        a[i]=n%8;
        n= n/8;
    }
    cout<< "Binary of the Given Number: ";
    for(i=i-1;i>=0;i--)
    {
        cout<< a[i];
    }
}
