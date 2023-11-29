/*
WHAT IS A UNION?
-> union is a user data defined data type (very similar to structure)
-> the diff between structures and union lies in the fact that in structure ,each member that its own storage 
   location, each member has its own storage location , whereas member sof a union uses a single shared memory locations
-> this single shared memory location is equal to the size of its largest data member

DECLARING AND ACCESSSING UNION MEMBERS
-> like structures we access any member by using the member access operator(.) in unions.
-> we use keyboard union to define a unior.
-> syntax is very similar to that of structure.

unnion cannopt handle alll members atonce
STRUCTURES                                     UNIONS
struct student                                 union student
{                                              {
float marks //4 bytes                          float marks //4 bytes
int id; //4 bytes                              int id; //4 bytes
}si;                                           }si;

In structures s1 store 8 bytes of data i.e. total bytes of marks nd id
In union s1 store 4 bytes of data sgared between id nd marks i.e. highest data
*/

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct student
// {
//     int id;
//     float marks;
//     char fav_char;
//     char name[30];
// };
// int main () 
// {
//     struct student s1;
//     s1.id = 1;   
//     s1.marks = 2;   
//     s1.fav_char = 3;   
//     strcpy(s1.name , "harry");

//     printf("the id is %d\n",s1.id);
//     printf("the marks  is %d\n",s1.marks);
//     printf("the fav character is %c\n",s1.fav_char);
//     printf("the name is %s\n",s1.name);
// return 0 ;
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

union student
{
    int id;
    float marks;
    char fav_char;
    char name[30];
};
int main () 
{
    union student s1;
    s1.id = 1;   
    s1.marks = 2;   
    s1.fav_char = 3;   
    strcpy(s1.name , "harry");
    // here name will come exactly right nd ither will be corrupted

    printf("the id is %d\n",s1.id);
    printf("the marks  is %d\n",s1.marks);
    printf("the fav character is %c\n",s1.fav_char);
    printf("the name is %s\n",s1.name);
return 0 ;
}