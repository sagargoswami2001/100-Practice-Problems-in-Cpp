// Write a Program to Show the Working of Constructors along in inherited Classes.
#include<iostream>
using namespace std;

class Sagar
{
public:
    Sagar() { cout<< "A's Constructor Called" << endl; }
};

class Prince
{
public:
    Prince() { cout<< "B's Constructor Called" << endl; }
};

class Kanha: public Prince, public Sagar
{
public:
    Kanha() { cout<< "C's Constructor Called" << endl; }
};

int main()
{
    Kanha Kanha;
    return 0;
}
