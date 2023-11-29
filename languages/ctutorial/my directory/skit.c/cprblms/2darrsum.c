#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, a[10][10], n, m,sum=0;
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
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum is %d",sum);   
    return (0);
}

/*
int main()
{
    int i,j,sum=0,a[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter elements are \n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum is %d",sum);
    return (0);
}*/