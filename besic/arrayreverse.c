#include<stdio.h>

/*void reverse(int arr[],int size)
{
    int i=0;

    while(i< size-1)
    {
        for(int j=size-1; j>=0; j--)
        {
            if(i<=j)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
            i++;

        }
    }
}*/

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void display(int arr[],int size)
{
    printf("\n reverse array is :{ ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" }");
}

void main()
{

    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter all elements of array :\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    display(arr,size);
}
