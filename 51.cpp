//WAP in C++ for showing working of virtual base class.
#include<iostream>
using namespace std;

class GrandParent
{
public:
    void display()
    {
        cout<< "Grand Parent Class!\n";
    }
};

class Parent1: virtual public GrandParent
{
public:
    void display1()
    {
        cout<< "Parent1 Class!\n";
    }
};

class Parent2: virtual public GrandParent
{
public:
    void display2()
    {
        cout<< "Parent2 Class!\n";
    }
};

class Child: public Parent1, public Parent2
{
public:
    void display3()
    {
        cout<< "Child Class!\n";
    }
};

int main()
{
    Child obj;

    obj.display();
    obj.display1();
    obj.display2();
    obj.display3();

    return 0;
}
