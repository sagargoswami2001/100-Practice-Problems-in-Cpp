// C++ Program to Make a Simple Calculator to Add,Subtract,Multiply or Divide Using Swich Case.
#include<iostream>
using namespace std;
int main()
{
    char opr;
    float num1, num2;

    cout<< "Enter Operator:- " << endl << "| + | - | * | / |: ";
    cin>> opr;

    cout<< "Enter Two Operands: " << endl;
    cin>> num1 >> num2;

    switch(opr)
    {
        case '+':
        cout<< num1 << " + " << num2 << " = " << num1 + num2;
        break;

        case '-':
        cout<< num1 << " - " << num2 << " = " << num1 - num2;
        break;

        case '*':
        cout<< num1 << " * " << num2 << " = " << num1 * num2;
        break;

        case '/':
        cout<< num1 << " / " << num2 << " = " << num1 / num2;
        break;

        default:
        // If the operator is other than +, -, * or /, error message is shown
        cout<< "Error! Operator is not Correct";
        break;
    }
    return 0;
}