#include<stdio.h>
void display(int col)
{
    int k=1;

    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d",k);
            k=(k==0)?1:0;

        }
        printf("\n");
    }
}
void main()
{

    display(5);
}



