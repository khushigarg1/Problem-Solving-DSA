#include<stdio.h>
#include<conio.h>
void swap_value(int,int);                              //function declaration

void main()
{
    int a=10,b=20;                                    
    printf("before swapping: a=%d,b=%d\n",a,b);        //10,20
    swap_value(a,b);                                            //calling
    printf("after swapping : a=%d,b=%d\n",a,b );       //10,20        //actual arguments 
}

void swap_value(int x,int y)                           //function definition
{                                                 
    int z;
    z=x;
    x=y;
    y=z;
   printf("%d\n %d\n",x,y);         //formal argumentsss
}

// note:the value of a and b remain unchanged even after exchanging the value of x and y