#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void starptrn(int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void starptrnrev(int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<= rows-i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


int main ()
{
    int rows , type;
    printf("enter 0 for star pattern and 1 for reverseedd star pattern\n");
    scanf("%d",&type);
    printf("how many rows do u want: ");
    scanf("%d",&rows);
    switch (type)
    {
    case 0:
        starptrn(rows);
        break;

    case 1:
        starptrnrev(rows);
        break;
    
    default:
        printf("you have entered wrong choice");
        break;
    }
     
return 0 ;
}