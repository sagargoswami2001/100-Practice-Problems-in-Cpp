// How to input strings in C++ with spaces...?
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;

    cout<< "Enter the Sentence with Spaces "<<endl;
    getline(cin, s);

    cout<< s;
    return 0;
}