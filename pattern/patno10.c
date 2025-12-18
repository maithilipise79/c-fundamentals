#include<stdio.h>

void display(int col)
{
    int n1=0;
    int n2=1;


    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d",n2);
            int temp=n1;
            n1=n2;
            n2=temp+n1;

        }
        printf("\n");
    }
}

void main()
{
    display(5);
}
