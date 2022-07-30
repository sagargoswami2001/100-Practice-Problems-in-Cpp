//Call By Value.
#include <iostream>
using namespace std;
int addition(int x, int y);

int main()
{
    int x,y,s;
    cout<<"Enter Value of X and Y:\n";
    cin>> x >> y;

    s = addition(x, y);
    cout<<"\nSum of X and Y: "<< s;

    return 0;
}

int addition(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
