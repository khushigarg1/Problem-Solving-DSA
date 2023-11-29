#include<stdio.h>
#include<conio.h>
int main()
{
    int i=100,sum=0;
    for(i=100;i<=200;i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }

    }
    printf("the sum is %d",sum);
     return 0;
}
/*{
    int i=100,sum=0;
    while(i<200)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
            sum=sum+i;
            i++;
        }
        printf("sum is %d",sum);
    }
}*/