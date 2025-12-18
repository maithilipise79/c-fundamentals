#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter any number :");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("\n prime number");
    }
    else
    {

        printf("\n not prime");
    }

}
