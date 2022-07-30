#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a, b;
    cout << "Enter Value of A and B:\n";
    cin >>a>>b;
    cout << "\nBefore Swap\n";
    cout << "A = " << a << " B = " << b << "\n";

    swap(&a, &b);

    cout << "After Swap with Pass by Pointer\n";
    cout << "A = " << a << " B = " << b << "\n";
}
