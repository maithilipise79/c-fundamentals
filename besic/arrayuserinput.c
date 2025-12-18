#include<stdio.h>

void main()
{
    int marks[5];
    printf(" enter array value :");
    for(int i=0;i<5;i++)
    {

        scanf("%d",&marks[i]);
    }

    for(int i=0;i<5;i++)
    {

        printf("%d  " ,&marks[i]);
    }
}
