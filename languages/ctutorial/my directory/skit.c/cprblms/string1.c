#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[6];                       //initialization at run time
    printf("enter the string");
    scanf("%s",ch);

    //printf("output string: %s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }
    return 0;
}