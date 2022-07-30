//C Program to Traverse an array and delete an element into the array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],size,pos,item,i;

    printf("Enter the Size of the Array: ");
    scanf("%d", &size);

    printf("\nEnter the Elements of the Array:\n");

    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the Position from Where the Element is to be deleted in Array: ");
    scanf("%d", &pos);

    if(pos <=0 || pos > size+1)
    {
        printf("\nInvalid! Out of Arrays Range.");
        exit(1);
    }
    else
    {
        item = a[pos-1];
        for(i=pos-1;i<=size-1;i++) //setting i to pos -1 of the array a and if position where element is to be inserted less then current
        {
            a[i] = a[i+1]; //size then copy the value of next array location to previous one
        }
    }
    size--;
    printf("\nEntered Elements of the Array are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
