//C Program to traverse an array and insert an element into the array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],size,i,num,pos;

    printf("Enter the Size of the Array: ");
    scanf("%d", &size);

    printf("\nEnter the Elements of the Array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the Elements that is to be Inserted in the Array: ");
    scanf("%d", &num);

    printf("\nEnter the Position to Where the Element is to be Inserted in Array: ");
    scanf("%d", &pos);

    if(pos <=0 || pos > size+1)
    {
        printf("\nInvalid! Out of Arrays Range.");
        exit(1);
    }
    else
    {
        for(i=size-1;i>=pos-1;i--) //Setting i to Size -1 of the Array a and if Position Where Element is to be Inserted Greater less then Current.
        {
            a[i+1] = a[i]; //Position then Copy the Value to Next Array Location.
        }
    }

    a[pos-1] = num;
    size++;

    printf("\nEnter Elements of the Array Are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
