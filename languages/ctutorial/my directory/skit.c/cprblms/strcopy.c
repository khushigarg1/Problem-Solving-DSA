#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char str1[10], str2[10];

    printf("enter the string1:");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
        printf("%c\n", str2[i]);
    }
    str2[i] = '2';

    printf("str1=%s \n str2=%s", str1, str2);
    return 0;
}