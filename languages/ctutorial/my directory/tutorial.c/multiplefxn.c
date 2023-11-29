#include<stdio.h>
#include<conio.h>
void funct1();
void funct2();

void main()
{
    printf("main function\n");
    funct1();
    funct2();
}

void funct1()
{
    printf("yes");
}

void funct2()
{
    printf("no\n");
}