//C++ Program of Print Table.
#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("Enter the Number: ");
    cin>> n;

    for(int i = 1; i < 11; ++i)
    {
        cout<< "\n" << n << " * " << i << " = " << n * i;
    }
    return 0;
}
