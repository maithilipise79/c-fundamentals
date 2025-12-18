#include<stdio.h>
void main()
{
    for(int i=1;i<=10;i+=2)
    {
        int n=i;
        for(int j=10;j>=i;j-=2)
        {

            printf("%d",n);
            n=n+2;
        }
        printf("\n");
    }
}
