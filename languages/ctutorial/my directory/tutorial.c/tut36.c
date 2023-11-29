#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void arrayrev(int arr[])
{
    int temp;
    for(int i=0;i<4; i++)
    {
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}

int main () 
{
    int arr[] = {1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        printf("%d",arr[i]);
    }
    arrayrev(arr);
    printf("\n");
    for(int i=0;i<7;i++)
    {
        printf("%d",arr[i]);
    }
return 0;
}