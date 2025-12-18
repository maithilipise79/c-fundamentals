#include<stdio.h>
void display()
{

    for(int i=5;i>=1;i--)
    {

        for(int j=5;j>=i;j--)
        {

               printf(" %d",j);

        }
        for(int k=1;k<i;k++)
        {

            printf(" %d",i);
        }

        printf("\n");
    }
}

void main(){
display();
}
