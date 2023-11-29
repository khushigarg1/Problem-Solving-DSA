#include <stdio.h>
#include <conio.h>
int main()

{
    int n, i, j, sum = 0;
    printf("enter a number");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        
        if (j == (i / 2) + 1)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("sum is%d", sum);
    return 0;
}