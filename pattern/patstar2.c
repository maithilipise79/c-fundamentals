#include<stdio.h>

void display(int col,int row)
{
    for(int i=1; i<=col; i++)
    {
        for(int j=1; j<=row; j++)
        {
            if(i==1 || i==5 ||j==1 ||j==5)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");

    }


}

void main()
{

    display(5,5);
}
