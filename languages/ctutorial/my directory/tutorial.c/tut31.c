/*********FXNS : CALL BY VALUE VS CALL BY REFERENCE********/
/*
ACTUAL AND FORMAL PARAMETERS
-> when a fxn is called, the value (expression ) that are passed in the call are calleed the arguments or actual parameters
-> formal parameters are local variables which re assigned values from the arguments when the fxn is called

TYPES OF FXN CALLS IN C PROGRAMMING
when a fxn is called, we can call afxn in ttwo diff ways,based on how w specify the arguments, and these two ways are:
* CALL BY VALUE 
* CALL BY REFERENCE  -> hum yha main fxn m fxn ka address bhejen or uski copy bn jaygi fxn m jo b main vale parameters ko point kregi
or ydi apn us star ko dereference then we can change actaual value address pr ja kr change

CALL BY VALUE 
-> when wee call a fxn by value,it means that we r pssing the values of arguments which r copied into the formal parameters of fxn
-> which means that original value remains unchanged and only the paraeteres inside the fxn changes

CALL BY REFERENCE
-> the cyr method of passing arguments to a c fxn copies the address of the arguments intoo the formal arguments
-> addresses of the actual arguments are copied and then assigned to the corrresponding formal arguments
*/
/*
#include<stdio.h>
void swap(int * p ,int* q);
void swap(int* p, int* q)
{
    int temp;
    temp= *p;       //save vvalue at address p
    *p= * q;        //put q into p
    *q =  temp;  //put temp into q
}
int main()
{
    int a=34, b=74;
    printf("%d and %d\n ",a,b);
    swap(&a,&b);
    printf("%d and %d\n ",a,b);
    return 0;
}*/
