#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i%2==0)
            {
                 if (j%2==0)
                 printf("*");
               
                 else
                 printf(" ");
            }
            
            else
            {
                if(j%2!=0)
                printf("*");

                else
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}