/*
char ch[10]="hello"; this is a string 
char ch[10]={'h','e','l','l','o'};
this is a character array not a string
*/

#include<stdio.h>
#include<conio.h>
int main()
// {
//     char ch[6] ="hello";        //{'h','e','l','l',''o'};
//     int i;
//     for(i=0;ch[i]!='\0';i++)
//     {
//         printf("%c",ch[i]);
//     }
//     return 0;
// }

// {
    
//     char name[25];                           //initialization
//     printf("enter your name");
//     scanf("%s",name);                   //%s format specification
//     printf("hello %s!",name);             //scanf is not cpacble to print multi qorld string so we use gets
// }

{
    char name[25];
    printf("enter your full name");
    gets( name );                        //reading string
    //printf("%s",ch);
    puts("hello!"); 
    puts(name);                          //writing string
    return 0;
}
/*
{
    char[6]="hello";
    printf("%s",ch);
    return 0;
}*/