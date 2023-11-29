/*WHY AND HOW TO PASS ARRAYS */
/*
-> we pass arrays  to a fxn when we need to pass a list of values to a given fxn
-> we can pass the arrays to a fxn :
1. by declaring array as a parameter in the fxn     int avg(int arr[])
   -> inside function if we change value of array , it gets reflected in main fxn 
2. by declaring a pointer in the fxn to hold the base address of the array   int sum(int* ptr)
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d \n",i,arr[i]);        
    }
    arr[0] = 382;   //if u chang any value here in array then it gest reflected inmain() i.e. it will change actual value also
}

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        //printf("the value at %d is %d \n",i,ptr[i]);        
        printf("the value at %d is %d \n",i,*(ptr+i));        
    }
    *(ptr +2) = 34;
}

void func3(int arr[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("the value at %d,%d is %d \n ",i,j,arr[i][j]);
        }
    }
}

int main ()
{
    // int arr[] = {1,2,3,4};
    // printf("the value at index is %d\n",arr[0]);
    // func1(arr);
    // printf("the value at index is %d\n",arr[0]);      //382
    // func2(arr);
    // func2(arr);
    
    int arr[2][2]={{1,2} , {3,4}};
    func3(arr);
    return 0 ;
}