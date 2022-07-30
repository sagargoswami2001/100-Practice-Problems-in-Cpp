//Functions.
#include<iostream>
using namespace std;
void add(int,int); // function prototype or declaration
int sub(int,int);
int main()
 {
   int a,b;
   cout<<"Enter two Integer Variables:\n";
   cin>>a>>b;
   add(a,b);// function calling
   //int result=sub(b,a);
   cout<<"The Subtraction is "<<sub(b,a);
   add(20,40);
   return 0;
 }

 void add(int x, int y) // function definition
 {
   cout<<"\nThe Addition is "<<x+y<<"\n";
 }
 int sub(int x1, int y1) // function definition
 {
   return(x1-y1);
 }
