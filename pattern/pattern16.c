#include<stdio.h>

void display(int col,int row)
{
    for(int i=1;i<=col;i++)
    {


        int n=i;
        for(int k=2;k<=i;k++)
        {
            printf("%d",n);
            n--;
        }

        int m=1;
        for(int j=5;j>=i;j--)
        {

            printf("%d",m);
            m++;
        }



        printf("\n");
    }
}

void main()
{
    display(5,5);
}
