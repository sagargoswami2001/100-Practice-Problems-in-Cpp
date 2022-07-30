//Polymorphism.
#include<iostream>
using namespace std;

class Employee
{
    int ID;
    float salary;
public:
    void getdata(int a,int b)
    {
        ID=a;
        salary=b;
    }
    void showdata()
    {
        cout<< "ID :: " <<ID<< "Salary :: " <<salary<< "\n";
    }
};

class sample
{
public:
    void display()
    {
        cout<< "Sample Class";
    }
};

int main()
{
    Employee obj[100];
    Employee *eptr[10];
    int a;
    obj[0].getdata(1,10000); //Use dot Operator when there is an object at left hand side
    obj[0].showdata();

    eptr[0]=new Employee(); //This memory is at heap but eptr is at stack
    eptr[0]->getdata(2,20000);
    eptr[0]->showdata();

    return 0;
}
