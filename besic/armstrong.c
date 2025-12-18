
#include<stdio.h>

void display(int n)
{
    int count=0,sum=0;
    for(int i=n;i>0;i/=10){
        count++;
    }

    for(int i=n;i>0;i/=10)
    {
        int ld=i%10;
        int mul=1;
        for(int j=1;j<=count;j++)
        {
            mul*=ld;
        }
       sum+=mul;
    }

    (n==sum)?printf(" armstrong "):printf("not armstrong");
}

void main()
{
    display(153);
}
