//Write a Program in C++ to Compute the Average Marks of 50 Students in the Class. Take Necessary Assumptions.

#include<iostream>
using namespace std;

int main()
{
    struct Student
    {
        int sagar;
        int sub[10];
    };
    struct Student st[50];
    int i,j,n,m,total;
    float avg;

    cout<< "Enter the Number of Students in the Class: ";
    cin>> n;
    cout<< "\nEnter the Number of Subjects each Student has Taken: ";
    cin>> m;
    for(i=0;i<n;i++)
    {
        total = 0;
        cout<< "\nEnter the Roll No. of" << i+1 << "Student: ";
        cin>> st[i].sagar;
        cout<< "\nEnter the Marks: ";
        for(j=0;j<m;j++)
        {
            cout<< "\nEnter the Marks of" << j+1 << "Subject: ";
            cin>> st[i].sub[j];
            total = total + st[i].sub[j];
        }
        avg = (float) total/m;
        cout<< "\nAverage Marks of" << i+1 << "Student: " <<avg << endl;
    }
}
