#include<stdio.h>
void display(int col,int row)
{
    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j%2==0)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",0);
            }
        }
        printf("\n");
    }
}
void main()
{
   display(5,5);
}

