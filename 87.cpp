#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    lbl:
    cout<< "Sagar";
    i++;

    if(i<5)
    {
        goto lbl;
    }
    return 0;
}