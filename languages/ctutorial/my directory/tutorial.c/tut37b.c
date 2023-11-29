/*******we can ue structures to create user defined data types in c****/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};

int main()
{
    struct student harry, ravi, shubham;
    harry.id = 34;
    ravi.id = 35;
    shubham.id = 36;
    harry.marks = 1;
    ravi.marks = 2;
    shubham.marks = 3;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';
    strcpy(harry.name, "harry potter student of the year");
    
    printf("harry's name is %s\n",harry.name);

    printf("harry got %d id\n",harry.id);
    printf("ravi got %d id\n",ravi.id);
    printf("harry got %d marks\n",harry.marks);
    printf("harry got %d favourite character\n",harry.fav_char);
    printf("shubham got %d id\n",shubham.id);
    printf("ravi got %d marks\n",ravi.marks);
    printf("ravi got %d favourite character\n",ravi.fav_char);
    printf("shubham got %d marks\n",shubham.marks);
    printf("shubham got %d favourite character\n",shubham.fav_char);

    return 0;
}