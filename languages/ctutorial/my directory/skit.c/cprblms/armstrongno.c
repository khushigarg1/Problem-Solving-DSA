#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,r=0,num,a;
    printf("enter a number");
    scanf("%d",&num);
    
    n=num;

    for(i=0;num!=0;i++)
    {
        a=num%10;
        num=num/10;
       // printf("%d",a);
        r=(r*10)+a;
    }
    printf("\n%d",r);

    if(n==r)
    {
        printf("\nnum is a armstrong number");
    }
    else
    {
    printf("\nnot armstrong");
    }
    
    return 0;
}