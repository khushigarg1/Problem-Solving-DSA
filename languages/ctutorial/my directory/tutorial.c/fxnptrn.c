#include<stdio.h>
#include<conio.h>

int ptrn(int);
void main()
{
    int x;
    ptrn(x);
}

int ptrn(int i)
{
    int j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
        }
        printf("\n");
    }
    return (0);
}