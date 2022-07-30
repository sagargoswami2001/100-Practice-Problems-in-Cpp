//Employee Using Array.
#include<iostream>
using namespace std;

class employee
{
    int ID;
    float salary;
public:
    void getdata(int a,int b)
    {
        ID = a;
        salary = b;
    }
    void show()
    {
        cout<< "\nID: " << ID << "\nSalary: " << salary;
    }
};

int main()
{
    employee i[10];

    i[0].getdata(0,10000);
    i[1].getdata(1,15000);
    i[2].getdata(2,20000);
    i[3].getdata(3,25000);
    i[4].getdata(4,30000);
    i[3].show();

    return 0;
}
