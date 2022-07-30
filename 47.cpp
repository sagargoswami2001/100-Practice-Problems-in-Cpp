//Employee.
#include<iostream>
using namespace std;

class employee
{
    int ID,salary;
    char name[10];
public:
    void getdata()
    {
        cout<< "\nEnter ID: ";
        cin>> ID;
        cout<< "Enter Name: ";
        cin>> name;
        cout<< "Enter Salary: ";
        cin>> salary;
    }
    void show()
    {
        cout<< "\n\nID: " << ID;
        cout<< "\nName: " << name;
        cout<< "\nSalary: " << salary;
    }
};
    int main()
    {
        int i,no;
        cout<< "Enter No. of Employees: ";
        cin>> no;

        employee e[10];
        for(int i=0;i<no;i++)
        {
            e[i].getdata();
        }
        for(i=0;i<no;i++)
        {
            e[i].show();
        }
        return 0;
    }
