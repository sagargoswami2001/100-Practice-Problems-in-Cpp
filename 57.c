//C Program to Traverse an Array and Print it's Element.
#include<stdio.h>

int main()
{
    int a[50],size,i;

    printf("Enter the Size of the Array: ");
    scanf("%d",&size);

    printf("\nEnter the Elements of the Array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEntered Elements of the Array & Address Are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n", &a[i]);
        printf("%d\n\n", a[i]);
    }
    return 0;
}
