#include<stdio.h>
/*int sum(int a[],int size)
{
    printf("d\n",sizeof(a));
    int ans=0;
    int i;
    for(i=0;i<size;i++);
    {
        ans+=a[i];
    }
}

int main()
{
    int arr[10]={1,1,1,1,1,1,1,1,1,1};
    printf("%d\n",arr);
    printf("%d\n",sum(arr,10)); 
    return 0;
}*/

/*---double pointers---*/
//pointers to store the address of other pointers 
/*int main()
{
    int i,*p1;
    i=10;
    p1=&i;
    printf("%d\n",&p1);
    int **p2=&p1;
    printf("%d\n",p2);
    printf("%d\n",&p2);
    return 0;
}*/

void increment1(int**p);
void increment2(int**p);
void increment3(int**p);
int main()
{
    int i,*p1;
    i=10;
    p1=&i;
    int **p2 = &p1;

    void increment1(p2);
    printf("%d\n",p2);

    void increment2(p2);
    printf("%d\n",p2);

    void increment3(p2);
    printf("%d\n",p2);

    // void increment1(p1);
    // printf("%d\n",p1);

    // void increment2(p1);
    // printf("%d\n",p1);

    // void increment3(p1);
    // printf("%d\n",p1);

    return 0;
}

void increment1(int**p)
{
    p=p+1;
    printf("%d\n",p);
}

void increment2(int**p)
{
    *p=*p+1;
    printf("%d\n",*p);
}

void increment3(int**p)
{
    **p=**p+1;
    printf("%d\n",**p);
}