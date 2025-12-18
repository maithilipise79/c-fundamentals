#include<stdio.h>

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


    int copyarr[size];
    printf("\n Copyarr elements is : {");
    for(int i=0;i<size;i++)
    {
        copyarr[i]=arr[i];
        printf(" %d",copyarr[i]);
    }
    printf("}");
}
