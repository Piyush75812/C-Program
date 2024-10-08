#include<stdio.h>
int main()
{
int year;
printf("\n enter a year");
scanf("%d",&year);
if(year%4==0)
{
printf("\n %d leap year",year);
}
else
{
printf("\n %d not leap year",year);
}
return 0;
}