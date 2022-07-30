//objects Argument.
#include<iostream>
using namespace std;

class Sample
 {
  public:
  int a;

   Sample() { a=0; } // Default Constructor
   Sample(int x) // Parametrized Constructor
    {
     a=x;
    }
   void add(Sample s1,Sample s2)     // taking objects as argument
    {
     a=s1.a+s2.a;                         // obj3.a=obj1.a+obj2.a;
    }
 };

 int main()
  {
   Sample obj1(10);    // a=10
   Sample obj2(20);   // a=20
   Sample obj3;      // a=0

   obj3.add(obj1,obj2);

   //obj3.a=obj1.a+obj2.a; // obj3.a=10+20;

   cout<<"obj1.a:: "<<obj1.a;  //10
   cout<<"\nobj2.a:: "<<obj2.a; // 20
   cout<<"\nobj3.a:: "<<obj3.a; //30*/
   return 0;
  }
