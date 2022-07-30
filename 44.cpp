//Function Overloading.
#include<iostream>
using namespace std;

//function overloading --> same function name but different argument list
int area(int side)//to find area of square
{
    return (side*side);
}

int area(int a,int b)
{
    //to find area of rectangle
    return (a*b);
}
float area(float radius)//to find area of circle
{
    return (3.14*(radius*radius));

}
float area(double height,double base)//to find the area of triangle
{
    return ((height*base)/2);

}

int main()
{
    int side,length,breadth;
    float radius, height, base;
    int choice,result;
    float result1;

    cout<< "**********Area Functions**********\n";
    cout<< "1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n";
    cout<< "\nEnter Your Choice: ";
    cin>> choice;

    switch(choice)
    {
    case 1:
        cout<< "\nEnter the Value of Side: ";
        cin>>side;
        result=area(side);
        cout <<"Area of Sqaure: "<< result;
        break;

    case 2:
        cout<< "\nEnter the Value of Length and Breadth:\n";
        cin>>length>>breadth;
        result = area(length,breadth);
        cout<< "\nThe Area of Rectangle is: " << result;
        break;

    case 3:

        cout<< "\nEnter the Value of Radius: ";
        cin>>radius;
        result1 = area(radius);
        cout<< "\nThe Area of Circle is: " << result1;
        break;

    case 4:
        cout<< "\nEnter the Value of Height and Base:\n";
        cin>>height>>base;
        result1 = area(height,base);
        cout<< "\nThe Area of Triangle is: " << result1;
        break;

    default:
        cout<< "\nError: You have Entered the Wrong Choice";
        break;
    }
    return 0;
}
