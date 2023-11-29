#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0;
    for(i=0;i<10;i++)
    {
    {
    printf("enter 10 integer numbers: ");
    scanf("%d\n",&n);
    }
    if(n>0)
    {
        pos++;
    }
    else if(n<0)
    {
       neg++;
    }
    else if(n==0)
    {
        zero++;
    }
       }
          printf("positive number is %d\n",pos);
    printf("negatve number is %d\n",neg);
    printf("zero number is %d\n",zero);
    return 0;
}