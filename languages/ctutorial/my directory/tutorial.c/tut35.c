/*STRING FXNS IN CA*/
/*
-> null terminated character array
C LIBRARY :<STRING.H>
strcat() -> this fxn is used to concatenate or combine two given stringd
           strcat("hello" , "world") = helloworld
strlen() -> this fxn is used to slow length of a string
           strlen("hello") = 5
strrev() -> this fxn is used to show length of a string
           strrev("harry") = yrrah
stcpy()  -> this fxn is used to copy one string into another
           strcpy(s1,s2) = it will copy s1 into s2    copies s1 to s2
strcmp() -> this fxn is used to compare two given strings
           strcmp("sold","tight") =  ye ascii me diff btayga
           ascii  value jo hoti h unko compare krega ye ASCII me 7 bits hoti hai
*/

#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

int main () 
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[34] ;
    printf("the strcmp for s1,s2 returned %d\n",strcmp(s1,s2));
    puts(strcat(s1,s2));
    printf("the length of s1 is %d\n",strlen(s1));
    printf("the length of s2 is %d\n",strlen(s2));
    printf("the reversed string s1 is: \n");
    puts(strrev(s1));
    printf("the reversed string s2 is: \n");
    puts(strrev(s2));

    strcpy(s3 ,strcat(s1,s2));
    puts(s3);

    //allows user to enter two strings and then concetanate them by saying thatt
    //s1 is a frnd of s2
return 0 ;
}