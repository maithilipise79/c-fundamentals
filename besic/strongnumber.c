//Write a C program to check whether a number is Strong number or not.
//A Strong Number is a number in which the sum of the factorials of its digits is equal to the number itself.
#include<stdio.h>
int main()
{
    int n,digit;
    int sum=0;
    int fact=1;
    printf("Enter any number to check is this strong number or not :");
    scanf("%d",&n);

    for(int i=n; i>0; i/=10)
    {
        digit=n%10;
        for(int j=1; j<=digit; j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;

    }
    (n==sum)?printf(" strong number"):printf("not strong number");
}
