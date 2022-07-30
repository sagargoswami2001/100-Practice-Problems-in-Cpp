//Recursion Example.
#include<iostream>
using namespace std;
void print(int n)       // n=5         n=4        n=3         n=2       n=1
 {
  if(n==1)             //  false      false        false      false     True
   {
    cout<<"\nHello";                                               //   Hello
   }
  else
   {
    cout<<"\nHello"<<n;    // Hello       Hello       Hello       Hello
    print(n-1);           // print(4)     print(3)    print(2)    print(1)
    cout<<"\nRecursion";        //                                   Recursion
   }
 }

int main()
{
 print(5);
 return 0;
}
