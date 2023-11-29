#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0;
    printf("enter number which is divisible by 7:");
    for(i=100;i<=200;i++)
    {
        if(i%7==0)
        {
        printf("%d\n",i);
        sum=sum+i;
        }
    }
    printf("the sum is %d\n",sum);
    return 0;
}