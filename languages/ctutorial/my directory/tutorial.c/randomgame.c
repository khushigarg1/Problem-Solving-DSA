#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
    int num,guess,attempt =1;
    srand(time(0));
    num = rand()%100 + 1;           //it geanertes a random number between 1 to 100 
    //keep running the loop untill the number is guessed 
    do
    {
        printf("guess number between 1 to 100 \n");
        scanf("%d",&guess);
        if(num>guess)
            {
                printf("highest number please!\n");
            }
        else if(num < guess)
            {
                printf("lowest number please!\n");
            }
        else
            {
               printf("you guessed it in %d attempt ",attempt);
            }
        attempt++;
    } while(guess!=num);
 
return 0 ;
}