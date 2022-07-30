#include<iostream>
using namespace std;
    class base
    {
        public:
        base()
        {
            cout<< "Sagar";
        }
        ~base()
        {
            cout<< "Goswami";
        }
    };

    class derived: public base
    {
        public:
        derived()
        {
            cout<< "Goswami";
        }
        ~derived()
        {
            cout<< "Mohit";
        }
    };

int main()
{
    derived obj;
    return 0;
}