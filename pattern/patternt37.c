#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=i;j++)
        {
            if(i==1||i==5||j==5||j==1||i==j)
            {
                printf("%d",1);
            }
            else{
                printf("%d",0);

            }
        }
        printf("\n");
    }
}
