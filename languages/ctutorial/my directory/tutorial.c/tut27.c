/**********ARRAYS AND POINTER ARITHMETIC IN C**********/
/*
POINTER ARITHMETIC 
-> there are four arithmetic operators thaat can be used on pointers:
   ++
   --
   +
   -
int* ptr = a;   
or if we do ptr = ptr +1 ; then it will not add 1 even it will add size of(int)
-> lets go vs code to write some code & learrn more

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
//     int a=34;         // integer takes 4 bytes
//     int* ptr = &a;
//     printf("%d\n",ptr);            //6422232
//     printf("%d",ptr+1);         //6422236
//     printf("%d",ptr+2);         //6422240

char a = '3';              //character takes 1 bytes
char* ptr = &a;
printf("%d\n", ptr);   //6422232
printf("%d\n", ptr++); //6422233
printf("%d", ptr + 2); //6422234
return 0;
}