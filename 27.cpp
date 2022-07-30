//Class 1 Example.
#include<iostream>
using namespace std;
/* Class is a collection of variables and functions*/
class First
 {
  public:
  int a;
  float b;
 }; // termination of class

 int main()
  {
   First var1,var2; //abstract datatype classname objectname

   cout<<"Var1.a:: "<<var1.a;    // objectname.variable or function name
   cout<<"\nVar1.b:: "<<var1.b;

   cout<<"\nVar2.a:: "<<var2.a;    // objectname.variable or function name
   cout<<"\nVar2.b:: "<<var2.b;

   return 0;
  }
