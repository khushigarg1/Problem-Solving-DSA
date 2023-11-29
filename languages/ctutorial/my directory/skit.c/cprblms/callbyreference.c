#include<stdio.h>
#include<conio.h>

void swap_reference (int *,int *);                                    //function declaraton
 void main()
 {
     int a=10,b=20;
     printf("before swapping : a=%d,b=%d",a,b);                   //2,4
     swap_reference(a,b);                                        //calling
     printf("after swapping : a=%d,b=%d",a,b);                   //4,2
 }

 void swap_reference (int *x, int *y)                           //function definition
{ 
     int z;
     z=*x;
     *x=*y;
     *y=z;
     printf("%d,%d",*x,*y);
 }