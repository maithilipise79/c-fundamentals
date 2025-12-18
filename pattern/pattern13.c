#include<stdio.h>

void display(int row,int col)
{

    for(int i=col;i>0;i--)
    {
        for(int k=5;k>=i;k--)
        {
            printf("%d",k);
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d",i);

        }
        printf("\n");
    }
}

void main()
{
    display(5,5);
}
