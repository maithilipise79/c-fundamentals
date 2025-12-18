#include<stdio.h>
void main()
{

    for(int i=1;i<=5;i++)
    {
        int n=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",n);
            n=(n==1)?0:1;
        }
        printf("\n");
    }
}
