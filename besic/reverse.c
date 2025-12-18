#include<stdio.h>
void main()
{
int n=256;
int rev=0;
for(int i=n;i>0;i/=10)
{
    int digit=i%10;
    rev=rev*10+digit;

}
 printf("%d",rev);
}
