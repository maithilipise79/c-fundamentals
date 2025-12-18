#include<stdio.h>
void display(int col)
{
    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=i;j++)
        {

            if(i==5|| j==1 ||i==j)
            {
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

}

void main()
{
    display(5);
}
