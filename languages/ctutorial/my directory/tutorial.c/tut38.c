#include<stdio.h>
#include<conio.h>
//#include<string.h>

// typedef <previous_name> <alias_name>;
// typedef unsigned ling ul;
// typedef int integer;
// ul l1, l2, l3;
//integer a=14;
//printf("value of a is %d",a);

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
}std ;

int main () {

    // int* a,b;
    // here b is a integer ytype nd a is a pointer type data type
    typedef int* intpointer;
    // here a  nd b will become pointer data type 
    intpointer a,b;
    int c=89;
    a=&c;
    // b=c;
    b = &c;

    // std s1,s2;
    // s1.id= 34;
    // s2.id=35;
    // printf("value of s1,s id is %d\n",s1.id);
    // printf("value of s2's id is %d",s2.id);
return 0 ;
}