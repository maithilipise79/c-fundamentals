#include<stdio.h>
void main()
{
    char p='a';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %c",p);
            p++;
        }
        printf("\n");
    }
}
