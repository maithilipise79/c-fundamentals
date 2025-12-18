#include<stdio.h>
void min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size ;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("minimum number in the array : %d",min);
}

void max(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size ;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\n minimum number in the array : %d",max);
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
    min(arr,size);
    max(arr,size);
}
