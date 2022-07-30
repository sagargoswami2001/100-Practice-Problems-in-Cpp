//Write a Program that does Dynamic Memory Allocation and then free the Memory Space for Any Variable.
#include<iostream>
using namespace std;

int main()
{
    int n, i, *ptr, sum = 0;
    cout<< "Enter Number of Elements: ";
    cin>> n;

    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        cout<< "Error! Memory Not Allocated.";
        exit(0);
    }

    cout<< "\nEnter Elements:\n";
    for(i = 0; i < n; ++i)
    {
        cin>> ptr [i];
        sum += *(ptr + i);
    }

    cout<< "\nSum: " << sum;
    free(ptr);
    return 0;
}
