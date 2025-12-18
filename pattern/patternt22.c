#include<stdio.h>

void main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
