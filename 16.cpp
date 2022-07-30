#include<iostream>
using namespace std;
int main()
 {
   int a=10;
   int *ptr;
   float *fptr;
   ptr=&a;// ptr=addressof(a)
   cout<<"Value of ptr:: "<<ptr;   // it will print address of a
   cout<<"\nAddress of a:: "<<&a;
   cout<<"\nValue at ptr:: "<<*ptr;   // *ptr=a it will print value at ptr
   cout<<"\nValue of a:: "<<a;
   cout<<"\nSize of ptr:: "<<sizeof(ptr);
   cout<<"\nSize of fptr:: "<<sizeof(fptr);
   return 0;
 }
