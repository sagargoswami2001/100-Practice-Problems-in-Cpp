#include<iostream>
using namespace std;

typedef struct Student
 {
   int rollno;
   char name[10]; // Static Allocation
 }

 Stud;
 //typedef struct Student Stud;
 Stud S1;
 int main()
  {
    S1.rollno=100;
    cout<<"Enter Name: ";
    cin>>S1.name;
    cout<<"\nRoll No (S1):: "<<S1.rollno;
    cout<<"\nName (S1):: "<<S1.name;
    cout<<"\nSize of S1:: "<<sizeof(S1);
    return 0;
  }
