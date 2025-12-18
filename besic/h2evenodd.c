//Even or Odd number:
#include<stdio.h>
void main()
{
    int n;
    printf("\n Enter any value to check it even or odd ");
    scanf("%d",&n);
    if(n%2==0)
    {

        printf("%d is even number",n);
    }
    else
    {

        printf("%d is odd number",n);
    }
}
