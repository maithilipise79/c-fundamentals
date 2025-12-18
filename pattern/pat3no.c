#include<stdio.h>

void display(int col,int row)
{
    for(int i=1;i<=col;i++)
    {

        for(int j=1;j<=row;j++)
        {
            if(i==j || i+j==6)
            {
                printf(" 1");
            }
            else
            {

                printf(" ");
            }

        }
        printf("\n");

    }
}

void main()
{

    display(5,5);
}
