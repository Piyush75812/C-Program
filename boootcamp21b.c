#include<stdio.h>
int main()
{
    for(int row=0;row<=4;row++)
    {
        for(int col=1;col<=5-row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}