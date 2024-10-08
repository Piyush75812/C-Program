#include<stdio.h>
int main()
{
int number=0;
printf("\n enter a number");
scanf("%d",&number);
if(number%2==0)
{
printf("\n %d is even number",number);
}
else
{
printf("\n %d is odd number",number);
}
return 0;
}