#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        int k=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
}
