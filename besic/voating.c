#include<stdio.h>
void main()
{
    int age;
    char ans;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Do you have voating card enter Y or N:");
        scanf(" %c",&ans);
        if(ans =='y'||ans=='Y')
        {
            printf("you are valid for voating ");
        }
        else
        {
            printf(" not valid");
        }

    }
    else
    {
        printf("Your age is not valid for voatig ");
    }

}
