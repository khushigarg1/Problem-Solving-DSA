#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

return 0 ;
}