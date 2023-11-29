#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,sum=0;
    printf("enter the no.");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
         printf("%d\t",sum);
         sum=sum+i;
    }

    // printf("%d\t",j);
    return 0;
}