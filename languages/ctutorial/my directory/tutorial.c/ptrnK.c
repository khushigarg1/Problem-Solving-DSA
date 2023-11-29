#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<8;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i<4)
            {
            if(j==1 || j==6-i)
            printf("*");

            else
            printf(" ");
            }

            if(i>3)
            {
                if(j==1 || j==i-2)
                printf("*");

                else
                printf(" ");
            }
        }
        printf("\n");
    }
}