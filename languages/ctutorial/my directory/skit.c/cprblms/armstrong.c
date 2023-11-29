#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
   while(n!=0)
   {
    i=n%10;
    n=n/10;
    sum=sum+(i*i*i);
   }
   if(num==sum)
   printf("armtrong number");
   else
   printf("no");
    return 0;
}