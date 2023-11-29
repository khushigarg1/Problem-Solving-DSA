#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[10]="hello";
    char str2[10];
    char str3[10]="hii";
    
    printf("string 1 is %s",str1);
    printf("length=%d",strlen(str1));
    printf("lower=%s",strlwr(str1));
    printf("upper=%s",strupr(str1));
    printf("reverse=%s",strrev(str1));
    printf("copied=%s",strcpy(str2,str1));              //strcpy(str2,str1) then print str2
    strcat(str3,str1);
    printf("concatenated =%s",str3);
    getch();
}