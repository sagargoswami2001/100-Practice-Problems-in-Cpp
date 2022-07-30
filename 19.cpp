//Value Swap Using Call By Pointer.
#include<iostream>
using namespace std;

void swap(int*,int*);
int main()
 {
   int a=10;
   int b=20;
   cout<<"Before Swap: ";
   cout<<"\na:: "<<a;
   cout<<"\nb:: "<<b;
   swap(&a,&b);
   cout<<"\nAfter Swap: ";
   cout<<"\na:: "<<a;
   cout<<"\nb:: "<<b;
   return 0;
 }

 void swap(int* x,int* y)
  {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  }
