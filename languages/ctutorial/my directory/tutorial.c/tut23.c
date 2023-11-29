/************ARRAYS***********/
/*
-> collection of data of same type.
-> items are stored at contiguous memory location.
-> it caan also store the collection of derived data types ,such as pointers ,structures.
-> a one-dimenisonal array is like a list
-> a two dimensional array is like a list
-> a c langauage places no limits on the number of dimensions in an array
-> some texts refer to a one-dimensional arrays ass vectors , two dimensional arrays as matrices , and use the general
   term arrays when the number f dimensions is undpecified or unimportant 
*/
/*
//************WHY DO WE NEED ARRAYS ?***********
-> code that use arrays is sometimes more organized and readable 
-> if u weer to store that marks in a test of 56 students , creating 56 variables will amke progarm look cluttered and messy
-> solution to this is array !
-> we can create rrays of integers and store the consecutive marks corresponding to the roll number in teh array

**********ADVANTAGES OF AN ARRAY*********
-> it is used to represent multiple data items of same type by using only single name
-> accessing an item in a given array is very fast
-> 2 dimensional arrays makes it eays in mathematical applications as it is used to represent a matrix

**********PROPERTIES OF ARRAY*********
-> data in an array is stored in contiguous memory locations
-> each element of an ARRay is of same size
-> any element of the arry with given index can be ccessed very quickly by using its address which can be
   calculated using the base address and the index

***********syntax for declaring and initializing an array**********
data_type name[size]
data_type name[size] = { x,y,z.......}://size not required in this case!
data_type name[rows][columns]: // for 2-d arrays
we can also initialize the array one by one by accessing it using its index:
name[0] = 0;
*/
   
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
   // int marks[4];
   // marks[0]=34;
   // printf("marks ofstudent 4 is %d\n",marks[0]);
   // marks[0]=154;
   // marks[1]=14;
   // marks[2]=54;
   // marks[3]=4;
   
   // for(int i=0; i<4; i++)
   // {
   //    printf("enter the value of %d elements of the array\n",i);
   //    scanf("%d",&marks[i]);
   // }

   //int marks[4] = {45,23,48,68};
   // int marks[] = {45,23,48,68};
   // for(int i=0; i<4; i++)
   // {
   //    printf("the value of %d elements of the array is: %d\n",i,marks[i]);
   // }

   /**********2-d array***********/
   int marks[4][4] = {{1,2,3,4} , {5,6,7,8}};
   for(int i=0; i<2; i++)
   {
      for(int j=0; j<4 ; j++)
      {
         //printf("the value of %d,%d elements of the array is: %d\n",i,j,marks[i][j]);
         printf("%d ",marks[i][j]);
      }
      printf("\n");
   }
   return 0 ;
}

//**********DISADVANTAGES OF USING ARRAYs************
/*
-> poor time complexity of insertion and deletion operation
-> wastage of memory since arrays are fixed in size
-> if there is enough present in the memory but not in contiguous form ,u will not be able initialise ur array
-> it is not possible to increase the size  of the array, once u have declared the array
*/