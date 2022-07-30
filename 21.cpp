//Value Swap Using Call By Value.
#include<iostream>
using namespace std;

void swap(int,int);
int main()
 {
    int a=10;
    int b=20;
    cout<<"Before Swap Function Calling: ";
    cout<<"\na:: "<<a;      // it will print 10
    cout<<"\nb:: "<<b;     // it will print 20
    swap(a,b); // function calling
    cout<<"\nAfter Swap Function Calling: ";
    cout<<"\na:: "<<a;      // it will print 10
    cout<<"\nb:: "<<b;      // it will print 20
    return 0;
 }

 void swap(int x,int y)   // x=a=10 & y=b=20  values copy
  {
    int temp;
    temp=x; // temp=10
    x=y; // x=20
    y=temp; // y=10
    cout<<"\nx:: "<<x;      // it will print 20
    cout<<"\ny:: "<<y;      // it will print 10
  }  // function end
