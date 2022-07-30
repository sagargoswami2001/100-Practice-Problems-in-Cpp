//Function Calling Program.
#include<iostream>
using namespace std;
void add(int,int); //function prototype or declaration
int sub(int,int);
int main()
{
    int a=10,b=20;
    add(a,b); //function calling
    //int result=sub(b,a);
    cout<<"The Subtraction is: " <<a-b <<"\n";
}

void add(int x,int y) //function definition
{
    cout<<"The Addition is: " <<x+y <<"\n";
}
int sub(int x1,int y1) //function definition
{
    return(x1-y1);
}
