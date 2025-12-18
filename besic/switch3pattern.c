
#include<stdio.h>

void square()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}


void hollowSquare()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}


void rombus()
{
 for(int i=1;i<=5;i++)
 {
     for(int k=4;k>=i;k--)
     {
         printf(" ");
     }
     for(int j=1;j<=5;j++)
     {
         printf("*");
     }
     printf("\n");
 }
}


void hollowRombus()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}


void triangle()
{
  for(int i=1;i<=5;i++)
  {
    for(int k=4;k>=i;k--)
    {
        printf(" ");
    }

    for(int j=1;j<=i;j++)
    {
        printf(" *");
    }
    printf("\n");
  }
}


void hollowTriangle()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1||i==5||i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}


void rightTriangle()
{
  for(int i=1;i<=5;i++)
  {
      for(int j=1;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
  }
}


void hollow_invert_R_triangle()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==5||j==1||i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}



void main()
{
    int option;
    char ans;
    do{
        printf("\n1. square\n2. Hollow square\n3. Rhombus  \n4. hollow Rhombus\n5. triangle  \n6. hollow Triangle \n7. right triangle \n8. hollow inverted right triangle  \nwhich type of shape do you want print enter their number : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            printf("\n Square :\n");
            square();
            break;

        case 2:
            printf("\n Hollow Square :\n");
            hollowSquare();
            break;

        case 3:
            printf("\n Rombus :\n");
            rombus();
            break;

        case 4:
            printf("\n Hollow Rombus :\n");
            hollowRombus();
            break;

        case 5:
            printf("\n Triangle :\n");
            triangle();
            break;

        case 6:
            printf("\n Hollow Triangle :\n");
            hollowTriangle();
            break;

        case 7:
            printf("\n Right triangle :\n");
            rightTriangle();
            break;

        case 8:
            printf("\n Hollow Invert right triangle  :\n");
            hollow_invert_R_triangle();
            break;

        default:
            printf("\n Invalid choice");
        }

        printf("\n do u want perform this operations one more time if yes then enter 'Yes' :");
        scanf(" %c",&ans);
    }while(ans=='y'||ans=='Y');

}
