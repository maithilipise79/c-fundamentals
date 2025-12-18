#include<stdio.h>

void automorphic(int n)
{
    int mult=n*n;int flag=0;
    for(int i=n;i>0;i/=10)
    {
        int nlast=i%10;

        for(int j=mult;j>0;j/=10)
        {
            int mlast=j%10;
            if(nlast==mlast)
            {
                flag=1;
                break;
            }
        }

    }
    if(flag==1)
        {
            printf("automophic number ");
        }
    else
    {
        printf("\n not automorphic number");
    }
}

void main()
{
    int n;
    printf("\n Enter any number to check automorphic or not :");
    scanf("%d",&n);
    automorphic(n);
}
