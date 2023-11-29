#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<10;i++)
    {
        for(j=0;j<12;j++)
        {
          if(i<=3)
        {
            if(j==5-i || j==7+i ||j==i+3 ||j==9-i)
            printf("*");

            else
            printf(" ");
        }

        else if(i>3)
        {
            if(j==i-3 || j==15-i)
            printf("*");

            else
            printf(" ");
        }
        }
        printf("\n");
    }
}