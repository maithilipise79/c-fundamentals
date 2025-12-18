//Sum of numbers in a given range
#include<stdio.h>
void main()
{
    int start;
    int end;
    int sum=0;
    printf("\n Enter the start and ending point of range to sum of all number in this range: ");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        sum=sum+i;

    }
    printf("\n sum of all number in %d to %d range is : %d",start,end,sum);

}
