#include<stdio.h>

void sorting(int arr[],int size)
{
    for(int j=0; j<size-1; j++)
    {
        for(int i=0; i<size-j-1; i++)
        {

            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    printf("\n sorted array :{");
    for(int i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf(" }");
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
    sorting(arr,size);
}
