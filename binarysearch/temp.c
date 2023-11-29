#include <stdio.h>
int main()
{
    const int x = 5;
    const int *ptr;
    ptr = &x;
    *ptr = 10;
    printf("%d", x);
}