//C++ Program to use inline function.
#include<iostream>
using namespace std;
inline int cube (int s)
{
    return s*s*s;
}
int main()
{
    cout << "The Cube is: " << cube(3) << "\n";
    return 0;
}
