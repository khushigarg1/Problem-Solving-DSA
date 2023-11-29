#include<stdio.h>
#include<conio.h>
int main()
{
    int length=0;
    char ch[15];
    printf("enter the string: ");
    gets(ch);
    puts(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        length++;
    }
    printf("enter length %d",length);
    return 0; 
}