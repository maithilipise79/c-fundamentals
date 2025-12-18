#include<stdio.h>

void newEvenArr(int arr[],int size)
{
    int s=0;
    int evenarr[s];
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            evenarr[s]=arr[i];
            s++;
        }
    }
    printf("\n even array is ;{");
    for(int i=0;i<s;i++)
    {
        printf(" %d",evenarr[i]);
    }
    printf(" }");
}

void newOddArr(int arr[],int size)
{
    int s=0;
    int Oddarr[s];
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            Oddarr[s]=arr[i];
            s++;
        }
    }
    printf("\n even array is ;{");
    for(int i=0;i<s;i++)
    {
        printf(" %d",Oddarr[i]);
    }
    printf(" }");
}

void main()
{
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter all the elements : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

     printf("\n the given array is : {");
    for(int i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
    printf(" }");

    newEvenArr(arr,size);
    newOddArr(arr,size);

}
