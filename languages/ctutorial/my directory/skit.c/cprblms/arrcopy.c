#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,a[10],b[10];        //initialization
    printf("enter the number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter array elements are");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("array 1- elements are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter 2-elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",b[i]);
    }
    getch();
}
    
    