#include<stdio.h>
int main()
{
int pmr,cmr,tu,cpu,eb;
//clrscr();
printf("\n enter the PMR = ");
scanf("%d",&pmr);
printf("\n enter the CMR = ");
scanf("%d",&cmr);
printf("\n enter the charge per unit = ");
scanf("%d",&cpu);
tu=cmr-pmr;
eb=tu*cpu;
printf("\n total unit = %d",tu);
printf("\n EB = %d",eb);
//getch();
return 0;
}
