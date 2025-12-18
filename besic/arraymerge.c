#include<stdio>



void main()
{
    int arr1size,arr2size;

    printf("\n Enter the size of first array :");
    scanf("%d",&arr1size);
    int arr1[arr1size];
    for(int i=0; i<arr1size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n Enter the size of first array :");
    scanf("%d",&arr2size);
    int arr2[arr2size];
    for(int i=0; i<arr2size; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int arr3size=arr1size+arr2size;
    int arr3[arr3size];

    for(int i=0; i<arr1size; i++)
        for(int j=0; j<arr2size; j++)
        {
            for(int k=0; k<arr3size; k++)
            {
                if(arr1[j]<=arr2[i])
                {

                    arr3[k]=arr2[j];
                }

            }
        }
}
