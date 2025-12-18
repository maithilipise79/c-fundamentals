#include<stdio.h>
void main()
{
     //Write a C program to print all natural numbers from 1 to n. - using while loop
     char ans;
     printf("do want to print natural number( enter y/n) :");
     scanf(" %c",&ans);
     if(ans=='y'||ans=='Y')
     {
         int lastn;
         printf("Enter the value until u want to print natural number :");
         scanf("%d",&lastn);
         int i=1;
         while(i<=lastn)
         {
             printf("\t %d",i);
             i++;
         }
     }
     else{ printf("OK! we move on next question \n\n\n");}




     //Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
     char ans1;
     printf("do want to print natural number( enter y/n) :");
     scanf(" %c",&ans1);
     if(ans=='y'||ans=='Y')
     {
         int no;
         printf("Enter the number where do you u wnat start  :");
         scanf("%d",&no);
         while(no>=1)
         {
             printf(" \t %d",no);
             no--;
         }

     }
     else{ printf("OK! we move on next question \n\n\n");}






     //Write a C program to print all alphabets from a to z. - using while loop
     printf("\n\n a to z :");
     int i=97;
     while(i<=122){
        printf(" %c",i);
        i++;
     }



     //Write a C program to print all even numbers between 1 to 100. - using while loop
     printf("\n\n all even numbers from 1 to 100 :");
     int num=1;
     while(num<=100)
     {

         if(num%2==0)
        {
            printf("  %d",num);
        }
        num++;

     }



     //Write a C program to print all odd number between 1 to 100.
     printf("\n\n all odd numbers from 1 to 100 :");
     int num1=1;
     while(num1<=100)
     {

         if(num1%2!=0)
        {
            printf("  %d",num1);
        }
        num1++;

     }



     //Write a C program to find sum of all natural numbers between 1 to n.
     int numb;
     int sum=0;
     printf("\n up to which number do you want to sum :");
     scanf("%d",&numb);
     int j=1;
     while(j<=numb)
     {
         sum=sum+j;
         j++;
     }
     printf("\n sum up to %d is %d",numb,sum);



     //Write a C program to find sum of all even numbers between 1 to n.
     int sum1=0;
     int number;
     int ij=1;
     printf("\n up to which number do you want to sum of all even number :");
     scanf("%d",&number);
     while(ij<=number)
     {

         if(ij%2==0)
         {

             sum1=sum1+ij;
         }
         ij++;
     }
     printf("\n sum of all even numbers up to %d is : %d ",number,sum1);


}

