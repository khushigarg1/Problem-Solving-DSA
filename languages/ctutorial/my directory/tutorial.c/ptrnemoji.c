#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
int i,j;
// char sml = 1;
for(i=1;i<6;i++)
{
    for(j=5;j>=i;j--)
    {
        printf("%c",1);
    }
    printf("\n");
}
return 0 ;
}