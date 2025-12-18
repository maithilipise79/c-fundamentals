#include<stdio.h>

int square(int side)
{
    int area =side*side;
    return side;
}

double triangle(int base,int height)
{
    double area=0.5*base*height;
    return area;
}

double circle(int redius)
{
    double area=3.14*redius*redius;
    return area;
}

int  rectangle(int length,int width)
{
    int area=length*width;
}

void main()
{
    int choise,side,redius,height,base,length,width;
    char ans;
    do
    {
        printf("\n1. square \n2. triangle \n3. circle \n4.rectangle \n choose one shape to find area and enter their number :");
        scanf("%d",&choise);
        switch(choise)
        {

        case 1:
            printf("\n Enter the side of square :");
            scanf("%d",&side);
            printf("\n Area od square :%d",square(side));
            break;

        case 2:
            printf("\n Enter the base and heigth of triangle :");
            scanf("%lf%lf",&base,&height);
            printf("\n Area of triangle :%if",triangle(base,height));
            break;

        case 3:
            printf("\n Enter the redius of circle :");
            scanf("%d",&redius);
            printf("\n Area of circle is :%lf",circle(redius));
            break;

        case 4:
            printf("\n Enter length and width of rectangle :");
            scanf("%d%d",&length,&width);
            printf("\n Area of rectangle :%d",rectangle(length,width));
            break;

        default:
            printf("\n Invalid choice ");

        }
        printf(" \n Do you want to perform ythis operation one more time if yes then enter 'Yes' :");
        scanf(" %c",&ans);

    }while(ans=='y'||ans=='Y');
}
