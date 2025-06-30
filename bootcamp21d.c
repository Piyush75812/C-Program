#include<stdio.h>
int main()
{
    for(int row=0;row<=4;row++)
    {
        for(int col=1;col<=5-row-1;col++)
        {
            printf(" ");
        }
        for(int col=1;col<=row+1;col++)
        {
             printf("*");
        }
        printf("\n");
    }
    
    
}