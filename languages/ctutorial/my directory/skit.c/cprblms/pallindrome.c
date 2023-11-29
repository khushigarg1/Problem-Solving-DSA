#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n,i,j,sum=0,a;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    for(i=0;n!=0;i++)
    {
        a=n%10;
        n=n/10;
        sum=sum+(a*a*a);
    }
    printf("%d",sum);

    if(num==sum)
    {
        printf("numer is palindrome");
    }
    else
    printf("not palindrome");
    
    return 0;
}