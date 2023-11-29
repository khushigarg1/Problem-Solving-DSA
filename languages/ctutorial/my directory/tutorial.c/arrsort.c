#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j, temp = 0, a[10]; //initialization
    printf("enter the number");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter array elements are");
        scanf("%d", &a[i]);
    }
    printf("array elements are:\n");
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("sorted elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    getch();
}