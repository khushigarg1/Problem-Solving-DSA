#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, b[10], a[10]; //initialization
    printf("enter the number");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter array elements are");
        scanf("%d", &a[i]);
    }
    printf("array elements are:\n");
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n", a[i]);
    }

    printf("reverse elements are:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }

    /*for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            b[i]=a[j]; 
        }
        printf("reverse elements are:\n");
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d",b[i]);
            }
        }
    }
    */
    getch();
}
