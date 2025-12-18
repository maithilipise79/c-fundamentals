#include<stdio.h>

void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=5;k++)
        {
            if(i==1||i==5||k==1||k==5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
