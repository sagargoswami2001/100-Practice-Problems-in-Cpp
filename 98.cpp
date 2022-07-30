// First Reverse:
#include<iostream>
using namespace std;

string FirstReverse(string str)
{
    string rstr;

    // loop through characters in str
    for (int i = 0; i < str.size(); ++i)
    {
        // add characters to the front of str
        rstr = str[i] + rstr;
    }
    return rstr;
}

int main()
{
    cout<< FirstReverse("Sagar Goswami is a Good Boy") << endl;
    // Result: "yoB dooG a si imawsoG ragaS"
    return 0;
}