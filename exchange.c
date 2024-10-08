#include<stdio.h>
int main()
{
int x,y,tem=0;
printf("\n enter two number");
scanf("%d %d",&x,&y);
tem=x;
x=y;
y=tem;
printf("\n after exchange /");
printf("\n value of x = %d and y = %d",x,y);
return 0;
}