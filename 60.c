#include<stdio.h>
int main()
{
    int totalrowcol;
    printf("Enter the Number of Rows: ");
    scanf("%d",&totalrowcol);
    for(int rowno=1;rowno<=totalrowcol;rowno++)
    {
        for(int colno=1;colno<=totalrowcol;colno++)
        {
            if((colno==1)||(colno==totalrowcol)||(rowno==1)||(rowno==totalrowcol)||(rowno==colno)||(rowno+colno)==(totalrowcol+1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
