//Time.
#include<iostream>
using namespace std;

class Time
 {
  int hour,mins,sec;
  public:
   Time() { hour=0;mins=0;sec=0; } // Default Constructor
   Time(int h,int m,int s) // Parametrized Constructor
    {
     hour=h;
     mins=m;
     sec=s;
    }
   void sum(Time t1,Time t2)
    {
     sec=t1.sec+t2.sec;
     mins=sec/60;
     sec=sec%60;
     mins=mins+t1.mins+t2.mins;
     hour=mins/60;
     mins=mins%60;
     hour=hour+t1.hour+t2.hour;
    }
  void display()
   {
    cout<<hour<<" Hrs "<<mins<<" mins "<<sec<< "sec ";
   }
 };

 int main()
  {
   Time T1(2,45,45);
   Time T2(3,30,25);
   Time T3;
   T3.sum(T1,T2);
   cout<<"**********Time T1**********\n";
   T1.display();
   cout<<"\n**********Time T2**********\n";
   T2.display();
   cout<<"\n**********Time T3**********\n";
   T3.display();
   return 0;
  }
