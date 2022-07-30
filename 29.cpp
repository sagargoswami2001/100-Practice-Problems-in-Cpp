//Class 3 Example.
#include<iostream>
using namespace std;
/* Class is a collection of variables and functions*/
class Arithmetic
 {
   public:
   void add(int,int);           // addition
   void sub(int,int);                  // subtraction

   void mul(int x,int y)         // multiplication
    {
     cout<<"\n The multiplication is "<<x*y;
    }
   void div(int x,int y)       // division
    {
     cout<<"\n The division is "<<x/y;
    }
};// termination of class
inline void Arithmetic::add(int x,int y)
 {
cout<<"\n The addition is "<<x+y;
 }
inline void Arithmetic::sub(int x,int y)
 {
 cout<<"\n The subtraction is "<<x-y;
 }

 int main()
  {
   Arithmetic A1; //abstract datatype classname objectname
   A1.add(10,20);  //cout<<"\n The addition is "<<x+y;
   A1.sub(10,20);  //cout<<"\n The subtraction is "<<x-y;
   A1.mul(10,20);  //cout<<"\n The multiplication is "<<x*y;   inline
   A1.div(20,20);  //cout<<"\n The division is "<<x/y;          inline

   return 0;
  }
