#include<stdio.h>
void main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
        printf("enter element are:\n");
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<5;i++)
    {
       printf("a[%d]=%d\n",i,a[i]); 
    
    }
    getch();
}