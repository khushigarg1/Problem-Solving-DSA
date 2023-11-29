#include<stdio.h>
#include<conio.h>
int main()

{
   int n,i;
   printf("enter a number");
   scanf("%d",n);

   for(i=2;i<=n/2;i++)
   {
    if(n%i==0)
    {
        printf("not a prime number");
    }
    else
    {
        printf("prime number");   
    }
    return 0;
   }
}
