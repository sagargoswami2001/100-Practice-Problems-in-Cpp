// What is the Output of the following code...?
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,1,15,20,25};
    int i,j,k;
    i = ++arr[1];
    j = arr[1]++;
    k = arr[i++];

    cout<< i << " " << j << " " << k;
    return 0;
}