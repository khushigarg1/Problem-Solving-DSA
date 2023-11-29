#include <stdio.h>
#include <conio.h>

int prime(int);

void main()
{
    int n,c;
    printf("enter a number");
    scanf("%d", &n);

    prime(n);

    getch();
}
  
int prime(int x)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < i/2; j++)
        {
            if (j = (i / 2) + 1)
            {
                printf("%d\n", j);
            }
        }
    }
}