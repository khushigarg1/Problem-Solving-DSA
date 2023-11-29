#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, a[10][10], n, m;
    printf("enter the no. of  row and column");
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            printf("enter 2-d elements are\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("2d elements are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return (0);
}