//Destructor.
#include<iostream>
using namespace std;

int count=0;
class Alpha
 {
  public:
   Alpha()
    {
     count++;
     cout<<"\nNo. of object created :: "<<count;
    }
    ~Alpha()
    {
     cout<<"\nNo. of object destroyed :: "<<count;
     count--;
    }
  };

  int main()
   {
    Alpha obj1,obj2,obj3,obj4;
    return 0;
   }
