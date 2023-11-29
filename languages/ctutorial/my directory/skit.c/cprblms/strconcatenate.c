#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char str1[20],str2[20];
    char str3[40];

    printf("enter string 1: ");
    gets(str1);
    
    printf("enter string 2: ");
    gets(str2);
    for(i=0,j=0;str1[i]!='\0';i++,j++) 
    {
        str3[j]=str1[i];
    }
    i=0;
    printf("%s",str3);
    for(i=0,j=0;str2[i]!='\0';i++,j++)
    {
        str3[j]=str2[i];
    }
    str3[j]='\0';
    printf(" %s",str3);
    
    return 0;
}

/*
{
    int i,j;
    char str1[10],str2[10],str3[20];

    printf("enter the string 1: ");
    gets(str1);
    printf("enter the string 2:");
    gets(str2);

    while (str1[i]!='\0')
    {
        str3[j]=str1[i];
        j++;
    }

    i=0;
    while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        j++;
    }
    str3[j]='\0';

    printf("concate string= %s",str3);
    
return 0;
}*/