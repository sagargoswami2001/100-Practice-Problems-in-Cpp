/* Write a Program to Compute area of Circle, area of Rectangle, area of Triangle Depending on User Choice
using Overloading Function Area.*/

#include<iostream>
using namespace std;
int area(int,int);
float area(float);
float area(float,float);
int main()
{
    int l,b;
    float r,bs,ht;
    cout<< "Enter Length and Breadth of Rectangle: " << endl;
    cin>> l>>b;
    cout<< "\nEnter Radius of Circle: ";
    cin>>r;
    cout<< "\nEnter Base and Height of Triangle: " <<endl;
    cin>>bs>>ht;
    cout<< "\nArea of Rectangle is "<<area(l,b);
    cout<< "\nArea of Circle is "<<area(r);
    cout<< "\nArea of Triangle is "<<area(bs,ht);
}
int area(int l,int b)
{
    return (l*b);
}
float area(float r)
{
    return (3.14*r*r);
}
float area (float bs, float ht)
{
    return((bs*ht)/2);
}
