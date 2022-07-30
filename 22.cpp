#include <iostream>
using namespace std;

class arithmatic
{
    public:
    int num1, num2;

    void add(int x, int y)
    {
        num1=x;
        num2=y;
        cout<<num2+num1<<"\n";
    }
    int sub(int x, int y)
    {
        num1=x;
        num2=y;
        return(num1-num2);
    }
};

int main()
{
    arithmatic obj1;
    obj1.add(20, 30);
    int result = obj1.sub(40, 10);
    cout<<result;
}
