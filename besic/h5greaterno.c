//Greatest of two numbers:
#include<stdio.h>
void main()
{
int num1 ,num2;
printf("Enter any two number to fidest gretest one :");
scanf("%d %d",&num1,&num2);
if(num1>num2)
{
printf("\n %d is greater then %d",num1,num2);
}
else if(num2>num1){
printf("\n %d is greater then %d",num2,num1);

}
else
{
printf("\n both are euals");

}


}
