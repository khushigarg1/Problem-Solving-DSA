//recursions one problem into sub problems
//can be solved recursively and can be also solved iteratively

#include <stdio.h>
#include <conio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("enter a number you want the factorial of \n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));

    return 0;
}