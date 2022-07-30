//Multiplication of Two Matrix.
#include<iostream>
using namespace std;
int main()
{
    int a1[2][2];
    int a2[2][2];
    int mul[2][2];
    int sum=0,i,j,k;

    cout<< "Enter First Array:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>> a1[i][j];
        }
    }

    cout<< "\nEnter Second Array:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>> a2[i][j];
        }
    }

    cout<< "\n\nMultiplication of Two Array:-\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
                sum = sum + a1[i][j] * a2[i][j];
            }
            mul[i][j] = sum;
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<< mul[i][j]<< "\t";
        }
        cout<< "\n";
    }
    return 0;
}
