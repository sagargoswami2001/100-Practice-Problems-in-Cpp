//Swap two values using two variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "Enter the Value of A & B: " << endl;
    cin>> a >> b;

    cout<< "\nBefore Swap:\n" << "A: " << a << "\nB: " << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<< "After Swap:\n" << "A: " << a << "\nB: " << b << endl;
}
