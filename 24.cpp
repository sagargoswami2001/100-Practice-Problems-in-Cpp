//Call By Reference.
#include<iostream>
using namespace std;
int sum(int x, int y, int *s);
int main()
{
    int x, y, s;

    cout << "Enter Two Numbers: ";
    cin >> x>>y;

    sum(x, y, &s);
    cout << "Sum is: " << s;
}

int sum(int x, int y, int *s)
{
    *s = x + y;
    return 0;
}
