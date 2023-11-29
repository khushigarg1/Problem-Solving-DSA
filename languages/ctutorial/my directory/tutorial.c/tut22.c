/*
kms to  miles
inches to foot
cms to inches
pounds to kgs
inches to meters
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int choice, a;

    //  printf("enter your choice");

    printf("enter 1.for converting kms to miles\n");
    printf("enter 2.for converting inches to foot\n");
    printf("enter 3.for converting cms to inches\n");
    printf("enter 4.for converting pounds to kgs\n");
    printf("enter your choice");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("enter kilometers\n");
        scanf("%d", &a);
        printf("%d kliometers converted into miles is %f\n", a, a * 0.621);
        break;

    case 2:
        //if(choice==2)

        printf("enter inches \n");
        scanf("%d", &a);
        printf("%d inches converted into foot is %f\n", a, a * 0.0833);

        break;

    case 3:
        //if(choice==3)

        printf("enter cms\n");
        scanf("%d", &a);
        printf("%d cms converted into inches is %f\n", a, a * 0.394);

        break;

    case 4:
        //if(choice==4)

        printf("enter pounds\n");
        scanf("%d", &a);
        printf("%d pounds converted into kg is %f\n", a, a * 0.454);

        break;

    default:

        printf("exit\n");
    }

    return 0;
}