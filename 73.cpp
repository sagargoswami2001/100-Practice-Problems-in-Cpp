#include<iostream>
using namespace std;
int main()
{
    int divisor, dividend;
    float quotient, remainder;

    cout<< "Enter Dividend: ";
    cin>> dividend;

    cout<< "Enter Divisor: ";
    cin>> divisor;

    // if(dividend/divisor or dividend%divisor)
    if(divisor != 0)
    {
        quotient = dividend/divisor;
        remainder = dividend%divisor;

        cout<< "\nQuotient = " << quotient << endl;
        cout<< "Remainder = " << remainder << endl;
    }
    else
    {
        cout<< "Division Not Possible.";
    }
    return 0;
}
