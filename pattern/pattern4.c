
#include<stdio.h>
void display(int col,int row)
{
    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i==3 && j==3)
            {
                printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
        }
        printf("\n");
    }
}

void main()
{

    display(5,5);
}
