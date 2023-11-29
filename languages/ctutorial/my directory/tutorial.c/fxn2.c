//no return type and but arguments

#include<stdio.h>

void sum(int,int);
void main()
{
    int a=10,b=5;
    sum(a,b);
}

void sum(int x,int y)
{
    int z=x+y;
    printf("sum is %d",sum);
}