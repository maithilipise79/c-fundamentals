#include<stdio.h>
void display(int col)
{
    for(int i=col;i>=1;i--)
    {

        for(int j=1;j<=i;j++)
        {

            printf(" %d",j);
        }
        printf("\n");
    }

}

int main()
{
    display(5);
}
