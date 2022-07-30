//Print the Elements in Array.
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++) //Input for Array
    {
        for(j=0;j<3;j++)
        {
            cout<< "Enter the Elements: ";
            cin>> arr[i][j];
        }
    }
    for(i=0;i<3;i++) //Printing the Array
    {
        cout<< "\n";
        for(j=0;j<3;j++)
        {
            cout<< arr[i][j]<<"\t"; //Return size in Bytes
        }
    }
    return 0;
}
