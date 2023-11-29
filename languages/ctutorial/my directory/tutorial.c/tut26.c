/******pointers******/
/*
POINTERS IN C
-> variaable which stores the address of another variable
-> can be of type int,cahr, array,fxn, or any othr=er pointer
-> size depends on the arhitecture , ex 2 bytes fro 32 bit
-> pointer in c programming languagge can be declared using * (asterisk symbol).

-> pointer ka address hexadecimal me hotaa hai
let a is a box which address is 0x45ai and b is also a box whixh stoerez the addres of a and p's address is 0xx10a
a is a intege value 
p is a pointer to integer
int* p = &a;
FOR DEREFERENCING   printf("%d",*p);   *p gives the value of a
p points to a 
int* ptr = &b;
-> pointer is a data type only
-> the address of operator '&' returns the address of a variable
-> * is the dereference operator also called indirection operator used to get the value at a given address
-> 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
    printf("lets learn about poine=ters\n ");
    int a=7;
    int* ptr = &a;
    printf("teh value of a is %d\n ",a);         //7
    printf("teh value of a is %d\n ",*ptr);      //7
    printf("teh address of a is %x\n ",ptr);      //will print address of a
    printf("teh address of a is %p\n ",ptr);      //will print address of a
    printf("teh address of pointer to a is %p\n ",&ptr);      //will print address of ptr
    printf("teh address of a is %p\n ",&a);      //will print address of ptr
    

    //int* ptr2;
    // printf("the address of somegarbage is %d\n", &ptr2); ///garbage value
    int * ptr2 = NULL;
    printf("the address of somegarbage is %p\n", &ptr2); //000000

return 0 ;
}

/*************nullll pointer****************/
/*
-> a pointer is not assigned any value but null is known as the null pointer
-> in computer programming , a null pointer that does not pooint to any object t fxn
->we can use it to initialize a pointer variable when that pointer variable isn't assigned any valid memory address yet
-> int* ptr= null;

USES OF POINTER
-> dynamic memory allocation
-> arrays, fxns, and structures
-> return multiple values from a fxn
-> pointer reduces the code and improves the performance
*/ 