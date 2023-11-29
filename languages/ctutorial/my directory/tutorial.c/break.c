#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n;
   printf("enter the number");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      
       printf("%d",i);
       if(i==2)
       {
         break;
       }
       
    }
       printf("program ended");
   


}