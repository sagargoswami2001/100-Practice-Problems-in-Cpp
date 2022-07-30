//WAP to show pointer to object.
#include<iostream>
using std::cout;
using std::cin;

class employee
{
private:
    int id;
    float salary;

public:
    void getdata(int a,float b)
    {
        id=a;
        salary=b;
    }
    void showdata()
    {
        cout<< "\nEmployee ID: " <<id<< "\nEmployee Salary: " <<salary;
    }
};

int main()
{
     //employee obj1;
     //obj1.getdata(1,10000);
     //obj1.showdata();

// The Above Block of Commented code does the same thing as the below code but below code uses pointers to object.

    employee *eptr;
    eptr = new employee();
    eptr ->getdata(1,10000);
    eptr ->showdata();

    return 0;
}
