#include<stdio.h>
void display(int row,int col)
{int k=0;
for(int i=1;i<col;i++)
{
for(int j=1;j<=row;j++)
{
printf(" %d",k);

}
k=(k==0)?1:0;
printf("\n");
}
}
int main(){
display(6,6);}
