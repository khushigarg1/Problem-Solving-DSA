#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j,M4[i][j], M1[10][10], M2[10][10], M3[10][10], n, m;
    printf("enter the no. of  row and column");
    scanf("%d%d", &n, &m);
    printf("enter elements of first matrix are:\n");
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            scanf("%d", &M1[i][j]);
        }
    }

    printf("enter elements of second matrix are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&M2[i][j]);
        }
    }

    printf("addition of matrix are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
                M3[i][j] = M1[i][j] + M2[i][j];
            printf("%d\t",M3[i][j]);

           // M4[i][j]=M1[i][j]-M2[i][j];
           // printf("%d\t",M4[i][j]);
        }
        printf("\n");
    }
    return (0);
}