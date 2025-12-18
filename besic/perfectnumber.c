//Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
void main()
{
    int n,i;
    int sum=0;
    printf("\n Enter any number to check is this perfect number or not :");
    scanf("%d",&n);
    for(i=1; i<=n/2; i++)
        {
        if(n%i==0)
        {
            sum=sum+i;
        }


    }
    (n==sum)?printf("perfect number"):printf("not perfect number");

}
