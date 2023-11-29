#include <stdio.h>
#include <conio.h>
int sum1(int, int);

void main()
{
    int a, b,sum;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);

    sum = sum1(a,b);
    printf("sum is %d", sum);

    getch();
}

int sum1(int x, int y)
{
    int z;
    z = x + y;
    return (z);
}
