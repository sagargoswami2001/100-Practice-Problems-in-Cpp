//Multiple Inheritance.
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
     cout<<"\nThis is fun2 function";
    }
 };

 class child1 : public parent // syntax of inheritance
  {
   public:
   void fun3()
    {
     cout<<"\nThis is fun3 function";
    }
   };

 class child2 : public child1
  {
   public:
   void fun4()
    {
     cout<<"\nThis is fun4 function";
    }
  };

  int main()
   {
  //  child1 c;
    child2 c;
   /* c.fun1();// error
    c.fun2(); //ok
    c.fun3(); //ok
    c.fun4(); // error*/

    //c.fun1(); // error
    c.fun2(); // ok
    c.fun3(); // ok
    c.fun4(); //ok
    return 0;
  }
