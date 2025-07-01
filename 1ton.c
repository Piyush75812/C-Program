#include<stdio.h>
void sumnatural(int n)
{
    if(n==0)
    {
        return ;
    }
    else{
        sumnatural(n-1);
        printf("%d",n);
    }

}
int main()
{
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);
     sumnatural(n);
    
}
    