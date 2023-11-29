#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], b[10], n, i, j;
    printf("enter the no of array");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("enter the elements:\n");
        scanf("%d", &a[i]);
    }

    printf("array elements are:-");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("reverse elements are:-");

    for (i = n; i >= 1; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}