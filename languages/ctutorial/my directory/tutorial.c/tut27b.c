/*ARRAYS AND POINTERS
-> considr following declaration : int arr[10]:
-> what is the type of arr?                int
-> however , arr,by itself , without any index subscripting can be assigned to an integer pointer
-> what type does arr[i] have!              int
int* ptr = arr;         it will print frst elemnt of an array   thats base address element of an array
arr[i] = *(arr+i)      ye dono ek bt hai
if arrr is a pointer t arr[0] then arr+i is a pointer to arr[i]

sizeof(int) in an arry depends on a architecture (WARNING) like kisi m int 4 bytes kisi me 2 bytes
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
    int arr[] = {1,2,3,4,5,6,67};
    int* arrayptr = arr;
    printf(" value at position 3 of array is %d\n",arr[3]);        //1    
    printf("the address of first elemnt of the array is %d\n",&arr[0]);        //6422212
    printf("the address of first elemnt of the array is %d\n",arr);        //6422212
    printf("the address of second elemnt of the array is %d\n",&arr[1]);        //6422216
    printf("the address of second elemnt of the array is %d\n",arr + 1);        //6422216
    //arr++;  arr is constant we cant do it bcoz arr is a pointer jisme frst index k element ka address h 
    //arr k andr j address h vo vhi rhega apn usko change nh kr skte  i.e. constant     
    
    arrayptr++;    // it will not through an error
    printf("the value at adrress of firrst element of the array is %d\n",  *(&arr[0]));        //6422212
    printf("the value at adrress of firrst element of the array is %d\n",  *(arr));      //6422212
    printf("the value at adrress of firrst element of the array is %d\n",  arr[0]);      //6422212
    printf("the value at adrress of seecond  element of the array is %d\n",*(&arr[1]));        //6422216
    printf("the value at adrress of seecond  element of the array is %d\n",*(arr + 1));        //6422216
    printf("the value at adrress of seecond  element of the array is %d\n", arr[1]);        //6422216

return 0 ;
}