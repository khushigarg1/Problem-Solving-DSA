#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, a[10][10], n, m, transpose[10][10];
    printf("enter the no. of  row and column");
    scanf("%d%d", &n, &m);
    printf("enter the elements of the matrix a :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("tranpose of the a:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return (0);
}