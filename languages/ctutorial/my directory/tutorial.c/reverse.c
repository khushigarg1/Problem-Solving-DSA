#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,num,rev=0,r;
    printf("enter a number");
    scanf("%d",&num);
    
    for(i=0; ;i++)
    {
        r=num%10;
        num=num/10;
        rev=(rev*10)+r;

        if(num==0)
        break;
    } 
    
   /* while(i<num) 
    {
       r=num%10;
       num=num/10;
       rev=(rev*10)+r;

       if(num==0)
       break;
    }
    i++;
    */

/*   do
   {
        r=num%10;
       num=num/10;
       rev=(rev*10)+r;

       if(num==0)
       break;
       
   } while (i<num);
  */ 
    printf("reverse of a number is %d",rev);
    return 0;
}