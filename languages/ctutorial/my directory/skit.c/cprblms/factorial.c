#include <stdio.h>
#include <conio.h>
int fact(int);
int fact(int num)
{
    int i, fact = 1;
    if (num < 0)
    {
        printf("the negative number factorial does not exist");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = i * fact;
        }
    }
    return (fact);
}

void main()
{
    int n1,i, f;
    printf("enter one numbers\n");
    scanf("%d", &n1);

    f = fact(n1);
    printf("factorial of %d is %d\n", n1, f);

    getch();
}

/*int fact(int num)
{
    int i, fact = 1;
    if (num < 0)
    {
        printf("the negative number factorial does not exist");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = i * fact;
        }
    }
    return (fact);
}*/
