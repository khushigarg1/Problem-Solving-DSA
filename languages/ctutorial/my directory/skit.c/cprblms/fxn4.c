//return type and arguments

#include<stdio.h>
#include<conio.h>

int max(int,int);

void main()
{
    int a=10,b=5,c;
    c=max(a,b);
    printf("maximum=%d\n",c);
    getch ();

}

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}