#include<stdio.h>
void display(int col)
{
    for(int i=col;i>=1;i--)
    {

        for(int j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

void main()
{
    display(5);
}
