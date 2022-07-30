//Pointer.
#include<iostream>
using namespace std;

class sample
{
public:
    void display()
    {
        cout<< "\nThis is Sample Class Function";
    }
};

int main()
{
    sample s;
    sample *sptr;
    s.display(); //Use dot Operator when there is an object at left hand side

    sptr=&s;
    sptr->display();
    return 0;
}
