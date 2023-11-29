#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, c;
    int a[5] = {5, 6, 3, 2, 1};

    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 4; i++)
        {
            if (a[i] > a[i + 1])
            {
                c = a[i + 1];
                a[i + 1] = a[i];
                a[i] = c;
            }
        }
    }
    printf("sorted eleements are:-\n");
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}