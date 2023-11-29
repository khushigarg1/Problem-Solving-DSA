#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("array elements are:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}