//WAP to show Runtime Polymorphism.
#include<iostream>
using namespace std;

class Base
{
public:
    int bc;

    void show()
    {
        cout<< "Base Class! \n" << "BC: " <<bc<< "\n\n";
    }
};
class Derived: public Base
{
public:
    int dc;

    void show()
    {
        cout<< "Base Class!\n";
        cout<< "Derived Class!\n";
        cout<< "BC: " <<bc<< "\n" << "DC: " <<dc<< "\n\n";
    }
};

int main()
{
    Base *bptr;     //Pointer of type Base (class)
    Base base;      //Object(base) of type base (class)
    bptr = &base;   //Pointer of type Base (class) pointing to address of base object
    bptr ->bc=100;  //Pointer Accessing Data Member of base Class
    bptr ->show();  //Pointer Accessing Member function of base class

    Derived derived;    //Object of type Derived (class)
    bptr = &derived;    //bptr pointing to the address of obj derived of Derived (class)
    bptr ->bc=1000;     //bptr Accessing the Data Member of base class
    // bptr ->dc=4000;  //Error!

    bptr->show();       //Pointer Accessing MemberFunction of Base Class

    Derived *dptr;      //pointer of type derived (class)
    dptr = &derived;    //pointer of type derived (class) pointing to address of derived object which was declared previously on line 38
    dptr ->dc=5000;     //pointer Accessing DataMember of derived class
    dptr ->show();      //pointer Accessing MemberFunction of Derived Class

    return 0;
}
