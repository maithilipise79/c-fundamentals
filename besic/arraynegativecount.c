#include<stdio.h>

void nagativeCount(int arr[],int size)
{
    int count=0;
    printf(" nagative element in the array is :{");
    for(int i=0;i<size;i++)
    {

        if(arr[i]<0)
        {
            count++;
            printf(" %d",arr[i]);
        }
    }
    printf("} \n");
    printf(" Nagative  number count in array : %d",count);
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
    nagativeCount(arr,size);
}
