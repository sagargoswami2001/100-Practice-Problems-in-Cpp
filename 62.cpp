//C++ Program to Convert Int Long Double to Absolute Values.
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int abs(int n);
long abs(long n);
double abs(double n);

int abs(int n)
{
     if(n<0)
     {
          return(n*(-1));
     }
     else
     {
          return n;
     }
}

long abs(long n)
{
     if(n<0)
     {
          return(n*(-1));
     }
     else
     {
          return n;
     }
}

double abs(double n)
{
     if(n<0)
     {
          n = (n*(-1));
          int y = (int)(n);
          return(y);
     }
     else
     {
          int y = (int)(n);
          return(y);
     }
}

int main()
{

     cout<< abs(-10) <<'\n';
     cout<< abs(-10l) <<'\n';
     cout<< abs(11.99) <<'\n';

     return 0;
}
