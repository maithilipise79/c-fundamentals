#include<stdio.h>

void displayArray( float redius[], int size)
{
    printf("\n Redius Array : { ");
    for(int i=0;i<size;i++)
    {
        printf("%.2f  ",redius[i]);
    }
    printf(" }");
}

void areaOfCircle(float redius[], int size)
{


    float sum=0;
    for(int i=0;i<size;i++)
    {
        float area=3.14*redius[i]*redius[i];
        printf("\n area of redius %.2f is : %.2f  ",redius[i],area);
        sum=sum+area;
    }

    printf("\n Average of area : %.2f",(sum/size-1));

}
void main()
{
    float redius[4]={23.3,21.3,33.4,64.3};

    displayArray(redius,4);
    areaOfCircle(redius,4);

}
