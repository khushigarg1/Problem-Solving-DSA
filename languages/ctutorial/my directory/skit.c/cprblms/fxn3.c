//return type and no arguments
#include<stdio.h>
#include<conio.h>

int sum(int,int);

void main()
{
    int a,b,c;
    c=sum(a,b);
    printf("sum is %d",c);
}

int sum (int x,int y)
{
    int z;
    z=x+y;
    return z;
}