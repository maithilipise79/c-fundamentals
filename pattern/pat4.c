#include<stdio.h>

void display(int col,int row)
{
    int k=1;
    for(int i=1; i<=col; i++)
    {
        for(int j=1; j<=row; j++)
        {
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }

}
int main()
{
    display(4,4);
}
