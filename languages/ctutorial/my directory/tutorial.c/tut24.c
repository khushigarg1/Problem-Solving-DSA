// kms to  miles
// inches to foot
// cms to inches
// pounds to kgs
// inches to meters
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
    char input;    //takeing a character
    float kmtomiles = 0.621371;        //conversion factors
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundstokgs = 0.453592;
    float inchestometers = 0.0254;
    float first , second;
    
    while(1)
    {
        printf("enter the input character  q to quit \n1. kms to  miles\n 2. inches to foot\n 3. cms to inches\n 4. pounds to kgs\n 5. inches to meters\n");
        scanf(" %c", &input);
        
        switch (input)
        {
        case 'q':
            printf("quittting the program....");
            goto end;
            break;
        
        case '1' :
            printf("enter quantity to the first unit\n");
            scanf("%f",&first);
            second = first * kmtomiles;
            printf("%f kms is equal to %f miles\n ",first ,second);
            break;

        case '2' :
            printf("enter quantity to the first unit\n");
            scanf("%f",&first);
            second = first * inchestofoot;
            printf("%f inches is equal to %f foot\n ",first ,second);
            break;
            
        case '3' :
            printf("enter quantity to the first unit\n");
            scanf("%f",&first);
            second = first * cmstoinches;
            printf("%f cms is equal to %f inches\n ",first ,second);
            break;
            
        case '4' :
            printf("enter quantity to the first unit\n");
            scanf("%f",&first);
            second = first * poundstokgs;
            printf("%f pounds is equal to %f kgs\n ",first ,second);
            break;
            
        case '5' :
            printf("enter quantity to the first unit\n");
            scanf("%f",&first);
            second = first * inchestometers;
            printf("%f inches is equal to %f meters\n ",first ,second);
            break;
            
        default:
            break;
        }
    }
    end:
return 0 ;
}