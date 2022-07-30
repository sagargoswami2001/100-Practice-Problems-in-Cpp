//Exception.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    cout<< "Enter Two Number:\n";
    cin>> a>>b;

    x = a-b;

    try
    {
        if(x==0)
            throw x;
        else
        {
            c=a/x;
            cout<< "X::" <<c;
        }
    }
    catch(int z)
    {
        cout<< "Exception Caught :: Can't Divide by Zero";
    }
    return 0;
}
