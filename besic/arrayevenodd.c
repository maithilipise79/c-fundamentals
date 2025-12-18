#include<stdio.h>

void evenOdd(int arr[],int size)
{
    int ecount=0;
    int ocount=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
    }
    printf("\n even count is :%d \n odd count is :%d ",ecount,ocount);
}
void main()
{

    int size;

    printf("\n enetr the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter all elements of array :\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    evenOdd(arr,size);
}
