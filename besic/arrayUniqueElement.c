#include<stdio.h>

void uniqueElement(int arr[],int size)
{
    int count;
    printf("\n the unique element is : { ");
    for(int i=0; i<size; i++)
    {
        count=0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",arr[i]);
        }
    }
    printf(" } ");
}

void main()
{
    int size;
    printf("\n Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter the all element of array :");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    uniqueElement(arr,size);
}
