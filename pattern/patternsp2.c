#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=9;j++)
        {
              if(i+j==6 || i+j==10)
              {
                  printf("*");
              }
              else if(j>=5&& j<9&& i==1)
              {
                  printf("*");

              }
              else if(j<6&& j>=1&& i==5)
              {
                  printf("*");

              }
              else{
                printf(" ");
              }


        }

        printf("\n");
    }
}
