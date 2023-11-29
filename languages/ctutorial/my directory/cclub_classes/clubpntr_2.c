#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
/*int main()
{
    int arr[3]={11,12,13};
    char b[3]="abc";    
    printf("%d\n",b);     //base address of character array
    printf("%d\n",*(b+1));    //value of b = 98
    printf("%u\n",b);     //base address of character array
    printf("%s\n",b);     //print all string
    char c1 ='a';
    printf("%d\n",&c1);
    char *pc=&c1;
    printf("%d\n",*pc);    //print the value of a =97
     return 0;
}*/

/*----how pointers collabartes in c fxn----*/
void print(int* p);
void incrementpointer(int*p);
void increment(int*p);

int main()
{
    int i=10;
    int *p=&i;
    print (p);
    printf("%d\n",p);
    incrementpointer(p);
    printf("%d\n",p);       //yadi app kisi pointer ko fxn me pass krtehona to sirf copy pass hoti main pointer pass nh hota
    increment(p);
    printf("%d\n",p);
    return 0;
}

void print(int *p)
{
    printf("%d\n",*p);
}

void incrementpointer(int*p)
{
    printf("%d\n",p);       //yha fxn ki copy pass hui 
    p=p+1;            //fxn ko recieve hui h copy of the pointer not main address
    printf("%d\n",p);
}

void increment(int*p)
{
    (*p)++;          //yha value change ho jaygi bcoz hum address pr ja kr value change kr rhe to value change ho jaygi
}