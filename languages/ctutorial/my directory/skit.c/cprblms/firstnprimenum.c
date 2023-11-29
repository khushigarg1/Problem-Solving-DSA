#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;

    printf("enter how many prime numbers we want: ");
    scanf("%d", &n);

    int count = 0;

    while (count < n)
    {
        for (i = 0;  ; i++)
        {
            for (j = 2; j < i / 2; j++)
            {
                if (i % j == 0)
                {
                    break;
                }

                if (j = (i / 2) + 1)
                {
                    printf("%d\n", i);
                }
            }
        }
        count++;
    }

    printf("first n numbers is %d\n", i);
    return 0;
}