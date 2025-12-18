
#include<stdio.h>
void main()
{

    int n =1345;
    int digit;
    int sum=0;
    for(int i=n;i>0;i=i/10){
        digit=i%10;
        sum=sum+digit;

    }
    printf("%d ",sum);

}
