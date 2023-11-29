#include<stdio.h>
#include<conio.h>
int subtract(int,int);

void main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);

    c=subtract(a,b);
    printf("subtract of two numbers is %d",c);

    getch ();
}

int subtract(int x,int y)
{
    int z;
    z=x-y;
    return z;
}