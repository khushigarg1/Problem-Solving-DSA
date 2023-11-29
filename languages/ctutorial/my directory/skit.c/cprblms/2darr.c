#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int a[2][2]={1,2,3,4,5};
    printf("2-Delements are\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}