#include<stdio.h>
int main()
{
int a,b;
printf("\n enter the value of a = ");
scanf("%d",&a);
printf("\n enter the value of b = ");
scanf("%d",&b);
scanf("%d%d",&a,&b);
b=a+b;
a=b-a;
b=b-a;
printf("\n after swap value of a = %d",a);
printf("\n after swap value ofb = %d",b);
return 0;
}