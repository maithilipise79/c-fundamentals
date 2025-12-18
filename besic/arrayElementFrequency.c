#include<stdio.h>

void EachElementFrequency(int arr[],int size)
{
    int count;
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=0;j<size;j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
            }

        }
        printf("\n count of %d is : %d",arr[i],count);
    }
}
void main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the all elements of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    EachElementFrequency(arr,size);

}
