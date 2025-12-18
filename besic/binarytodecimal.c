//Write a C program to convert Binary to Decimal number system.
// 0/1      0/1    0/1    0/1   0/1   0/1 1=on 0=off
//  32       16     8      4     2     1
//  2^5     2^4    2^3    2^2   2^1   2^0
#include<stdio.h>
void display(int n)
{
    int k=0;
    int sum=0;
    int result;
    for(int i=n; i>0; i/=10)
    {
        int digit=i%10;
        if(digit==1)
        {

            if(k==0)
            {
                result=1;
            }
            else
            {
                result=1;
                for(int j=1; j<=k; j++)
                {
                    result=result*2;
                }


            }

            sum=sum+result;

        }

        k++;
    }

    printf(" \n %d in bianary = %d in decimal",n,sum);
}

void main()
{
    display(11);
}
