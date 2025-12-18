#include<stdio.h>
void main()
{
    int n=1;
    for(int i=1;i<=4;i++)
    {

        for(int j=1;j<=3;j++)
        {
            printf(" %d",n);
            (i%2==0)?n--:n++;

        }
        n=(i%2==0)?n+4:n+2;
        printf("\n");
    }

}
