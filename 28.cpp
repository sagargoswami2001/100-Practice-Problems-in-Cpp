//Class 2 Example.
#include<iostream>
using namespace std;
/* Class is a collection of variables and functions*/
class First
 {
private:
    public:
   int a;
   void display()
    {
     cout<<"\n I am display function";
    }
   void show()
    {
     display();
     cout<<"\n I am Show function";
     cout<<"\n a:: "<<a;
    }
 }; // termination of class

 int main()
  {
   First var1; //abstract datatype classname objectname
   var1.show();
   var1.a=10;
   return 0;
  }
