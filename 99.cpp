// C Program to find G.C.D Using Recursion:
// GCD of Two Numbers Using Recursion.
#include<iostream>
using namespace std;

int hcf(int n1, int n2);
int main()
{
    int n1, n2;
    cout<< "Enter Two Positive Integers: " << endl;
    cin>> n1 >> n2;
    // printf("Enter Two Positive Integers:\n");
    // scanf("%d %d", &n1, &n2);

    cout<< "G.C.D of " << n1 << " & " << n2 << " is: " << hcf(n1, n2); // G.C.D That is Greatest Common Divisor
    // printf("G.C.D of %d & %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2)
{
    if(n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}