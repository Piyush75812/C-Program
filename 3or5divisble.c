#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter five elements:");
    scanf("%d %d %d %d %d",arr);
    int num;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%3==0)
        {
            printf("\n divisible by 3",arr[i]);
        }
        else if(arr[i]%5==0)
        {
           printf("\n divisble by 5",arr[i]);
        }
    }
}








