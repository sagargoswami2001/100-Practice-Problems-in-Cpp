//Constructor.
#include<iostream>
using namespace std;

class integer
{
 int m,n;
 public:
 /* integer(void) // special function  or default constructor
   {
    m=0;
    n=0;
    cout<<"Construtor called\n";
   } */
   integer()
   {
    cout<<"Default Construtor called\n";
   }  // defautl constructor used to remove error

   integer(int x,int y) // special function  or parametrized constructor
   {
    m=x;
    n=y;
    cout<<"Parametrized Construtor called\n";
  //  return m+n; constructor donnot return any value
   }
   void display(void)
    {
     cout<<"\n The value of m is :: "<<m;
     cout<<"\n The value of n is :: "<<n;
    }
};

int main()
 {
  integer obj1(10,20);// implicit call parametrized
  integer obj2;    // it will search default constructor
  obj2=integer(100,200);// explicit call           parametrized
  integer obj3=integer(400,500); // parametrized
  integer obj4=obj3;   // copy constructor no calling of default and parametrized
  integer obj5(obj1);

  cout<<"\n*****Print object1 values****";
  obj1.display();
  cout<<"\n*****Print object2 values****";
  obj2.display();
  cout<<"\n*****Print object3 values****";
  obj3.display();
  cout<<"\n*****Print object4 values****";
  obj4.display();
  cout<<"\n*****Print object5 values****";
  obj5.display();
//  obj.integer(); Error in this calling of constructor
//  integer::integer();
  return 0;
 }
