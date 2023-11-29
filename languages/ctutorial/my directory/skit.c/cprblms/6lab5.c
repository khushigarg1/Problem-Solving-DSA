#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
            printf("\n");
        
    }
    return 0;
}