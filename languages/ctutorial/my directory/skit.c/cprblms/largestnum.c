#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,c,max=0;
    printf("enter a number ");
    scanf("%d",&n);

    
    for(i=1;i<=n;i++)
    {
        printf("element %d:\n",i);
        scanf("%d",&c);
        if(c>max)
        {
            max=c;
        }
    }
    printf("largest number is %d",max);
    return 0;
}