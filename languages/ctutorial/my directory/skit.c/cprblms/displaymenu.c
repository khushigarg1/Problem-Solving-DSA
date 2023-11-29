#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,choice;
    printf("enter a number");
    scanf("%d",num1);
    printf("enter second number");
    scanf("%d",&num2);
    do
    {
       printf("--menu--\n");
       printf("1.addition\n");
       printf("2.substraction\n");
       printf("3.exit\n");
       
       printf("enter your choice");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
           printf("addition is %d \n",num1+num2);
           break;
           case 2:
           printf("subtraction is %d \n",num1-num2);
           break;
           case 3:
           printf("exit code\n");
           break;

           default :
           printf("wrong choice");
           break;
       }
     }
      while (choice!=3);
    
    return 0;
}