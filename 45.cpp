#include<iostream>
using namespace std;

int main()
{
    int n;
    const int limit = 1000;
    int sum = 0;

    for(n=0;n<limit;n++)
    {
        if(n%3==0 || n%5==0)
        {
            sum=sum+n;
            cout<< n <<"\n";
        }
    }
    cout<<sum;

    return 0;
}
