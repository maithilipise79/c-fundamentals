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

        int m=i-1;
        for(int l=2;l<=i;l++)
        {
            printf("%d",m);
            m--;
        }
        printf("\n");

    }
}
void main()
{
    display(5,5);
}
