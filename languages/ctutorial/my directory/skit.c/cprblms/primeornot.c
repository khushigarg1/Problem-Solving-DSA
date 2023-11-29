#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("ennter a number");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    
    if (i == n)
    {
        printf("%d is aprime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}