#include<stdio.h>
void display(int col,int row)
{
    for(int i=1;i<=col;i++)
    {
        int k=i;
        for(int j=5;j>=i;j--)
        {
         printf("%d",k);
         k++;
        }
        for(int l=2;l<=i;l++)
        {
            printf("%d",5);
        }

        printf("\n");
    }
}
void main()
{
    display(5,5);
}
