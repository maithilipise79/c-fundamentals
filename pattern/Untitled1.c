#include<stdio.h>
void display(int col,int row)
{
    for(int i=1; i<=col; i++)
    {
        for(int j=0; j<=row; j++)
        {
            printf("\ %d",j);
        }
        printf("\n");
    }
}
int main()
{
    display(6,6);
}
