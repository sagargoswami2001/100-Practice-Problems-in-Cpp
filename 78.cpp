#include<iostream>
using namespace std;
int main()
{
    char a;

    cout<< "Enter the Alphabet: ";
    cin>> a;

    if(a>=65 && a<=90)
    {
        cout<< "This is Capital";
    }
    else if(a>=97 && a<=122)
    {
        cout<< "This is Small";
    }
    else if(a>=48 && a<=57)
    {
        cout<< "This is Numeric";
    }
    else
    {
        cout<< "Sagar";
    }
    return 0;
}
