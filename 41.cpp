//Single Inheritance.
#include<iostream>
using namespace std;

class parent
 {
  private:
   void fun1()
    {
     cout<<"This is fun1 function";
    }
  public:
   void fun2()
    {
     cout<<"This is fun2 function";
    }
 };
 /* class childclassname : access_specifier parentclassname*/
 class child1 : private parent // syntax of inheritance
  {
      // fun1 will not be inherited
      // fun2 will be inherited in private section of child1 class
  };
 class child2 : public parent
  {
    public:
     void fun3()
      {
       cout<<"\nThis is fun3 function";
      }
      // fun1 will not be inherited
      // fun2 will be inherited in public section of child1 class
  };


  int main()
   {
//    parent p;
    //  p.fun1();
    //  p.fun2();

  /*  child1 c1;
    c1.fun1();
    c1.fun2();*/

    child2 c2;
   // c2.fun1();
    c2.fun2();
    c2.fun3();

    return 0;
   }
