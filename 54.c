//C Program to implement stack PULL & PUSH Operation through an array.
#include<stdio.h>
#include<stdlib.h>
#define ARRMAX 5

int top = -1; //Meaning stack is currently empty, it is global variable because every function will need it
int stack[ARRMAX];
int i;

void push(int data)
{
    top++;

    if(top==-1)
    {
        printf("Stack Underflow!");
        return;
    }
    else if(top==ARRMAX)
    {
        printf("Stack Overflow!");
        return;
    }
    else
    {
        stack[top] = data;
        printf("Elements of Stack\n");
        for(i=0;i<=top;i++)
        {
            printf("Stack Values %d: %d \n", i, stack[i]);
        }
        return;
    }
}

void pull(int data)
{
    if(top==-1)
    {
        printf("\nStack Underflow!");
        return;
    }
    else if(top==ARRMAX)
    {
        printf("Stack Overflow!");
        return;
    }
    else
    {
        stack[top] = data;
        top--;
        printf("Elements of Stack\n");

        for(i=0;i<=top;i++)
        {
            printf("Stack Values %d: %d \n", i, stack[i]);
        }
        printf(" ");
        return;
    }
}

int main()
{
    push(5);
    push(6);
    push(4);
    push(3);
    push(1);

    pull(5);
    pull(6);

    return 0;
}
