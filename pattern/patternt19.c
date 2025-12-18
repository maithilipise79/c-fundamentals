#include<stdio.h>

void display(int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
void main()
{
    display(5);
}
