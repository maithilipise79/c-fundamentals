#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        int n=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}
