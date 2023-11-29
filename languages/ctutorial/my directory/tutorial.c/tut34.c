/********STRINGS IN C***********/
/*
is string datatype in c?
->no
-> v havw char , int,floatand other dwata types but no'string' in c
-> string is not supported data type in c but it is a useful concept used to model real wworld entities like name,city etc.
-> v express strings using an array of charaacters terminated by a nulll character ('/0')
-> we should have character carray of characters length + 1 in c bcoz last ek null memory me leta hai

WHAT ARE STRINGS IN C?
-> string array of character terminated by null('\0') character 
-> string is created by creating an array of character
-> we need an extra character ('\0' or null character ) to tell the compiler that the string eneds here

CREATING STRING IN C
-> we can crreate a character arrayin the following ways:
-> char name[] ="harry";
-> char name[] ={'h','a','r','r','y','\0'};

TAKING STRING INPUT FROM THE USER
CHAR STR[52];
gets(str);        we have to input string baki sb kam vo kr deta hai strme rkhna wha le jna nd al or string me store kr dega
printf("%s",str);
puts(str);      //aliter  it will print output
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void printstr(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main () 
{
    // char str[] = {'h','a','r','r','y','\0'};
    // char str[] ="harry";
    // printstr(str);
    char str[34];
    gets(str);           //will give input
    //we can also take input from scanf but we cqant print white spaces only onew word can print without spaces
    printf("uisng custom fxn printstar\n");
    printstr(str);
    printf("\nusing printf: %s\n",str);
    printf("using puts: \n");
    puts(str);                       //wil sam ework as printf
    return 0;
}