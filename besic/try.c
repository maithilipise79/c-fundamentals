#include<stdio.h>
void main()
{
    int n=152;

    int count=0;
    int rev=0;

    for(int i=n;i>0;i/=10)
    {
        int digit=i%10;


        {
            rev=rev*10+digit;
        }

    }
    (n==rev)?printf("palindrome"):printf("not palindrome");
}
