//Write a C program to print Fibonacci series up to n terms.
// 1 2 3 5 8 13 21 34
#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    int n1=0,n2=1;
    printf("\n Enter the number of terms u want in fibonacci series :");
    scanf("%d",&n);
    for(int i=1;i<=n; i++)
    {
        sum=n1+n2;
        printf("\t %d",sum);
        n1=n2;
        n2=sum;
    }
}
