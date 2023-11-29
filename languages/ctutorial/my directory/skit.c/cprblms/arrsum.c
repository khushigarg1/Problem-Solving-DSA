#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,arr[5],sum=0;
    printf("enter the numbers of an array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter elements are:\n");
        scanf("%d\n",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    getch();
}