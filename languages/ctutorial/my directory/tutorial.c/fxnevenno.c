#include<stdio.h>
#include<conio.h>
int evod(int);
void main()
{
    int a,n;
    printf("enter number");
    scanf("%d",&n);
    evod(n);
    printf("even numbers are :\n",a);
    getch();
}

int evod(int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        {
            return i;
        }
    }
}