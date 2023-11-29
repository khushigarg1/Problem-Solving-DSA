#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[20];
    printf("enter string");
    scanf("%s",ch); 
    //encounters a space character in between input string ,terminates reading the line and appends a newlinre character('\0')
    printf("%s",ch);
    puts(ch);
    return 0;
}

/*
{
    char ch[20];
    printf("enter string");
    gets(ch);             //gets() fxn reads a line at time interval  until newline character ('\n')
    printf("%s",ch);
    puts(ch);
}
*/