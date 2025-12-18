#include<stdio.h>

void evenodd(int num)
{
    (num%2==0)? printf("Given number is even"): printf("Given number is odd");
}

void maxnumber(int n1,int n2)
{
    if(n1>n2)
    {
        printf("\n %d is maximum ",n1);
    }
    else if(n2>n1)
    {
        printf("\n %d is maximum ",n2);

    }
    else
    {
        printf(" Both are same");
    }
}

void positivenegative(int num)
{

    (num>=0)? printf(" number is positive") : printf(" number is negative");

}

void main()
{
    int op,num,n1,n2;
    char ans;

    do{
        printf("\n 1.Check number is even or odd \n 2.Check which number is greater in two given number \n 3Check given number is positive or negative ");
        printf("\n Enter the number of operation do u want perform :");
        scanf("%d",&op);
        switch(op)
        {

        case 1:
            printf("Enter any number to check even or odd :");
            scanf("%d",&num);
            evenodd(num);
            break;

        case 2:
            printf("\n Enter any 2 number to find greater number :");
            scanf("%d %d",n1,n2);
            maxnumber(n1,n2);
            break;

        case 3:
            printf(" Enter any number to check positive or nagative :");
            scanf("%d",num);
            positivenegative(num);
            break;

        default:
            printf("Invalid choice ");

        }
        printf("\n Do you want to perform operations one more time Enter yes or no :");
    scanf(" %c",&ans);

    }while(ans=='y'||ans=='Y');

}
