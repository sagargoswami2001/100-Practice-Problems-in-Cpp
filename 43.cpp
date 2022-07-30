//C++ Program to Add two Complex Numbers.
#include<iostream>
using namespace std;

class complex
{
    int real,imag;
public:
    complex(int a,int b)
    {
        real = a;
        imag = b;
    }

    void display()
    {
        cout << real << "t " << imag << "i \n";
    }

    complex operator + (complex cc)
    {
        complex temp(0,0);
        temp.real = real+cc.real;
        temp.imag = imag+cc.imag;
        return temp;
    }
};

int main()
{
    complex c1(45,6);
    complex c2(30,5);
    complex c3(0,0);
    c3 = c1+c2;
    c1.display();
    c2.display();
    c3.display();
}
